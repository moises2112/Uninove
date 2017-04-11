#include <stdlib.h>
#include <stdio.h>

#define Max 50

typedef char tpElem;

typedef struct
{
   int topo;
   tpElem valor[50];
}tpPilha;

void init(tpPilha *p);
int isFull(tpPilha *p);
int isEmpty(tpPilha *p);
void push(tpPilha *p, tpElem X);
tpElem pop(tpPilha *p);
tpElem top(tpPilha *p);

void init(tpPilha *p)
{
  p->topo=-1;
}

int isFull (tpPilha *p)
{
  return (p->topo==Max);
}

void push (tpPilha *p, tpElem x)
{
  if (isFull(p)==0)
    p->valor[++p->topo]=x;
  else
  {
    printf("Pilha cheia! \n\n");
    system("pause");
  }
}

int isEmpty(tpPilha *p)
{
   return (p->topo==-1);
}

tpElem pop(tpPilha *p)
{
  if(isEmpty(p)==0)
    return (p->valor[p->topo--]);
  else
  {
    printf("Pilha vazia! \n\n");
    system("pause");
  }
}    

tpElem top(tpPilha *p)
{
  if(isEmpty(p)==0)
    return (p->valor[p->topo]);
  else
  {
    printf("Pilha vazia! \n\n");
    system("pause");
  }
}   

