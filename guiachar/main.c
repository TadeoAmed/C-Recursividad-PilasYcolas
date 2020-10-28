#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    char c;
    c = getchar ();
    int cont = 0 ;
    while (c != '.')
    {
        if (c > 6)
        {
            printf("conto");
            cont ++;

        }else {
        printf("no conto");}
        c  = getchar ();
    }
    printf ("hay %d palabras con mas de 3 letras " , cont);
    return 0;



int main()
{
    char c;
	int cuentaPalabras = 0;
    printf("ingrese frase finalizada en punto o enter\n");
    c=getchar();
    while(c!='\n' && c!='.'){
		while(c==' '){
			c=getchar();
		}
		while(c!='\n' && c!='.'){
			putchar(c);
			c=getchar();
		}
		cuentaPalabras++;
		putchar(' ');
		printf("pase");
    }
	printf("la frase tiene %d palabras\n", cuentaPalabras);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void cambia();
int main(void)
{int a = 7 , b = 8;

    printf("a = %d b= %d",a ,b );
    cambia (&a,&b);
    printf ("a= %d b= %d" ,a,b);
}

void cambia (int *x,int *y)
{


int z;
z=*x;
*x=*y;
*y=z;
}
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
int *p, *q;

int x;

p=(int * )malloc (sizeof(int));

*p=3;

q=p;

x=7;

*q=x;

p= (int *) malloc (sizeof(int));

*p = 5;
printf("q %d p %d",*q ,*p);
    return 0;
}


