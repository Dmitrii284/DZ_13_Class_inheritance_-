
/*
Основы ООП на языке С++
Наледование
Задание
Создание иерархии классов
Cоздать иерархию классов ввода вывода языка с++, Укажите на схеме какие классы
унаследованы от каких с каким типом наследования. и какие методы переходять от
родителей к потомкам. Формат диаграммы свободный.
``` задание сдаётся в виде текстового документа с иллюстрациями либо в виде файла -
изображения диаграммы, с пояснениями
*/

/*

Иерархия классов ввода-вывода на языке C++ может быть следующей:

1. Базовый класс I/O (Input/Output)
   - От этого класса могут наследоваться все классы ввода-вывода в языке C++

2. Класс Input (ввод данных)
   - Наследуется от класса I/O
   - Методы:
     - read() - чтение данных с устройства ввода

3. Класс Output (вывод данных)
   - Наследуется от класса I/O
   - Методы:
     - write() - запись данных на устройство вывода

4. Класс ConsoleInput (ввод с консоли)
   - Наследуется от класса Input
   - Методы:
     - read() - переопределение метода чтения для ввода с консоли

5. Класс FileInput (ввод из файла)
   - Наследуется от класса Input
   - Методы:
     - read() - переопределение метода чтения для ввода из файла

6. Класс ConsoleOutput (вывод в консоль)
   - Наследуется от класса Output
   - Методы:
     - write() - переопределение метода записи для вывода в консоль

7. Класс FileOutput (вывод в файл)
   - Наследуется от класса Output
   - Методы:
     - write() - переопределение метода записи для вывода в файл

Пример использования этих классов:


#include <iostream>
#include <fstream>

class IO {
public:
    virtual void read() = 0;
    virtual void write() = 0;
};

class Input : public IO {
public:
    void read() override {
        std::cout << "Reading input data..." << std::endl;
    }
};

class Output : public IO {
public:
    void write() override {
        std::cout << "Writing output data..." << std::endl;
    }
};

class ConsoleInput : public Input {
public:
    void read() override {
        std::cout << "Reading from console..." << std::endl;
    }
};

class FileInput : public Input {
public:
    void read() override {
        std::cout << "Reading from file..." << std::endl;
    }
};

class ConsoleOutput : public Output {
public:
    void write() override {
        std::cout << "Writing to console..." << std::endl;
    }
};

class FileOutput : public Output {
public:
    void write() override {
        std::cout << "Writing to file..." << std::endl;
    }
};

int main() {
    ConsoleInput input;
    FileOutput output;

    input.read();
    output.write();

    return 0;
}


В данном примере создаются объекты класса `ConsoleInput` и `FileOutput`, которые являются потомками классов `Input` и `Output` соответственно.
При вызове методов `read()` и `write()` происходит переопределение методов в соответствующих классах-потомках и вывод соответствующих сообщений.
*/