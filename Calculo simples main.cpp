#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int c1,c2,np1,np2;
    float v1,v2;
    cin >>c1>>np1>>v1;
    cin >>c2>>np2>>v2;
    cout << "VALOR A PAGAR: R$ "<< (np1*v1)+(np2*v2) <<setprecision(2) << fixed << endl;
    return 0;
}