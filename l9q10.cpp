//write a function revString(char*) which reverses the parameter cstring 
#include<iostream>
#include<cstring>
using namespace std;
void revString(char* ptr);

int main()
{
  char s[10] = "abcde";
  revString(&s[4]);  
  return 0;
}

void revString(char* ptr)
{//code for the  main function
	while(*ptr!='\0')
		{
			cout<<*ptr;
			ptr--;
		}
}
