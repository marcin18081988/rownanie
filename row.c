#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float a, b, c, x;
printf("Podaj wspolczynnik a = \n");
scanf("%f", &a);
printf("Podaj wspolczynnik b = \n");
scanf("%f", &b);
printf("Podaj wspolczynnik c = \n");
scanf("%f", &c);
if(a==0)
printf("Rownanie sprzeczne  \n");
else
x=((c-b)/a);
printf("x wnosi % f\n", x);
system("PAUSE");
return 0;
}
