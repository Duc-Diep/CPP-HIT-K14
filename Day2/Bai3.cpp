#include <iostream>
#include <math.h>
 using namespace std;
 void nhap(int &n){
 	do{
 		cout<<"Nhap n: ";
 		cin>>n;
 		if(n<=10)cout<<"Nhap lai!(n>10)\n";
	 }while(n<=10);
 }
 void snt(int n){
 	int j=2;
 	bool check= true;
		       for (int i=2;i<=sqrt(n);i++)
		       {
		       	  if(n%i==0)
		       	  check = false;
		       	  break;
			   }
		if(check) printf("i love you <3");
		else{
		//for(int j=2;j<=n;j++)
		while(n>1)
		{
		  	while(n%j==0)
		  	{
			  n/=j;
	          if(n==1) 
			  	cout<<j;
			else cout<<j<<"*";
	        }
	       j++;
		}
	}
}
 int main(){
 		int n;
		nhap(n);
 		snt(n);
	 }
