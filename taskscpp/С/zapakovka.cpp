#include <iostream>
int main()
{
    unsigned int packed{};//переменная,которая хранит упакованное число
    unsigned char onchr{}; //переменная первого символа
    std::cout << "Write first symbol" << "\n";
    std::cin >> onchr;
    packed |= onchr;
    unsigned char twchr{}; //переменная второго символа
    std::cout << "Write second symbol" << "\n";
    std::cin >> twchr;
    packed <<=   8;
    packed |= twchr;
    unsigned char thchr{}; //переменная третьего символа
    std::cout << "Write third symbol" << "\n";
    std::cin >> thchr;
    packed <<= 8;
    packed |= thchr;
    std::cout << packed << std::endl;
 unsigned int mask {0xFF};  // маска для считывания - 0xFF - максимальное значение символа
    onchr = packed & mask;
    std::cout << onchr;
    twchr = (packed >> 8) & mask;
    std::cout << twchr;
    thchr = (packed >> 16) & mask;
    std::cout << thchr;

 




}