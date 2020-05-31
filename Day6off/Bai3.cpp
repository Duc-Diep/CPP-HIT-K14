#include <iostream>
#include <malloc.h>
using namespace std;

void Nhap(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << "a["<<i<<"]: ";
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

bool ktra(int a[],int n,int x)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            return true;
        }
    }
    return false;
}
void MangC(int a[],int m,int b[],int n,int c[])
{
    int ic=0;
    for(int i=0; i<m; i++)
    {
        if(ktra(b,n,a[i])&&!ktra(c,ic,a[i]))
        {
            c[ic++] = a[i];
        }
    }
    if(ic==0)
    {
        cout<<"Khong ton tai mang C";
    }
    else
    {
        cout<<"Mang C: ";
        Xuat(c,ic);
    }
}
void MangD(int a[],int m,int b[],int n,int d[])
{
    int id=0;
    for(int i=0; i<m; i++)
    {
        if(!ktra(b,n,a[i])&&!ktra(d,id,a[i]))
        {
            d[id++] = a[i];
        }
    }
    if(id==0)
    {
        cout<<"\nKhong ton tai mang D";
    }
    else
    {
        cout<<"\nMang D: ";
        Xuat(d,id);
    }
}
int main()
{
    int a[100],m,b[100],n,c[100],d[100];
    cout<<"Nhap so phan tu mang a: ";
    cin>>m;
    Nhap(a,m);
    cout<<"Nhap so phan tu mang b: ";
    cin>>n;
    Nhap(b,n);
    MangC(a,m,b,n,c);
    MangD(a,m,b,n,d);
    return 0;
}

