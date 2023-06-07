#include <stdio.h>
#include <string.h>

int main(){

    int vogais, caracteres;
    char frase[100];
    scanf ("%[^\n]", frase);
    for (int i=0; frase[i] !='\0'; i++) {
        if (frase[i] >= 'a' && frase[i] <= 'z'){
            frase[i] = frase[i] - ('d' - 'D');
        }
        if (frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U')
        {
            vogais++;
            printf("%c", frase[i]);
        }
        caracteres = i+1;
    }
    
    printf("Frase: %s", frase);

}