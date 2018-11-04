//Q15.we want to show string repeatedly by shifting top character 
#include <iostream>
using namespace std;
int main()
{
    char sir[11];
	 char* charptr;
    cout<<"Input 10 chars of string"<<endl;
    cin>>sir;
    charptr=&sir[0];
    for(int i=0;i<=10;i++)
   {
    	for(int j=i;j<=10;j++)
    	{
            cout<<*(charptr+j);
    	}
      cout<<endl;
    }
    return 0;
}
