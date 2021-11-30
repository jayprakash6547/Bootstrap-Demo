#include <iostream>
using namespace std;
int sum (int x, int y); // function declaration
int main()
{
int a = 10;
int b = 20;
int c = sum (a, b); // function calling
cout << c << endl;
}
int sum (int x, int y) // function definition
{
return (x + y);
}

