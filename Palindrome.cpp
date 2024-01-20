#include<iostream>
#include <string.h>
#include <locale.h>
#define MAX 1001
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    char palavra[MAX];
    char palavra_contraria[MAX];

    cin >> palavra;

    strcpy(palavra_contraria, palavra);
    strrev(palavra_contraria);

    if(strcmp(palavra, palavra_contraria) == 0){
        cout << "sim" << endl;
    }else {
        cout << "não" << endl;
    }



    return 0;
}
