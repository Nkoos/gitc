#include <iostream>

    int main()
{
    int number{};
    int end{};
    char ch{};
    do
 {
std::cout << "Enter number in interval from 1 to 100\n";
std::cin >> number;
if (number>0)
    {
    if(number<=100)
        {
        if (number>50)
                std::cout << number << " > 50 \n";
        if (number==50)
                std::cout << number << " = 50 \n";
        if (number<50)
                std::cout << number << " < 50 \n";
        }
    else
        {
                std::cout << " Error, bad data\n " << number << " does not belong to the interval \n";
        }
    }
else
    {
                std::cout << " Error, bad data\n " << number << " does not belong to the interval \n";
    }
                std::cout << "Continue c=YES other=NO\n";
                std::cin >> ch;
 }
    while(ch=='c');


return 0;
}