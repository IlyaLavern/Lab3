#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_CTYPE, "ukr");
  int o,s,t;
  printf("Введiть число s= \n");
  scanf("%d", &s);

  printf("Введiть число t= \n");
  scanf("%d", &t);


  if (s==-7)
  {
     o=(s/t)+2*s*t;
      printf("Виконується перша умова\no=%lf", &o);
  }
  if (s==7)
{
        o=sqrt(s/t+2*s*t);
         printf("Виконується друга умова\no=%lf", &o);
  }
  if (s==14)
  {
      o=s*s+2*t;
      printf("Виконується третя умова\no=%lf", &o);
  }
  if (s!=-7 && s!=7 && s!=14)
      printf("Умова не виконується!");

  return 0;
}
