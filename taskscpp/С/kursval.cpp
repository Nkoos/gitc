#include <iostream>

int main()
{
    double dollark; // Доллар в рублях
    double rubl; //количество рублей
std::cout << "Vvedite kolichestvo rublikov" << "\n";
    std::cin >> rubl;
std::cout << "Vvedite kurs 1 dollar v rubles" << "\n";
    std::cin >> dollark;
double result{rubl / dollark};
    std::cout << rubl << " rubley v dollarax" "\n" << result;

}