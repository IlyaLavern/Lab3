#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_CTYPE, "ukr");
  int o,s,t;
  printf("����i�� ����� s= \n");
  scanf("%d", &s);

  printf("����i�� ����� t= \n");
  scanf("%d", &t);


  if (s==-7)
  {
     o=(s/t)+2*s*t;
      printf("���������� ����� �����\no=%lf", &o);
  }
  if (s==7)
{
        o=sqrt(s/t+2*s*t);
         printf("���������� ����� �����\no=%lf", &o);
  }
  if (s==14)
  {
      o=s*s+2*t;
      printf("���������� ����� �����\no=%lf", &o);
  }
  if (s!=-7 && s!=7 && s!=14)
      printf("����� �� ����������!");

  return 0;
}
