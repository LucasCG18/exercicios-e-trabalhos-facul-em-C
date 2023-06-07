#include <stdio.h>

int main(){
    int contador;
    scanf("%d", &contador);
    while (contador != 0)
    {
        int a = 1;
        while (a <= contador)
        {
            printf("%d", a);
            if(a != contador){
                printf(" ");
            }
            a += 1;
        }
        printf("\n");
        scanf("%d", &contador);
    }
    

    
}