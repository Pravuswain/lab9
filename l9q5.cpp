#include<iostream>
#include<string> 
using namespace std;
//define the string
int main(){
	char s[10] = "abcde";
	char* cptr;
//use cptr as the char
	for (cptr = s; *cptr != '\0'; cptr++);
   		cptr--;
//increment of cptr and then decrement of its position
	while (cptr >= s)
  		cout << *cptr--;
		cout<<endl;
		
	return 0;
}
