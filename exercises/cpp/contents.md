# Упражнения по С++

1. [Классы](classes/classes.md).
1. [Переопределение операций](operators/operators.md).
1. Статический полиморфизм.
1. Исключения.
1. Наследование.
1. Динамический полиморфизм.
1. Шаблоны.
1. STL.

# Необходимый софт

- компилятор `g++` / `clang++`
- текстовый редактор
- анализатор кода `valgrind` / sanitizers

# Добавление тестов

## Требования к тестам

- Тесты должны покрывать все требования.
- Если задание состоит в разработке модуля (класса / функции) или набора модулей, то тесты должны быть модульными. Если задание состоит в написании программы целиком и ее архитектура (модули, из которых она состоит) может быть разной, то тесты должны быть системными.
- При тестировании классов необходимо тестировать поведение его объектов в их разных состояниях.
- Тестирование одного упражнения должно запускаться как можно проще (например: `make test`).

## Оформление тестов

- Тесты к одному упражнению должны располагаться в отдельной директории.
- Директория должна называться так же, как и идентификатор упражнения (он указан перед текстом каждого упражнения).
- В корне этой директории должен быть файл `README.md` в формате Github Markdown, в котором описано, как подготовить тестирование и как его выполнить.
- В директории должно быть эталонное решение.
- Эталонное решение должно проходить все тесты.
- Тесты должны покрывать бОльшую часть строк и ветвей его кода.
- Рядом с эталонным решением должен быть отчет о тестировании и о покрытии (его можно получить утилитой `gcov`).

## Публикация тестов

- Тесты к одному упражнению добавляются как отдельный pull request.
- Pull request должен быть от имени пользователя, однозначно соответствующего одному из студентов.


# Материалы для подготовки

- [Методическое пособие по С++, написанное лекторами курса](http://cmcmsu.info/download/cpp.base.oop.pdf)
- [Слайды лекций](http://cmcmsu.info/2course/) - искать по заголовку "Материалы лекций"
