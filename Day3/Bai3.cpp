#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[50];
    int dem = 0;
    cout << "Nhap chuoi: ";
    gets(str);
    for(int i = 0; i < strlen(str);i++){
        if(str[i] != ' ' && str[i + 1] == ' ' ||
           str[i] != ' ' && str[i + 1] == '\0'){
            dem++;
        }
    }
    cout << dem;
    return 0;
}
