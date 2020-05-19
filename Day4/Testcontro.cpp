#include <iostream>
#include <malloc.h>
using namespace std;

 void nhap(float *&a,int &n){
	cout<<"Nhap so phan tu cua mang: ";
	cin>>n;
	a=(float*)malloc(n*sizeof(float));
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void xuat(float *a,int n){
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
void sapxep(float *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}
float tong(float *a,int n){
	float sum=0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			sum+=a[i];
		}
	}
	return sum;
}
void timmax(float *a,int n){
	int max1,max2;
	if(a[0]>a[1]){
		max1 = a[0];
		max2 = a[1];
	}
	else{
		max2 = a[0];
		max1 = a[1];
	}
	for(int i=1;i<n;i++){
		if(a[i]>max1){
			max1=a[i];
		}
	}
	cout<<"\nSo lon nhat trong mang la: "<<max1;
	for(int i=1;i<n;i++){
		if(a[i]>max2&&a[i]<max1){
			max2=a[i];
		}
	}
	cout<<"\nSo lon thu 2 trong mang la: "<<max2;
}
bool ktra(float *a,int n){
	for(int i=0;i<n-1;i++){
		if(a[i]>0&&a[i+1]>0&&a[i+2]>0){
			return true;
		}
	}
	return false;
}
void xoa(float *a,int &n,int vt){
	for(int i=vt;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
	a=(float*)realloc(a,n*sizeof(float));
}
void xoaall(float *a,int &n){
	for(int i=0;i<n;i++){
		if(a[i]>5){
			xoa(a,n,i);
			i--;
		}
	}
	cout<<"\nDay sau khi xoa cac phan tu >5 la: ";
	xuat(a,n);
}
int main() {
    float *a;
    int n;
    nhap(a,n);
    sapxep(a,n);
    xuat(a,n);
    cout<<"\nTong cac phan tu co chi so chan: "<<tong(a,n);
    timmax(a,n);
    if(ktra(a,n)){
    	cout<<"\nDay co 3 so duong lien tiep";
	}
	else{
		cout<<"\nDay khong co 3 so duong lien tiep";
	}
	xoaall(a,n);
   return 0;
}
