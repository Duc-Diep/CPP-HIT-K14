#include<iostream>

using namespace std;

int uoc(int a, int b){
    if(a%b == 0) return b;
    return uoc(b, a%b);
}

int uoc2(int a, int b){
    int x = a%b;
    while(x != 0){
        a = b;
        b = x;
        x = a%b;
    }
    return b;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << uoc(a, b) << "\n";
    cout << uoc2(a, b);
    return 0;
}
