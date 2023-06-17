#include <stdio.h>
#include <math.h>
int main(){
    long long int max;
    double A,B,C;
    char op;
    scanf("%lf %lf %lf\n",&A,&B,&C);
    scanf("%c",&op);
    if(op =='A')
        max = A+floor((B*(3.0/2.0))+(C*(5.0/2.0)));
    else if(op =='B')
        max = B+floor((A*(2.0/3.0))+(C*(5.0/3.0)));
    else if(op =='C')
        max = C+floor((A*0.4)+(B*0.6));
    printf("%lld\n",max);

}