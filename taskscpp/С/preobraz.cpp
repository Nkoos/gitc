#include <iostream>

int main()
{
    unsigned int age {25};
    std::cout << "age = " << age << std::endl;
    //Здесь переменная age представляет тип unsigned int  и условно хранит возраст.
    // Эта переменная инициализируется числом 25
    // а все целочисленные литералы без суффиксов по умолчанию представляют тип int (signed int).
    //  Но компилятор знает как преобразовать значение 25 к типу unsigned int, и каких-то проблем в данном случае не будет.
return 0;
}

#include <iostream>
int main()
{
    unsigned int age{-25};
    std::cout << "age = " << age << std::endl;
    //Здесь переменной присваивается значение {-25} , 
    //в то время как тип переменной unsigned int предполагает использавание
    //только положительных чисел, в данном случае получим ошибку компиляции.
    //error: narrowing conversion of '-25' from 'int' to 'unsigned int' [-Wnarrowing]
return 0;
}
//Рассмотрим, как выполняются некоторые базовые преобразования:
//Переменной типа bool присваивается значение другого типа. В этом случае переменная получает false, если значение равно 0. Во всех остальных случаях переменная получает true.
{

bool a = 1; //true
bool b = 0; // false
bool c = 'g'; //true
bool d = 3.4; //true

}
{
//Числовой или символьной переменной присваивается значение типа bool. 
//В этом случае переменная получает 1, если значение равно true, либо получает 0, если присваиваемое значение равно false.
int c = true; // 1
double d = false // 0
//Целочисленной переменной присваивается дробное число. В этом случае дробная часть после запятой отбрасывается.
int a {3.4} // 3
int b {3.6} // 3
//Переменной, которая представляет тип с плавающей точкой, присваивается целое число.
float a = 35005; // 35005
// этом случае, если целое число содержит больше битов, чем может вместить тип переменной, то часть информации усекается.
double b = 3500500000033; // 3.5005e+012
//Переменной беззнакового типа (unsigned) присваивается значение не из его диапазона. В этом случае
//результатом будет остаток от деления по модулю. Например, тип unsigned char может хранить значения
//от 0 до 255. Если присвоить ему значение вне этого диапазона, то компилятор присвоит ему остаток от
//деления по модулю 256 (так как тип unsigned char может хранить 256 значений). Так, при присвоении
//значения -5 переменная типа unsigned char получит значение 251
unsigned char a = -5;           // 251
unsigned short b = -3500;       // 62036
unsigned int c = -50000000;     // 4244967296
//Переменной знакового типа (signed) присваивается значение не из его диапазона. В этом случае результат не детерминирован. 
//Программа может выдавать адекватный результат, а может работать некорректно.
}
    //Преобразования в арифметических операциях
{
    //В арифметических операциях необходимо, чтобы оба операнда представляли один и тот же тип. Если же
    //операнды имеют разные типы, то компилятор автоматически выбирает операнд с типом который имеет
    //меньший диапазон значений и пытается его преобразовать в тип второго операнда, который имеет больший
    //диапазон значений. С точки зрения преобразований в операциях типы можно расположить следующим
    //образом в порядке приоритета (от более высокого к более низкому):
        long double

                double

                        float

                            unsigned long long

                                    long long

                                            unsigned long

                                                        long

                                                            unsigned int

                                                                        int
//То есть, если в операции участвует число типа float и типа long double, то компилятор
// автоматически преобразует операнд типа float в тип long double
// (который в соответствии с вышеуказанным списком имеет более высокий приоритет).
//Операнды типов char, signed char, unsigned char, short и unsigned short всегда при операциях преобразуются как минимум в тип int

}

    //Например, программист заработал за 8 часовой рабочий день 100,2$, рассчитаем его заработок за час:
#include <iostream>
int main()
{
    double sum {100.2};
    int hours {8};
double revenuePerHour {sum / hours};
std::cout << "revenue per hour = " << revenuePerHour << std::endl;
}
//Здесь переменная hours, которая представляет тип int и хранит количество часов, будет преобразована к "более приоритетному" типу double.


                //Опасные и безопасные преобразования
                //Безопасные:
//и. Как правило, это преобразования от типа с меньшей разрядностью к типу с большей разрядностью.
bool -> char -> short -> int -> double -> long double
bool -> char -> short -> int -> long -> long long
unsigned char -> unsigned short -> unsigned int -> unsigned long
float -> double -> long double
//Примеры безопасных преобразований:
short a = 'g'; // преобразование из char в short
int b = 10;
double c = b; // преобразование из int в double
float d = 3.4;
double e = d; // преобразование из float в double
double f = 35; // преобразование из int в double
                //Опасные:
//Как правило, это преобразования от типа с большей разрядностью к типу с меньшей разрядностью.
//примеры опасных преобразований:
unsigned int a = -25;           // 4294967271
unsigned short b = -3500;       // 62036 
//В данном случае переменным a и b присваивается значения, которые выходят за пределы диапазона допустимых значений для данных типов.
