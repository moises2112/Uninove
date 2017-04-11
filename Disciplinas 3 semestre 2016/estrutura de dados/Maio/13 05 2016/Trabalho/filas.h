#include <stdlib.h>
#include <stdio.h>

#define Max 50

typedef int tpElem;

typedef struct
{
   int total,comeco,final;
   tpElem valor[Max];
}tpFila;

void qinit(tpFila *f);
int qisFull(tpFila *f);
int qisEmpty(tpFila *f);
void enqueue(tpFila *f, tpElem x);
tpElem dequeue (tpFila *f);

void qinit(tpFila *f)
{
     f->total=0;
     f->comeco=0;
     f->final=0;
}

int qisFull(tpFila *f)
{
    return (f->total==Max);
}

int qisEmpty(tpFila *f)
{
    return (f->total==0);
}

void adc (int *i)
{
     (*i)++;
     if(*i==Max)
       *i=0;         
}

void enqueue(tpFila *f, tpElem x)
{
     if (qisFull(f)==0)
     {
        f->valor[f->final]=x;
        adc(&f->final);
        f->total++;
     }
     else
     {
         printf("\nFila Cheia \n\n");
         system("pause");
     }                   
}

tpElem dequeue (tpFila *f)
{
     tpElem x;   
     if (qisEmpty(f)==0)
     {
        x=(f->valor[f->comeco]);
        adc(&f->comeco);
        f->total--;
        return x;
     }
     else
     {
         printf("\nFila Vazia \n\n");
         system("pause");
     }                     
}

void printqueue (tpFila *f)
{
     for(int i=f->comeco; i<f->final; i++) 
     {
        printf("%d",f->valor[i]); 
        if ((i+1) < f->final)
          printf(" - ");
     }                
}
