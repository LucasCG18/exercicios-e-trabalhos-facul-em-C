#include <stdio.h>
#include <math.h>
int main(){
    long long int jogada_bob, numero, numero_2n;
    long long int jogada_alice, jogada_final = 0;
    scanf("%lld %lld",&numero,&jogada_bob);
    for (int i = 0; i <= numero*2; i++)
    {
        jogada_alice = pow(i,2);
        if ((((jogada_alice - jogada_bob) % (2*numero + 1)) == 0) && (jogada_alice - jogada_bob >= 0))
        {
            jogada_final = jogada_alice;
        }else if ((((jogada_bob - jogada_alice) % (2*numero + 1)) == 0) && (jogada_bob - jogada_alice >= 0))
        {
            jogada_final = jogada_alice;
        }
    }
    printf("%lld\n", jogada_final);
}