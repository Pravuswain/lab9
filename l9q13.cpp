//q13.craete am array of size 10.use aloop to print array using the normal index
#include <iostream>
using namespace std;
int main()
{
//declaring array
	int hardwell[10];
	
	cout <<"enter the numbers now"<<endl;
	
	for(int n=0;n<10;n++)
	cin >>hardwell[n];
//using index method
	cout <<"the numbers you have entered are"<<endl;
	
	for(int n=0;n<10;n++)			
	cout <<hardwell[n]<<endl;
//using pointers method
	cout <<"the numbers you have entered are"<<endl;
	
	for(int n=0;n<10;n++) 
	cout<<*(hardwell+n)<<endl;

return 0;
}
