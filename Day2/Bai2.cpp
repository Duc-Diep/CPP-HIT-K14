
#include <iostream>
#include <math.h>

using namespace std;

//int Fibonaci(int n)
//{
//    if (n == 1 || n == 2)
//        return 1;
//    return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
int Fibonaci(int n){
	
	if(n==1||n==2) return 1;
	else{
		int a=1,b=1;
		int c;
		for(int i=3;i<=n;i++){
			a=b;
			b=c;
			c=a+b;
		}
		return c;
	}
}
int main()
{
    int n;
    do{
    	cout << "Nhap n = "; cin >> n;
    	if(n<=0)cout<<"Nhap lai!(n>0)\n";
	}while(n<=0);
    cout << "So Fibonacci thu " << n << " la: " << Fibonaci(n);
    return 0;
}

