#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
     setlocale(LC_CTYPE, "ukr");
 float x1, y1;

 float x2, y2;

 float  x3, y3;

    printf ("Введiть координати точок числа A - x1 та y1 \n");
    printf ("x1=");
    scanf ("%f", &x1);
    printf ("y1=");
    scanf ("%f", &y1);

     printf ("Введiть координати точок числа B - x2 та y2 \n");
    printf ("x2=");
    scanf ("%f", &x2);
    printf ("y2=");
    scanf ("%f", &y2);

    printf ("Введiть координати точок числа C - x3 та y3 \n");
    printf ("x3=");
    scanf ("%f", &x3);
    printf ("y3=");
    scanf ("%f", &y3);

    float ab, ac;

    ab=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    ac=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);

    if (ab>ac)
    {
        ab=sqrt(ab);
        ac=sqrt(ac);
        printf ("Точка B ближче до A \n");
    }
    if (ab<ac)
    {
        ab=sqrt(ab);
        ac=sqrt(ac);
        printf ("Точка C ближче до A \n");
    }

if (ab==ac)
    {
         printf("Точка на ровному мiсцi\n");
    }
    {
        return 0;
    }
}
