#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    do{
    	cout<<"Nhap so phan tu: ";
        cin>>n;
    }while(n<=0);
    char s[100][30];
    for(int i=1;i<=n;i++)
    {
        fflush(stdin);
        gets(s[i]);

    }
    char str[100];
    cout<<"Nhap chuoi str: ";
    cin>>str;
    for(int i=1;i<=n;i++)
    {
        if(strstr(s[i],str)!=NULL) 
			cout<<s[i]<<"\n";
    }
    return 0;
}
