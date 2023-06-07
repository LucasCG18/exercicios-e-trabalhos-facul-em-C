#include <stdio.h>

int main(){

    char frase[100];
    scanf ("%[^\n]", frase);
    for (int i=0; frase[i] !='\0'; i++) {
        frase[i] = frase[i] + 3;
    }
    printf("Frase: %s\n", frase);

}