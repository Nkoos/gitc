#include <iostream>
int main()
{
    int a {8}; //1000
    int b {11}; //1011
    b = b - ((a >> 2) + 1);
    a = a + ((a >> 2) + 1);
    std::cout << a << std::endl;
    std::cout << b;
return 0;
}