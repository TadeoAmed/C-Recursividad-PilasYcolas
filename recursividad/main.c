#include <stdio.h>
#include <stdlib.h>
void ingresar (int );
int main()
{
   int c ;
   printf("ingrese una palabra");
   ingresar (c);

    return 0;
}
void ingresar (c)
{
    if ( EOF != (c=getchar())) {
        putchar(c);
        ingresar(c);
    }
}
