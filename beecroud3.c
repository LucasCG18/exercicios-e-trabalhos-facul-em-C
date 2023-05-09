#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    n = n * 4;
    int a = 1;
    while (a <= n)
    {
        if (a % 4 == 0)
        {
            printf("PUM\n");
        }else{
            printf("%d ", a);
        }
        a +=1;
    }
    
}