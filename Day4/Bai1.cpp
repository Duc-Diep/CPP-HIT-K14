#include <iostream>
#include <malloc.h>
using namespace std;

void nhapMang(int *&a,int &n){
	do{
		cout<<"Nhap n: ";
		cin>>n;
		if(n<5||n>30) cout<<"Nhap lai!(5<=n<=30)\n";
	}while(n<5||n>30);
	
	a=(int*)malloc(n*sizeof(int));//cap phat bo nho dong cho mang
	
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void xuatMang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
void demMax(int *a,int n){//dem so luong cac so bang so lon nhat
	int max = a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==max){
			dem++;
		}
	}
	cout<<"\nCo "<<dem <<" so bang max ";
}
void tinhTong(int *a,int n){//tinh tong cac so le va trung binh cong so chan
	int tongle=0,tongchan=0,dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			tongchan+=a[i];
			dem++;
		}
		else{
			tongle+=a[i];
		}
	}
	cout<<"\nTong cac so le la: "<<tongle;
	if(dem==0){
		cout<<"\nTrung binh cong cac so chan = "<<tongchan;
	}
	else{
		cout<<"\nTrung binh cong cac so chan = "<<(float)tongchan/dem;
	}
}
void tinhTbc(int *a,int n){//tinh trung binh cong cac so thuoc doan [20,200]
	int dem = 0,tong = 0;
	for(int i=0;i<n;i++){
		if(a[i]>=20&&a[i]<=200){
			tong+=a[i];
			dem++;
		}
	}
	if(dem==0){
		cout<<"\nTrung binh cong cac so trong khoang [20;200] = "<<tong;
	}
	else{
		cout<<"\nTrung binh cong cac so trong khoang [20;200] = "<<(float)tong/dem;
	}
}
void sapXep(int *a,int n){
	for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]%2==0 && a[j]%2!=0)
                swap(a[i],a[j]);
        }
    }
	cout<<"\nMang sau khi sap xep : ";
	xuatmang(a,n);
}
int main(){
	int *a,n;
    nhapmang(a,n);
    xuatmang(a,n);
    demmax(a,n);
    tinhtong(a,n);
    tinhtbc(a,n);
    sapxep(a,n);
}
