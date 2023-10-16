#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float raio, esfera, pi= M_PI;
void volume(){
    esfera = 4 * pi * (raio*raio*raio)/3;
    cout << "Volume da esfera: " << fixed << setprecision(2)<< esfera << endl;
}
int main (){
    cin >> raio;
    volume();
}