//q6.write a function countEven which receives an integer array and its size
#include <iostream>
using namespace std;

int countEven(int *a, int b)
{
	int evencount = 0;
	for(int i = 0; i <=b; i++){
	if(*(a+i)%2 == 0){
	evencount++;}}
	return evencount-1;
}

int main()
{
	int x;    
//ask user to define the array
	cout <<"enter the number of terms to be in array"<<endl;
	cin >>x;
	
	int billu[x];
	cout <<"enter the numbers now"<<endl;
	
	for(int n=0;n<x;n++)
	cin >>billu[n];
	
	int v = countEven(billu, x);
	cout <<v<<endl;
return 0;
}
