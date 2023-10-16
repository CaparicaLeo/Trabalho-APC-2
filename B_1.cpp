#include <iostream>
using namespace std;
int multiploQuatro(int numero){
    return numero%4;
}
int main(){
    int n;
    cin >> n;
    if(multiploQuatro(n)==0){
        cout << "O numero selecionado eh multiplo de quatro" << endl;
    }
    else{
        cout << "O numero selecionado NAO eh multiplo de quatro" << endl;
    }
}