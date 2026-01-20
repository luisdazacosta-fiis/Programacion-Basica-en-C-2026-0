#include <iostream>
using namespace std;
int main () {

    int num1, num2;
    cout<<"Ingrese dos numeros para comparar: "<<endl;
    cin>>num1>>num2;

    if (num1>num2) {
        cout<<num1<<" es mayor a "<<num2<<endl;
    } else if (num1<num2) {
        cout<<num2<<" es mayor a "<<num1<<endl;
    } else {
        cout<<"Ambos numeros son iguales."<<endl;
    }

    return 0;
}