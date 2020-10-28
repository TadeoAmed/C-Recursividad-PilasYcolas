



#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int num;
	struct lista *sig;
 }nodo;
typedef struct lista2{
	int multiplos;
	struct lista2 *sig2;
 }nodo2;

void crear (nodo *pt);
void mostrar(nodo *pt);
nodo* insertar1(nodo* );
nodo* eliminar1(nodo* );
void insertar2 (nodo* );
void eliminar2(nodo* );
void generar(nodo* , nodo2*);
int recorrer(nodo*,int*);

int main()
{

    nodo *prin;
    nodo2 *p2;
    int  *cont ;

    p2=(nodo*)malloc(sizeof(nodo));
    prin=(nodo*)malloc(sizeof(nodo));

    crear(prin);
    mostrar (prin);
    printf("la suma es %d",recorrer(prin,&cont));
    generar(prin,p2);
    mostrar2(p2);

    return 0;
}

void crear (nodo *registro )
{
    printf("ingrese un numero ");
    scanf("%d",&registro->num);
    if (registro->num == 100  )
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
void generar(nodo* r,nodo2 *s)
{
    while(r->sig!=NULL)
    {
        if(r->num % 3 == 0){
        s->multiplos=r->num;
        s->sig2=(nodo2*)malloc(sizeof(nodo2));
        s=s->sig2;
        r=r->sig;
    }
    }

    s->sig2=NULL;
}
void mostrar2 (nodo2 *registro)
{
    if (registro->sig2 !=NULL)
	{
        printf ("%d\n",registro->multiplos);
        mostrar (registro->sig2);
	}
	return;
}


int recorrer (nodo *p,int *c)
{


        p->num = p->num + *c;

return c;
}

/*
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


void insertar2 (nodo *p)
{nodo *aux;
    while(p->sig!=NULL)
    {
        if(p->num%2==0) //condicion de insercion
        {
            aux=(nodo *)malloc(sizeof(nodo));
            aux->num=((p->num)/2);//valor a insertar
            aux->sig=p->sig;
            p->sig=aux;
            p= p->sig;
        }
        p=p->sig;

    }

}
nodo* eliminar1(nodo* p)
{nodo *aux;
    while()//condicion de eliminacion
    {
        aux=p->sig;
        free(p);
        p=aux;

    }
    return p;
}
void eliminar2(nodo* p)
{nodo *aux;
    while(p->sig!=NULL && p->sig->sig!=NULL)
    {
        if()//condicion de eliminacion
        {
            aux=p->sig->sig;
            free(p->sig);// importa que el free este antes de que asignes p->sig = aux porque sino despues no vas a poder borrar en memoria el real p->sig
            p->sig=aux;
        }
        else
        {
            p=p->sig;
        }
    }
    */
