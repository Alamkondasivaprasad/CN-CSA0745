#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define CIPHER_LEN 200  
#define ALPHABET_LEN 26
void frequencyAnalysis(const char *ciphertext) {
    int freq[256] = {0};
    int i;
    for (i = 0; ciphertext[i] != '\0'; i++) {
        freq[(unsigned char)ciphertext[i]]++;
    }
    printf("Frequency Analysis:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }
}
void decryptCipher(const char *ciphertext, const char *substitution) {
    int i;
    char decrypted[CIPHER_LEN];
    for (i = 0; ciphertext[i] != '\0'; i++) {
        if (ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
            decrypted[i] = substitution[ciphertext[i] - 'A'];
        } else if (ciphertext[i] >= 'a' && ciphertext[i] <= 'z') {
            decrypted[i] = substitution[ciphertext[i] - 'a'];
        } else {
            decrypted[i] = ciphertext[i];
        }
    }

    decrypted[i] = '\0';  

    printf("Decrypted Text: %s\n", decrypted);
}

int main() {
    const char ciphertext[] = "53‡‡†305))6*;4826)4‡.)4‡);806*;48†8¶60))85;;]8*;:‡*8†83"
                              "(88)5*†;46(;88*96*?;8)*‡(;485);5*†2:*‡(;4956*2(5*—4)8¶8*"
                              ";4069285);)6†8)4‡‡;1(‡9;48081;8:8‡1;48†85;4)485†528806*81"
                              "(‡9;48;(88;4(‡?34;48)4‡;161;:188;‡?;";
    frequencyAnalysis(ciphertext);
    char substitution[ALPHABET_LEN] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
        'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };


    decryptCipher(ciphertext, substitution);

    return 0;
}

