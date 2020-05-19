
#include <iostream>
#include <math.h>
using namespace std;
void Nhap_n(int &n){
	do
	{
		cout<<" Nhap n = ";
		cin>>n;
	}
	while(n<1||n>30);
	}
void NhapMang(float a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void XuatMang(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}		
void MangDao(float a[], int n)
{
	cout<<"\n Mang Dao La : ";
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<"     ";
	}
}
void tbc(float a[], int n)
{
	int dem=0;
	float tong=0;
	float tbc;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0 && fabs(a[i])>10)
		{
			tong+=a[i];
			dem++;
		}
	}
	if (dem!=0)  
	{
	    tbc=tong/dem;
		cout<<"\n Trung Binh Cong Can Tinh La : "<<tbc;
	}
	else          cout<<"\n Khong co so nao thoa man n<-10";
}
void SapXep(float a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (a[i]<a[j])
			{
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	cout<<"\n Mang sau khi sap xep giam dan la: ";
	XuatMang(a,n);
}
int main()
{
	int n;
	float a[100];
	Nhap_n(n);
	NhapMang(a,n);
	cout<<"\n Mang vua nhap la: ";
	XuatMang(a,n);
	MangDao(a,n);
	tbc(a,n);
	SapXep(a,n);
	return 0;
}
