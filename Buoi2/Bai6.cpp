
#include <iostream>

using namespace std;
void nhap_n(int &n){
	do
    {
        cout<<"Nhap n:";
        cin>>n;
        if(n<0)
        {
            cout<<"Nhap lai n:";
        }
    }while(n<1 || n>50);
}
void nhap(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void xuat(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<"\t";
    }
}
void tim_x(int a[],int n)
{
    int dem=0;
    int x;
    cout<<"\nNhap gia tri can tim: ";
    cin>>x;
    for(int i=0;i<n;++i)
    {
        if(a[i]==x)
        {
            ++dem;
        }
    }
    if(dem==0)
    {
        cout<<x<<" khong xuat hien trong day!"<<endl;
    }
	else 
    {
        cout<<x<<" xuat hien trong mang: "<<dem<<" lan"<<endl;
        cout<<"Vi tri ma no xuat hien trong day la: ";
        for(int i=0;i<n;++i)
        {
            if(a[i]==x)
            {
                cout<<"\t"<<i+1;
            }
        }
    }
}
void xoa(int a[],int &n,int k)
{
    for(int i=k-1;i<n;++i)
    {
        a[i]=a[i+1];
    }
	n--;
}
int main()
{
    int a[100],n;
    nhap_n(n);
    nhap(a,n);
    cout<<"Mang vua nhap: ";
    xuat(a,n);
    tim_x(a,n);
    int k;
    do
    {
        cout<<"\nNhap vi tri can xoa:";
        cin>>k;
        if(k<1 || k>n)
        {
            cout<<"Nhap lai vi tri xoa!(1<="<<"k<="<<n<<")"<<endl;
        }
    }while(k<1 || k>n);
    xoa(a,n,k);
    cout<<"Day sau khi xoa"<<endl;
    xuat(a,n);
    return 0;
}

