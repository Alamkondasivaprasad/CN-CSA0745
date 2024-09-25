#include<stdio.h>
#include<string.h>

int main() {
    int a = 5, b = 8;  // Valid values for a and b
    char plaintext[] = "HELLO", ciphertext[100];
    printf("Plaintext: %s\n", plaintext);

    for (int i = 0; plaintext[i] != '\0'; i++) {
        int p = plaintext[i] - 'A';
        ciphertext[i] = ((a * p + b) % 26) + 'A';  // Affine Caesar cipher formula
    }
    ciphertext[strlen(plaintext)] = '\0';  // Null terminate

    printf("Ciphertext: %s\n", ciphertext);
    return 0;
}

