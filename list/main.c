#include <stdio.h>
#include <stdlib.h>


#define CANTIDAD_NUMEROS 10
#define DESDE 1
#define HASTA 10

typedef struct lista{
	int num;
	struct lista *sig;
 }nodo;


typedef struct lista2{
	int multiplos;
	struct lista2 *sig2;
 }nodo2;

void crear (nodo *pt, int);
void mostrar(nodo *pt, int);
void mostrar2(nodo2 * );
void generar (nodo *, nodo2 *);
void insertar2 (nodo *);
int recorrer(nodo *);


int main()
{
    int i=0;
    nodo *prin;
    nodo2 *p2;
    prin=(nodo*)malloc(sizeof(nodo));
    p2=(nodo*)malloc(sizeof(nodo));
    crear(prin,i);
    mostrar (prin,i);
    printf("----------- \n");
    generar(prin,p2);
    mostrar2(p2);
    printf("----------- \n");
    printf("lista modif : \n");
    insertar2 (prin);
    mostrar (prin,i);
    printf("------------- \n");
    printf("%d",recorrer(prin));

    return 0;
}


void crear (nodo *registro,int num)
{
    printf("ingrese un numero");
    scanf("%d",&registro-> num);
    while (registro->num != 0)
	{

    registro->sig=(nodo*)malloc(sizeof(nodo));
    registro=registro->sig;
    printf("ingrese un numero");
    scanf("%d",&registro-> num);

	}
	registro->sig = NULL;

}
void mostrar(nodo *registro,int num)
{

while (registro->sig!=NULL)
{
    printf("%d \n",registro-> num);
    registro=registro->sig;
}
}

void mostrar2 (nodo2 *registro)
{
    if (registro->sig2 !=NULL)
	{
        printf ("%d \n",registro->multiplos);
        mostrar2 (registro->sig2);
	}
	return;
}



void generar (nodo *r, nodo2 *s)
{
    while(r->sig!=NULL)
    {
        if(r->num % 3 == 0){
            s->multiplos=r->num;
            s->sig2=(nodo2*)malloc(sizeof(nodo2));
            s=s->sig2;
        }
        r=r->sig;
    }

    s->sig2=NULL;
}

int recorrer (nodo *p)
{  int acum = 0;
    while(p->sig != NULL){
        acum=p->num + acum ;
        p=p->sig;
    }
return &acum;
}

void insertar2 (nodo *p)
{nodo *aux;

    while(p->sig!=NULL)
    {
        if(1>20) //condicion de insercion
        {
            aux=(nodo *)malloc(sizeof(nodo));
            aux->num=20;//valor a insertar
            aux->sig=p->sig;
            p->sig=aux;

        }

        p=p->sig;
    }
}

