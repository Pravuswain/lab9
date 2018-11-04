//Q.11.Write a program to declare variables of all predefined sizes and declare corresponding pointers
#include <iostream>
using namespace std;

int main()
{//main function	

	int a=2;
	float b=3;
	double c=111;
	bool d=3;
	char e='A';	
	
	cout<<"The size of intEGER from the initialisation is:"<<sizeof(a)<<endl;

	cout<<"The size of float by initialisaton is:"<<sizeof(b)<<endl;	
	
	cout<<"The size of double by initialisation is:"<<sizeof(c)<<endl;	
	
	cout<<"The size of boolean by initialisation is:"<<sizeof(d)<<endl;
	
	cout<<"The size of char by initialisation is:"<<sizeof(e)<<endl;
		
//declaration and initialization of float pointer variable
	int *p;	
	float *q; 
	double *r;					 
	bool *s;					
	char *t;					
	
	cout<<"size of integer pointer:"<<sizeof(p)<<endl;
	cout<<"size of float pointer:"<<sizeof(q)<<endl;	
	cout<<"size of double pointer:"<<sizeof(r)<<endl;
	
	cout<<"size of boolian pointer:"<<sizeof(s)<<endl;
	
	cout<<"size of char pointer:"<<sizeof(t)<<endl;
	
return 0;
}

