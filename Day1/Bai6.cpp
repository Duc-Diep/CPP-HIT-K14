#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"nhap so bat ki:";
    cin>>n;
    int i=1;
    int tong=0;
    while(i<n)
    {
        if(n%i==0)
        {
            tong=tong+i;
        }++i;
    }
	if(tong==n)
    {
        cout<<"Yeah";
    }else
    {
        cout<<"Hoo";
    }
}
