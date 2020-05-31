#include <iostream>
#include <malloc.h>
using namespace std;

void Nhap(int *&a, int &n)
{

    cout << "Nhap so phan tu: ";
    cin >> n;
    a=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        cout << "a["<<i<<"]= ";
        cin >> a[i];
    }
}

void Xuat(int *a, int n)
{
    for (int i=0; i<n; i++)
    {
        cout << a[i] << ' ';
    }
}

bool KtraNgto(int n)
{
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
            return false;
    }
    return n>1;
}

void themptu(int *&a, int &n, int vtri, int k)
{
    n++;
    a=(int*)realloc(a,n*sizeof(int));
    for(int i=n; i>vtri; i--)
    {
        a[i]=a[i-1];
    }
    a[vtri]=k;
}

void chenptu(int *&a, int &n, int sochen)
{
    for(int i=0; i<n; i++)
    {
        if(KtraNgto(a[i]))
        {
            themptu(a,n,i+1,sochen);
            if(KtraNgto(sochen))
            {
                i++;
            }
        }

    }
    cout << "Mang sau chen: ";
    Xuat(a,n);

}

void xoa(int *&a, int &n, int k)
{
    for(int i=k; i<=n; i++)
    {
        a[i]=a[i+1];
    }
    n--;
    a=(int*)realloc(a,n*sizeof(int));
}

void Xoangto(int *&a, int n)
{
    for(int i=0; i<n; i++)
    {
        if(KtraNgto(a[i]))
        {
            xoa(a,n,i);
            i--;
        }
    }
    cout << "\nMang sau xoa: ";
    Xuat(a,n);
}

int main()
{
    int *a, n, k, vtri;
    Nhap(a,n);
    int sochen;
    cout << "\nNhap so can chen sau SNT trong mang: ";
    cin >> sochen;
    chenptu(a,n,sochen);
    Xoangto(a,n);

    return 0;
}

