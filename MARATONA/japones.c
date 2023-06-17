#include <stdio.h>
#include <math.h>
int main(void) {
  int A, B, C, Aux;
  float Soma;
  char X;
  scanf(" %d %d %d %c", &A, &B, &C, &X);
  Soma = A + floor(3*B/2.0 + 5*C/2.0);
  Aux = Soma / 1;
// 3 questões de grafos (do tipo A) custam o mesmo que 2 questões de programação dinâmica (do tipo B);
// 2 questões de geometria (do tipo C) custam o mesmo que 5 questões de grafos.
// Logo, 10 questões de programação dinâmica valem o mesmo que 6 questões de geometria. Assim, 3 questões de geometria valem o mesmo que 5 questões de programação dinâmica.
  
  if ((X == 'A')||(X == 'a'))
    printf("%d", Aux);  
  else if ((X == 'B')||(X == 'b'))
    printf("%d", floor(2*Aux/3.0));
  else if ((X == 'C')||(X == 'c'))
    printf("%d", floor(2*Aux/5.0));
  
  return 0;
}