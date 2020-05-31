#include <iostream>

using namespace std;
void Nhap(float &x,int &n)
{
    cout<<"Nhap x: ";
    cin>>x;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
        if(n<1)
        {
            cout<<"Nhap lai!(n>0)\n";
        }
    }
    while(n<1);
}
float Tinh(float x,int n)
{
    float F=1,tu=1;
    int mau=1;
    for(int i=1; i<=n; i++)
    {
        tu*=x;
        mau*=i;
        F+=(tu+2*i)/mau;
    }
    return F;
}
int main()
{
    float x;
    int n;
    Nhap(x,n);
    cout<<"F="<<Tinh(x,n);
    return 0;
}

