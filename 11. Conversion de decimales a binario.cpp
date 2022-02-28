#include <string>
#include <iostream>

using namespace std;

int main() {
    printf("Ingrese un numero entero positivo: \n");
    int num;
    string binario = "";
    cin >> num;
    if (num > 0) {
    while (num > 0) {
    if (num%2 == 0) {
    binario = "0"+binario;
    } else {
    binario = "1"+binario;
    }
    num = (int) num/2;
    }
    } else if (num == 0) {
    binario = "0";
    } else {
    binario = "No se puede realizar la conversión. Ingrese solo numeros positivos";
    }
    cout << "El resultado de la conversion es: " << binario;
    
	return 0;

}
