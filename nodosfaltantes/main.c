#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int num;
	struct lista *sig;
 }nodo;



void crear (nodo *pt);
void mostrar(nodo *pt);
nodo* insertar1(nodo* );
nodo* eliminar1(nodo* );
void insertar2 (nodo* );
void eliminar2(nodo* );


int main()
{

    nodo *prin;



    prin=(nodo*)malloc(sizeof(nodo));
    crear(prin);
    mostrar (prin);
    printf("----------lista mofif------------ \n");
    insertar2(prin);
    mostrar(prin);

    return 0;
}

void crear (nodo *registro)
{
    printf("ingrese un numero ");
    scanf("%d",&registro->num);
    if (registro->num == -1)
        registro->sig=NULL;
    else
	{

        registro->sig=(nodo*)malloc(sizeof(nodo));
        crear (registro->sig);

	}
	return;
}

void mostrar (nodo *registro)
{
    if (registro->sig !=NULL)
	{
        printf ("%d\n",registro->num);
        mostrar (registro->sig);
	}
	return;
}

/*
nodo* insertar1(nodo *p)
{
    nodo *aux;
    if(p-> num % 2 == 0)//condicion de insercion
    {
        aux=(nodo *)malloc(sizeof(nodo));
        aux->num=( (p->num)-1);//valor a insertar
        aux->sig=p;
        p=aux;
    }
    return p;
}

/*
nodo* insertar1(nodo *p)
{
    nodo *aux;
    while(p-> num != 0)//condicion de insercion y aca va a seguir agregando los antecesores hasta q p->num sea = 0
    {
        aux=(nodo *)malloc(sizeof(nodo));
        aux->num=( (p->num)-1);//valor a insertar
        aux->sig=p;
        p=aux;
    }
    return p;
}

*/
void insertar2 (nodo *p)
{nodo *aux;
while( p->num < p->sig->num  && p->sig->sig != NULL  && p->sig != NULL )
           {
            aux=(nodo *)malloc(sizeof(nodo));
            aux->num=(p->num + 1);//valor a insertar
            aux->sig=p->sig;
            p->sig=aux;
            p->sig=p->sig->sig;

           }



}

