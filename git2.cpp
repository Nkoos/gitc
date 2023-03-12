#include <cmath>
#include <iostream>
using namespace std;
    int main()
{
    double num1{},num2{};
    int end{};
    std::cin >> num1;cout << "\n";
    std::cin >> num2;cout << "\n";
    double num3{pow(num1, 2) * pow(num2, 2)};
if(num1>0)
    {
    if(num2>0)
        {
            std::cout << num3;
        }

    }    
return 0;
}