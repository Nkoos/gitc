#include <iostream>
using namespace std;
int main()
{
double num{};
double numsum{};
char conditvar{};
int count{};
        while(conditvar!='y')
    {
    cout << "Enter number\n";
    cin >>  num; cout << endl;
    numsum+=num;
    count++;
    cout << "Enter Y if you end enter numbers, or N if you want continue\n";
    cin >> conditvar;
    }
double middle{numsum/count};
cout << "Sum number:" << numsum << "\n" << "Count numbers:" << count << "\n" << "Middle Arifmethic numbers:" << middle << endl;





}