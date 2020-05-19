#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char str[50];
    cout << "Nhap chuoi str: ";
    gets(str);

	while(str[0] == ' '){
		strcpy(&str[0], &str[1]);
	}

	for(int i = 0; i < strlen(str) - 1; i++){
		if(str[i] == ' ' && str[i + 1] == ' '){
			strcpy(&str[i], &str[i + 1]);
			i--;
		}
	}

	while(str[strlen(str) - 1] == ' '){
		strcpy(&str[strlen(str) - 1], &str[strlen(str)]);
	}

	str[0] = toupper(str[0]);
	cout << str << "|";
	return 0;
}
