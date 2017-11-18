#include <iostream>
using namespace std;
int main()
{
cout << "Enter your grade (A - F): ";
cin >> grade;
if(grade == 'A')
{
cout << "Excellent\n";
}
else
{
if(grade == 'B')
{
cout << "Good\n";
}
else
{
cout << "Work harder\n";
}
}
cout << "Done";
return 0;
}