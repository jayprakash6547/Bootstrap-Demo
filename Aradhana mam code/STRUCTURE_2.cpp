#include<bits/stdc++.h>
using namespace std;
struct Address{char HouseNo[25];
};
struct Employee{int Id;char Name[25];
struct Address Add;
};
int main(){
	Employee E;
	cout<<"\n\tEnter Employee Id,Name,House no";
	cin>>E.Id>>E.Name>>E.Add.HouseNo;
	cout<<"\nDetails of Employee\n";
	cout<<endl<<E.Id<<endl<<E.Name<<endl<<E.Add.HouseNo;
	return 0;
}
