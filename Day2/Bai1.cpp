
#include <iostream>
#include <math.h>

using namespace std;

void Nhap(int &n, float &x)
{
    do{
    	cout << "Nhap n = "; cin >> n;
    	if(n<=0)cout<<"Nhap lai!(n>0)\n";
	}while(n<=0);
    cout << "Nhap x = "; cin >> x;
}

float Tinhbt(int n, float x)
{
    float tong = 1,mu=1;
    int gt=1;
    int dau = 1;
    for(int i=1; i<=n; ++i)
    {
        dau *=-1;
        mu*=x;
        gt*=i;
        tong += dau*(mu+2)/gt;
    }
    cout << "A = " << tong;
    return tong;
}

int main()
{
    int n;
    float x;
    Nhap(n,x);
    Tinhbt(n,x);
    return 0;
}

