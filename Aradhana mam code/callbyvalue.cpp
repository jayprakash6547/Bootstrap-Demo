#include <iostream>
using namespace std;
void onefunction(int x)
{
x = 4;
}
int main()
{
int y;
y = 12;
onefunction(y);
cout << y << endl;
}



