#include<stdio.h>
#include<stdlib.h>
void cargarM (int [10][10],int);
void mostrar (int [10][10],int);

int main ()
{   int matriz [10][10];
    int dim;
    printf("ingrese el valor de la matriz cuadrada:");
    scanf("%d",dim);
    cargarM(matriz,dim);
    mostrar(matriz,dim);
}

void cargarM (int mat [10][10],int dim)

{
    int i,x;

    for (i = 0; i<dim; i++)
    {
        for (x= 0; x<dim; x++)
        {
            printf("ingrese el registro (%d,%d)", i,x);
            scanf(scanf("%d"),mat[i][x]);
        }
    }
}
void mostrar (int mat[10][10], int dim )
{
        int i,x;
    for (i = 0; i<dim; i++)
    {
        for (x= 0; x<dim; x++)
        {
            printf("----------matriz:--------- \n");
            printf("%d",&mat[i][x]);
        }
    }
}


/*int main ()
{
int numeros [5]= {0} ;
int num = 0;
int i = 0;
FILE *fp;
if ((fp=fopen("e:\numeross.dat","w"))==NULL)
	printf("\n No se puede Abrir!!");
	else
	{
	printf("Ingrese Legajo (0 para terminar):");
	scanf("%d",&num);
	while(i<6)
	{
	    if (num % 2 == 0)
        {
		printf("Ingrese numero: \n");
		scanf("%d",num);
        }
		printf("Ingrese Legajo (ingrese 0 para Terminar):");
		scanf("%d",&num);
		i+=1;

	}
        }
fclose(fp);
printf("\nLos Datos Ingresados son: \n\n");
if ((fp=fopen("e:\numeross.dat","r"))==NULL)
	printf("\n No Se puede Abrir!!!.");
	else
	{
	while(!feof(fp))
	{
	     fscanf(fp,"%d \n",num);
	     printf("Legajo: %d   Nombre: %s   Sueldo: %.2f\n",num);
	}
	}
fclose(fp);
}

*/
