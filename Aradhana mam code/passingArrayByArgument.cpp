#include <iostream>
using namespace std;
Double getAverage (int arr[], int size); 
//****Declare****
double getAverage(int arr[], int
size)//******Define******
{
int i, sum = 0;
double avg;
for (i = 0; i < size; ++i)
{
sum += arr[i]; // sum=sum+arr[i]
}
avg = double(sum) / size;
return avg;
}
int main ()
{
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance, 5 ) ;//***call*
cout << "Average value is: " << avg << endl;
return 0;
}

