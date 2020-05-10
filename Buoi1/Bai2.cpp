#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    int t=0;
    cout<<"nhap vao so dien:";
    cin>>n;
    if(n<=50)
    {
        t=n*1000;
        cout<<"so tien dien ma gia dinh phai tra la:"<<t;
    }else if(n>51 && n<=100)
    {
        t=(n-50)*1500+50*1000;
        cout<<"so tien dien ma gia dinh phai tra la:"<<t;
    }else if(n>100 && n<=200)
    {
        t=(n-100)*2000+50*1500+50*1000;
        cout<<"so tien dien ma gia dinh phai tra la:"<<t;
    }else
    {
        t=(n-200)*5000+100*2000+50*1500+50*1000;
        cout<<"so tien dien ma gia dinh phai tra la:"<<t;
    }
    return 0;
}
