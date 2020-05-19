
#include <iostream>
using namespace std;
void NhapMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void XuatMang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void TachMang(int a[], int b[], int c[], int na, int &nb, int &nc)
{
	nb=nc=0;
	for(int i=0;i<na;i++)
	{
		if(a[i]%2==0)  
		{
			b[nb]=a[i];
			nb++;
		}
		else
		{
			c[nc]=a[i];
			nc++;
		}
	}
}
int main()
{
	int na,nb,nc;
	int a[100],b[100],c[100];
	do
	{
		cout<<" Nhap so phan tu cua mang a = ";
		cin>>na;
	}
	while(na<=0);
	NhapMang(a,na);
	cout<<"\n\tMang vua nhap: ";
	XuatMang(a,na);
	TachMang(a,b,c,na,nb,nc);
	cout<<"\n\tMang chan : ";
	XuatMang(b,nb);
	cout<<"\n\tMang le : ";
	XuatMang(c,nc);
	return 0;
}


