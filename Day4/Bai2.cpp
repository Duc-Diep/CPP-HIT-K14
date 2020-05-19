#include <iostream>
#include <malloc.h>
using namespace std;

void nhapMang(int *&a,int &n)
{
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
        if(n<5||n>50)
            cout<<"Nhap lai!(5<=n<=50)\n";
    }
    while(n<5||n>50);

    a=(int*)malloc(n*sizeof(int));//cap phat bo nho dong cho mang

    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void xuatMang(int *a,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\t"<<a[i];
    }
}

void hienThiNguoc(int *a,int n)
{
    cout<<"\nMang hien thi nguoc: ";
    for(int i=n-1; i>=0; i--)
    {
        cout<<"\t"<<a[i];
    }
}
void sapXep(int *a,int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    cout<<"\nMang sau khi sap xep giam dan: ";
    xuatMang(a,n);
}
void chen1pt(int *&a,int &n,int m,int vt) //ham chen phan tu m vao vi tri bat ki
{
    n++;
    a=(int*)realloc(a,n*sizeof(int));//cap phat lai bo nho voi so luong phan tu la n+1
    for(int i=n-1; i>vt; i--)
        a[i]=a[i-1];
    a[vt]=m;
}
void chen(int *&a,int &n)
{
    int m;
    cout<<"\nNhap so nguyen m: ";
    cin>>m;
    int i=0;
    while(a[i]>=m) //tim vi tri can chen
    {
        i++;
    }
    chen1pt(a,n,m,i);
}
int main()
{
    int *a,n;
    nhapMang(a,n);
    xuatMang(a,n);
    hienThiNguoc(a,n);
    sapXep(a,n);
    chen(a,n);
    cout<<"\nMang sau khi chen: ";
    xuatMang(a,n);
}

