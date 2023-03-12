#include <iostream>

#include <cmath>
int main() // Обьявление функции программы
{ //начало функции
const float pi{3.14} ; //Число пи
double _R; //Радиус
float _S{0.0}; //Площадь
        std::cout << "Vvedite radius kruga" << "\n"; //просьба юзера написать вводные данные
        std::cin >> _R; //Ввод данных
 _S = pi * pow(_R,2);
        std::cout << "Ploshad kruga ravna:" << _S; 
int konec;
std::cin>>konec;
        
return 0;
} //конец   