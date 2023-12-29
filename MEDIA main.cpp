#include <iostream>
#include <iomanip>
#define pa 3.5
#define pb 7.5
using namespace std;
int main (){
    float a, b;
    cin >> a >> b;
    cout << "MÉDIA =" << (a*pa + b*pb)/(pa+pb) << setprecision(5) << fixed << endl;
    return 0;

}