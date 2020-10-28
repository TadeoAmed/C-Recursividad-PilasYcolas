#include <stdio.h>
#include <stdlib.h>
void cargar (int [10][10] ,int  );
void mostrar (int[10][10] ,int );
void sumatoria2da (int [10][10],int );
void mayor2da (int  [10][10], int );
void promiedomultiplos5 (int [10][10],int);
void sumatoriaImp(int [10][10],int);
void sumatoriaDiagPr(int [10][10],int);
void sumatoriaDiagSec(int [10][10],int);
void matrizSim(int [10][10],int);
void encontrarMenor(int [10][10],int);
int main()
{
int mat [10][10];
int dim ;
printf("ingrese dimension");
scanf("%d",&dim);
cargar (mat , dim);
mostrar (mat, dim );
sumatoria2da ( mat , dim);
mayor2da (mat ,dim);
promiedomultiplos5(mat,dim);
sumatoriaImp(mat,dim);
sumatoriaDiagPr(mat,dim);
sumatoriaDiagSec(mat,dim);
matrizSim(mat,dim);
encontrarMenor(mat,dim);
return 0 ;
}

void cargar(int mat [10][10] , int dim)
{
    int i , x;
    for (i= 0 ;i< dim ; i++)
    {
         for (x= 0 ;x< dim ; x++)
         {
              printf("ingrese valor [%d] [%d]",i,x);
              scanf("%d" , &mat[i][x]);
         }
    }
}

void mostrar (int mat [10] [10] , int dim )
{
    int i , x ;
    for (i= 0 ;i< dim ; i++)

    {   printf("\n");
        for (x= 0 ;x< dim ; x++)
        {
         printf("%d \t",mat[i][x] );
        }
        printf("\n");
    }
}
void sumatoria2da (int mat [10][10],int dim)
{
    int i ;
    int acum =0;
    for (i= 0 ;i< dim ; i++)

    {
      acum = acum + mat [1][i]  ;
    }
    printf("la sumatoria de la 2da fila es %d", acum) ;
}

void mayor2da (int mat [10][10], int dim)
{
    int i ;
    int num = 0;
    for (i= 0 ;i< dim ; i++)
        {
            if ( mat [i][1] > num)
            {


                num = mat [i][1];
            }
        }

    printf("\nel mayor de la columna 2 es : %d",num);
}

void promiedomultiplos5(int mat[10][10], int dim)
{
    int promedio ;
    int acum = 0 ;
    int cont = 0 ;
    int i , x;
    for (i= 0 ;i< dim ; i++)
    {
         for (x= 0 ;x< dim ; x++)
         {
            if (mat [i][x] %5 == 0);
            {
                cont = cont + 1 ;
                acum = acum + mat [i][x];
            }

         }
    }
    if (cont != 0)
    {
        promedio = acum / cont;
        printf("\n el promedio  es  [%d] de multiplos de 5",promedio );

    }
}
void sumatoriaImp (int mat [10][10],int dim)
{
    int i ;
    int x;
    int acum = 0;
    for (x=1  ; x< dim ; x= x + 2)
        {
            acum = acum + mat [x][x]  ;

        }


    printf("\n la sumatoria de los numeros de coordenadas impares es : %d ",acum) ;
}

void sumatoriaDiagPr (int mat [10][10],int dim)
{
    int x;
    int acum = 0;
    for (x=0  ; x< dim ; x++)
        {
            acum = acum + mat [x][x]  ;

        }


    printf("\n la sumatoria de la diagonal principal es  : %d ",acum) ;
}
void sumatoriaDiagSec(int mat [10][10],int dim)
{
    int x;
    int i;
    int acum = 0;
    printf("\n los elementos de la diagonal son ");
    for (x =0; x < dim  ; x ++)
        {
            for (i=0; i < dim ; i++)
            {
                if (x+i == dim - 1)
                {
                   printf("\n %d",mat[i][x]);
                }

            }
        }



}

void matrizSim (int mat [10][10], int dim)
{
    int x;
    int i;
    int cont = 0;

    for (x =0; x < dim  ; x ++)

        {
            for (i=0; i < dim ; i++)
            {
                if (mat[i][x]== mat[x][i] && i!=x  )
                {
                   cont = cont + 1;

                }

            }
        }
    if (cont== 0 )
    {
        printf("\n La matriz es asimetrica");
    }  else if (cont>0)
    {
        printf("\n La matriz es simetrica");

    }
}
void encontrarMenor(int mat[10][10],int dim)
 {

    int i ;
    int x;
    int posmin=0 ;
    int cont = 0;
    for (i= 0;i<dim;i++)
    {
        for (x= 0 ; x<dim ; x++)
        {

        if (mat[x][i]<posmin || cont == 0)
            {
            posmin = mat[x][i];
            cont += 1;
            }
        }
    }
    printf("\n el numero menor a todos los ingresados es : [%d]",posmin);
 }
