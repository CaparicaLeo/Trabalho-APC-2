#include <iostream> 
using namespace std;
int base, exp, resultado=1;
void potencia(){
    while(exp>0){
        resultado*=base;
        exp--;
    }
    cout << resultado << endl;
}
int main(){
    cin >> base;
    cin >> exp;
    potencia();
}