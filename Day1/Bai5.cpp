#include <iostream>
#include<math.h>
using namespace std;

int main()
{

    int n;
    cout<<"nhap n:";
    cin>>n;
    int dem=0;
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            dem++;
        }
		i++;
    }
	if(dem==2)
    {
        cout<<"TRUE";
    }else
    {
        cout<<"FALSE";
    }
}
