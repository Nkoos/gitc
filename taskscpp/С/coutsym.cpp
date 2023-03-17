#include <iostream>
using namespace std;
char sym{};
int sysum{};
char conchar{};
int main()
{
    do
    {
        
        cout << "Enter symbol for count" << endl;
        cin >> sym;cout << endl;
        sysum++;
        cout << "Continue input = y, cancel = other" << endl;
        cin >> conchar;
    } 
    while (conchar == 'y');
if (conchar!='y')
{
    cout << "Count symbols:" << sysum << endl;
}


}