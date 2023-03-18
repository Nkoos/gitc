#include <iostream>
using namespace std;
int main()
{
int array[10]{};
int c{};
int number{};
int i{9};
    while(c<10)
    {
        cout << "\t|" << "Enter number in array|";
        cin >> number;
        array[c] = number;
        c++;       
    } 
cout << "\t|reverse numbers|:";
        do
            {
            cout << ""  << array[i] << " ";
            i--;
            }
        while(i>-1);
}