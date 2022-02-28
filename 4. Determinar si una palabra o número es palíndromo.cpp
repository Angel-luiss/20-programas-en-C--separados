#include <iostream>
#include <stdio.h>

using namespace std;
int main() {
    string palabra;
    int a = 0, b = 0;

    printf("Ingrese palabra o numero:");
    getline(cin >> ws, palabra);

    for(int ind = palabra.length() - 1; ind >= 0; ind--) {
	if(palabra[ind] == palabra[a]) {
    b++;
    }
    a++;
    }
    if(palabra.length() == b) {
    printf("el numero o palabra si es palindromo:");
    } else {
    printf("el numero o palabra no es es palindromo:");
    }
    return 0;
    system ("pause");
}
