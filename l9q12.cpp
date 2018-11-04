//write a program to declare variables and a pointer variable
#include<iostream>
using namespace std;

int main() 
{
	int a,b;
	int *p=&a;
//store the value pointed by p in b
	 b=*p;
	cout<<" a is "<<a<<" b is "<<b<<" *p is  "<<*p<<endl;
//Assign values a=2 and b = 3.
	a=2;
	b=3;
	b=*p;
//printing the values
	cout<<" a is "<<a<<" b is "<<b<<" *p is  "<<*p<<endl;
return 0;
}
