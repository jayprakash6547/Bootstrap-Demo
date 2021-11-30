#include <iostream>
using namespace std;
union numbers
{
int i; int f;
};
int main()
{
union numbers x;
cout << "Before allocating value to i,f " << endl;
cout << "x.i = " << x.i << endl; cout << "x.f = " << x.f << endl;
x.i=10; cout << "After allocating value to i " << endl;
cout << "x.i = " << x.i << endl; cout << "x.f = " << x.f << endl;
x.f=15.5; cout << "After allocating value to f " << endl;
cout << "x.i = " << x.i << endl; cout << "x.f = " << x.f << endl;
cout << "Size of union variable x = " << sizeof(x) << endl;
return 0;
}
