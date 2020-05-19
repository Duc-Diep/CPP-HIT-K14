#include <iostream>
#include <math.h>

using namespace std;

int dem(int n){
    if(n < 10) return 1;
    return 1 + dem(n/10);
}

double can(int n){
    if(n == 1) return 1;
    return sqrt(n + can(n - 1));
}

int main(){
    int n;
    do{
        cout << "Nhap n: ";
        cin >> n;
    }while(n <= 1);
    cout << "So chu so cua n: " << dem(n);
    cout << "\nS(n) = " << can(n);
    return 0;
}
