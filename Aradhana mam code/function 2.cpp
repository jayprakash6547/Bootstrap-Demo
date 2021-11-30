#include <iostream>
using namespace std;
int sum (int x, int y); //declaring function
int main()
{
float a = 10.5;
double b = 20.6;
int c = sum (a, b); //calling function
cout << c << endl;
}
int sum (int x, int y) //defining function
{
return (x + y);
}

