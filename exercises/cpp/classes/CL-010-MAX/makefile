all: test_code.gcno
	gcov -n -f -a ./maxseq.gcno
	
test_code.gcno: test.out
	./test.out

test.out: test_code.o maxseq.o	
	c++ -o test.out -g -O0 -fprofile-arcs -ftest-coverage test_code.o maxseq.o -Wall

maxseq.o: maxseq.cpp
	c++ -c -g -O0 -fprofile-arcs -ftest-coverage maxseq.cpp -Wall

test_code.o: test_code.cpp clean
	c++ -c -g -O0 -fprofile-arcs -ftest-coverage test_code.cpp -Wall

clean: 
	rm *.gcno *.gcov *.gcda *.out *.dSYM *.o || true
