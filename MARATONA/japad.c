void divisao_7(long long int num) {
    long long int digito_por_10, resto;
    
    while (num >= 10) {  
        printf("%lld\n", ((num / 10)*3) + num % 10);
        num = (num / 10) * 3 + num % 10;
    }
}

int main() {
    long long int numero;
    scanf("%lld", &numero);
    printf("%lld\n", numero);

    if (numero > 7) 
    {
        divisao_7(numero);
    }
    return 0;
}