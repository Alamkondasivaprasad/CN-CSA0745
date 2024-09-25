#include<stdio.h>
#include<string.h>

int main() {
    char key[5][5] = {{'P','L','A','Y','F'}, {'I','R','B','C','D'}, {'E','G','H','K','M'}, {'N','O','Q','S','T'}, {'U','V','W','X','Z'}};
    char plaintext[] = "MONARCHY", ciphertext[100];
    printf("Plaintext: %s\n", plaintext);

    for(int i = 0; i < strlen(plaintext); i += 2) {
        int row1 = (plaintext[i] - 'A') / 5, col1 = (plaintext[i] - 'A') % 5;
        int row2 = (plaintext[i+1] - 'A') / 5, col2 = (plaintext[i+1] - 'A') % 5;
        ciphertext[i] = key[row1][col2]; 
        ciphertext[i+1] = key[row2][col1];
    }

    printf("Ciphertext: %s\n", ciphertext);
    return 0;
}

