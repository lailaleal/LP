#include <iostream>
#include <string>
using namespace std;

int main (){

    string n1, n2;
    // enquanto
    while (cin >> n1 >> n2){
        if (n1 == "0" && n2 == "0") break;
    int carry =0, carry_count =0;

    // as string devem ter o mesmo tamanho, para tal, deve-se preencher com 0 o que faltar
    // length() é uma função de string que retorna o comprimento da string
    while (n1. length() < n2. length()) n1 = "0" + n1;
    while (n2. length() < n1. length()) n2 = "0" + n2;

    // adicionando os digitos da direita para a esquerda, os indices nas LP começam com 0, por essa razão começaremos o loop como length -1.
    for (int i = n1.length() -1; i >= 0; --i){
        int sum = (n1[i] - '0') + (n2[i] - '0') + carry;
        if (sum >= 10){
            carry = 1;
            carry_count ++;
        } else { carry = 0; }

    }
    if (carry_count == 0) {
        cout << "No carry operation." << endl;
    } else if ( carry_count == 1) {
        cout << "1 carry operation." << endl;
    }

    else {
            cout << carry_count << " carry operations." << endl;}
    }

return 0;}
