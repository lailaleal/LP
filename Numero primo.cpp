#include <iostream>
#include <cmath>
using namespace std;
bool eprimo(int num){
    if (num <=1) return false;
    if (num == 2) return true;
    if (num%2==0) return false;
    for (int i=3; i <= sqrt(num); i+=2){
        if (num % i == 0) return false;
    } return true;

}
int main (){
    int N, X;
    cin >> N;
    for (int i=0; i<N; i++){
        cin >> X;
        if (eprimo(X)){
            cout << X <<" eh primo" << endl;
        }
        else{ cout << X << " nao eh primo" << endl;}
    }

return 0;}
