all: test_code.gcno
	gcov -n -f -a ./intvector.gcno
	
test_code.gcno: test.out
	./test.out

test.out: test_code.o intvector.o	
	c++ -o test.out -g -O0 -fprofile-arcs -ftest-coverage test_code.o intvector.o

intvector.o: intvector.cpp
	c++ -c -g -O0 -fprofile-arcs -ftest-coverage intvector.cpp

test_code.o: test_code.cpp clean
	c++ -c -g -O0 -fprofile-arcs -ftest-coverage test_code.cpp

clean: 
	rm *.gcno *.gcov *.gcda *.out *.dSYM *.o || true
