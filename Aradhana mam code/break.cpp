#include<bits/stdc++.h>
using namespace std;
int main(){
	float number,sum=0.0;
	while(true){
		cout<<"Enter a number:";
		cin>>number;
		if(number !=0.0){
			sum+=number;
		}
		else{
			break;
		}
	}
	cout<<"Sum = "<<sum;
	return 0;
}
