#include <iostream>
#include <cmath>
int main()
{
const double cm_v_metre{100};
double rost;
double weight;
    std::cout << "VVedi sovi rost i ves ";
    std::cin >> rost >> weight;
double rost_v_m{rost/cm_v_metre};
double imt{weight / pow(rost_v_m,2)};
    std::cout << "Vash IMT = " << imt;






}