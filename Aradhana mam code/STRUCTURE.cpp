#include <iostream>
using namespace std;
struct numbers
{
int i; float f;
};
int main()
{
struct numbers x;
cout << "Before allocating value to i,f " << endl;
cout << "x.i = " << x.i << endl; cout << "x.f = " << x.f << endl;
x.i=10; cout << "After allocating value to i " << endl;
cout << "x.i = " << x.i << endl; cout << "x.f = " << x.f << endl;
x.f=15.5; cout << "After allocating value to f " << endl;
cout << "x.i = " << x.i << endl; cout << "x.f = " << x.f << endl;
cout << "Size of structure x = " << sizeof(x) << endl;
return 0;
}
