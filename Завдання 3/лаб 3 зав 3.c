#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{setlocale(LC_CTYPE, "ukr");

 int x,y,z,t, a, b;
 printf("����i�� ����� x=\n");
 scanf("%d", &x);

 printf("����i�� ����� y=\n");
 scanf("%d", &y);

 printf("����i�� ����� z=\n");
 scanf("%d", &z);

 a=x+(y/z);
 b=x-(1/1+x*x);

 if (a==0 ||  b==0)
 {
     printf ("�������!");
 }
 else{
    t=(1+z)*(a/b);
    printf("%d", t);
 }
}
