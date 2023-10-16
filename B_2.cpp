#include <iostream>
using namespace std;
int paridade(int numero){
    return numero%2;
}
int main(){
    int n;
    cin >> n;
    if(paridade(n)==0){
        cout << "O numero eh par." << endl;
    }
    else{
        cout << "O numero eh impar." << endl;
    }
}