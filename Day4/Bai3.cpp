#include <iostream>
#include <malloc.h>
using namespace std;

void nhapMang(int *&a,int &n)
{
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
        if(n<1||n>50)
            cout<<"Nhap lai!(5<=n<=50)\n";
    }
    while(n<1||n>50);

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
void timMin(int *a,int n) //tim so chan nho nhat trong mang
{
    int dem = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            dem++;
        }
    }
    if(dem==0)
    {
        cout<<"\nKhong co so chan nao trong mang";
    }
    else
    {
        int m=0;
        while(a[m]%2==1) //tim so chan dau tien
        {
            m++;
        }
        int min = a[m];
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0&&a[i]<min)
            {
                min = a[i];
            }
        }
        cout<<"\nSo chan nho nhat trong mang la: "<<min;
    }
}
void xoa1pt(int *&a,int &n,int vt)
{
    for(int i=vt; i<n; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    a=(int*)realloc(a,n*sizeof(int));//cap phat lai bo nho dong voi so luong phan tu la n-1
}
void xuLyx(int *&a,int &n)
{
    int x,dem=0;
    cout<<"\nNhap so nguyen x: ";
    cin>>x;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            dem++;
        }
    }
    if(dem==0)
    {
        cout<<"Khong co phan tu nao trong mang co gia tri = "<<x;
    }
    else
    {
        cout<<"Co "<<dem<<" phan tu co gia tri bang "<<x<<" va o cac vi tri: ";
        for(int i=0; i<n; i++)
        {
            if(a[i]==x)
            {
                cout<<(i+1)<<" ";
            }
        }
        int j=0;//Thuc hien xoa cac phan tu co gia tri bang x trong mang
        while(j<n)
        {
            if(a[j]==x)
            {
                xoa1pt(a,n,j);
            }
            else
                j++;
        }
        if(n==0)
        {
            cout<<"\nMang khong con phan tu nao sau khi xoa "<<x<<" :)";
        }
        else
        {
            cout<<"\nMang sau khi xoa cac phan tu co gia tri bang "<<x<<" :";
            xuatMang(a,n);
        }
    }
}
int main()
{
    int *a,n;
    nhapMang(a,n);
    xuatMang(a,n);
    timMin(a,n);
    xuLyx(a,n);
}

