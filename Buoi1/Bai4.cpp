#include <iostream>
#include<math.h>
using namespace std;

int main()
{

    int n;
    float i=1,y=0;
    do
    {
        cout<<"nhap n:";
        cin>>n;
        if(n<1 || n>1000000)
        {
            cout<<"nhap lai n";
        }
    }while(n<1 || n>1000000);
    while(i<=n)
    {
        y+=1/i;
        i++;
    }cout<<"tong y la: "<<y;
}
