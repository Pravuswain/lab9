#include <iostream>
using namespace std;
int main()
{
//declaring array
	char dj[6]={'P','R','A','V','U','\0'};
	
	
//using index method
	cout <<"Myself"<<endl;
	for(int n=0;n<6;n++)
		cout <<dj[n];
//using pointers method
	
	cout <<"yo yo"<<endl;
	for(int n=0;n<6;n++) 
	cout<<*(dj+n);
return 0;
}
