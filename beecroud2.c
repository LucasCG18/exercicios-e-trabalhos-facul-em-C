#include <stdio.h>

float q(float a){
    return a*a;
}

int main(){
    system("cls");
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    if (B > A)
    {
        int b = A;
        A = B;
        B = b;
    }
    if (C > A)
    {
        int c = A;
        A = C;
        C = c;
    }
    if (A>= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }else{
        if (q(A) == q(B) + q(C))
        {
            printf("TRIANGULO RETANGULO\n");
        }else if (q(A) > q(B) + q(C))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }else if (q(A) < q(B) + q(C))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (A == B && A == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }else if ((A == B && A != C) || (B == C && B != A) || (C == A && C != B))
        {
            printf("TRIANGULO ISOSCELES\n");
        }     
    }   
    return 0;
}