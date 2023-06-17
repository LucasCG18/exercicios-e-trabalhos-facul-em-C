#include <stdio.h>
#include <ctype.h>

int main(void) 
{
  int count_0 = 0, vitoria_x;
  char jogo[3];
  scanf("%s", &jogo);
  for (int i = 0; i < 3; i++)
  {
    if (jogo[i] == 'O')
    {
        count_0++;
    }
    if (i > 0 )
    {
        if (jogo[i] == 'X' && jogo[i - 1] == 'X')
        {
            vitoria_x = 1;
        }
    }
  }
  if (count_0 > 1 || count_0 == 0)
  {
    printf("?\n");
  }else if (vitoria_x == 1)
  {
    printf("Alice\n");
  }else{
    printf("*\n");
  }
}