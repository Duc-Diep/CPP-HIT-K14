#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char s[100];
    int c[127] = {0};
    cout << "Nhap chuoi s: ";
    gets(s);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != ' '){
            c[s[i]]++;
        }
    }
    for(int i = 0; i < 127; i++){
        if(c[i] != 0){
            cout << "Ky tu " << (char) i << " xuat hien " << c[i] << " lan" << endl;
        }
    }
    return 0;
}
