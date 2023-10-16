#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float esfera(float raio);
int main(){
    float raio;
    cout << "Insira o raio: ";
    cin >> raio;
    cout << "O volume da esfera eh: "
         << fixed << setprecision(2)
         << esfera(raio) << endl;
}
float esfera(float raio){
    float pi= M_PI,esfera;
    esfera = pi * 4 * (raio*raio*raio)/3;
    return esfera;
}


