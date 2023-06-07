#include <stdio.h>

int main(){

    char frase[100], frase2[100], frase3[100];
    int count_espacos, contador_palindromo = 0;
    scanf ("%[^\n]", frase);
    for (int i=0; frase[i] !='\0'; i++) {
        if (frase[i] >= 'a' && frase[i] <= 'z'){
            frase[i] = frase[i] - ('d' - 'D');
        }
    }
    for (int i=0; frase[i] !='\0'; i++) {
        if (frase[i] != 32)
        {
            frase2[count_espacos] = frase[i];
            count_espacos++;
        }
    }
    for (int i = 0; i < count_espacos; i++)
    {
        if (frase2[i] == frase2[count_espacos - i - 1])
        {
            contador_palindromo++;
        }
    }
    if (contador_palindromo == count_espacos)
    {
        printf("E palindromo");
    }else{
        printf("Nao e palindromo");
    }
}