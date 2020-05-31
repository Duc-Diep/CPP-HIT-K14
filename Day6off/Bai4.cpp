#include<iostream>
using namespace std;
void nhapmn(int &m,int &n)
{
    do
    {
        cout<<"Nhap m: ";
        cin>>m;
        if(m<3||m>14)
            cout<<"Nhap lai!(3<=m<=14)\n";
    }
    while(m<3||m>14);
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
        if(n<3||n>14)
            cout<<"Nhap lai!(3<=n<=14)\n";
    }
    while(n<3||n>14);
}
void nhap(int a[][100],int m,int n)
{
    for(int i =0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            cout<<"a["<<i<<","<<j<<"] = ";
            cin>>a[i][j];
        }
    }
}
void hien(int a[][100],int m,int n)
{
    for(int i =0; i<m; i++)
    {
        for(int j =0; j<n; j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void tongcot(int a[][100],int m,int n)
{
    int i,t=0;
    do
    {
        cout<<"Tong cac phan tu cot thu : ";
        cin>>i;
        if(i<=0 || i>n)
            cout<<"Nhap lai!(0<i<="<<n<<")\n";
    }
    while(i<=0 || i>n);
    for(int k=0; k<m; k++)
    {
        t = t+a[k][i-1];
    }
    cout<<"Tong cac phan tu cot thu "<<i<<" la : "<<t<<endl;
}
void minhang(int a[][100],int m,int n)
{
    for(int i =0; i<m; i++)
    {
        int min = a[i][0];
        for(int j =0; j<n; j++)
        {
            if(min > a[i][j])
                min = a[i][j];
        }
        cout<<"Min cua cot thu "<<i+1<<" la "<<min<<endl;
    }
}
int main()
{
    int a[100][100],n,m;
    nhapmn(m,n);
    nhap(a,m,n);
    hien(a,m,n);
    tongcot(a,m,n);
    minhang(a,m,n);
}

