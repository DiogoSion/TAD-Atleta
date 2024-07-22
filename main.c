#include <stdio.h>
#include <stdlib.h>
#include "funcmat.h"

int main(void) {
  int h,m,media,cont,n=0;
  int totTempo = 0;
  int qt = 3;
  char** nomes;
  Atleta **vAtleta = (Atleta**)malloc(qt*sizeof(Atleta*));
  if (vAtleta==NULL)
  {
   printf("Memoria insuficiente.\n");
   exit(1);
  }
  for(cont=0;cont<qt;cont++){
    vAtleta[cont]=(Atleta*)malloc(sizeof(Atleta));
    if (vAtleta[cont]==NULL)
    {
     printf("Memoria insuficiente.\n");
     exit(1);
    }
    preencheNome(vAtleta,qt,cont);
    printf("Digite o tempo de treino em minutos: ");
    scanf("%d", &vAtleta[cont]->totalMin);
    horario(vAtleta[cont]->totalMin,&vAtleta[cont]->hora,&vAtleta[cont]->minuto);
    printf("%s --> %d:%d\n\n",vAtleta[cont]->nome,vAtleta[cont]->hora,vAtleta[cont]->minuto);
    totTempo+=vAtleta[cont]->totalMin;
  }
  media=totTempo/qt;
  horario(media,&h,&m);
  printf("tempo médio de  treino: %d:%d \n",h,m);
  printf("\nAtletas com horas maior e minutos menor que a média: ");
  for(cont=0;cont<qt;cont++){
    if (vAtleta[cont]->hora > h){
      if(vAtleta[cont]->minuto < m){
        printf("\n%s --> %d:%d\n",vAtleta[cont]->nome,vAtleta[cont]->hora,vAtleta[cont]->minuto);
      }
    }
  }
  nomes = AtletMsmLetra(vAtleta, qt, 'd', &n);
  printf("\nNomes com inicial da mesma letra escolhida: ");
  for(int i=0; i < n; i++){
    printf("\n%s",nomes[i]);
  }
  
  return 0;
}