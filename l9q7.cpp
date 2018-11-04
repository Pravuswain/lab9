//q7.write a function that returns a pointer to the maximu value of an array
#include <iostream>
using namespace std;
//function

double* max(double*dj,int x)
{
	if(x == 0)
	{
		return 0;
	}

	else
	{
	double *aa;
	double max = *dj;
	double *ptr = dj;
	
	a = dj + 1;
	for(int i= 0; i<x; i++){
		if (*a > max){
		max = *a;
		ptr = a;
	}
	a++;
}
	return ptr;
}
}


int main()
{
	int x;    
//ask user to define the array
	cout <<"enter the number of terms in array:"<<endl;
	cin >>x;
	
	double dj[x];
	cout <<"enter the numbers :"<<endl;
	
	for(int n=0;n<x;n++)
	cin >>dj[n];
	double* d = max(dj, x);
//call function
	
	cout <<"the maximum is "<<*d<<endl;
return 0;
}
