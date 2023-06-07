#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 60; j++)
        {
            if (i == 0 || i == 9)
            {
                printf("+");
            }else if (j == 0 || j == 59)
            {
                printf("+");
            }else{
                printf(" ");
            }
            if (j == 59)
            {
                printf("\n");
            }    
        } 
    }
}