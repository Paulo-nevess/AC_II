#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fun��o para converter decimal para bin�rio
void decimalParaBinario(int n, int bits) {
    // Array para armazenar os bits bin�rios
    char binario[bits + 1];
    binario[bits] = '\0'; // Terminador de string

    // Preenche o array de tr�s para frente com os bits
    for (int i = bits - 1; i >= 0; i--) {
        binario[i] = (n % 2) ? '1' : '0';
        n /= 2;
    }

    // Exibir valor bin�rio
    printf("Bin�rio: %s\n", binario);
}

int main() {
    // Hexadecimal de 3 caracteres
    char hexNum[] = "1AF";

    // Converter o n�mero hexadecimal para decimal (inteiro)
    int decimalValue = (int)strtol(hexNum, NULL, 16);

    // Exibir valor hexadecimal
    printf("Hexadecimal: %s\n", hexNum);

    // Converter o valor decimal para bin�rio (12 bits, 3 d�gitos hexadecimais)
    decimalParaBinario(decimalValue, 12);

    return 0;
}
