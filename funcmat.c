#include "funcmat.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int divisaoInteira(int dividendo, int divisor, int *quociente, int *resto){
  if(divisor == 0){
    return 0;
  }
  else{
    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;
    return 1;
  }
}

void horario(int tempo, int *hora, int *minuto){
  divisaoInteira(tempo, 60, hora, minuto);
}

char** AtletMsmLetra(Atleta **vAtleta,int qt,char l,int *n){
  char** vNomes;
  for (int i=0;i<qt;i++){
    if (vAtleta[i]->nome[0] == l){
      *n = *n + 1;
    }
  }
  vNomes = (char**)malloc((*n)*sizeof(char*));
  if (vNomes==NULL)
  {
   printf("Memoria insuficiente.\n");
   exit(1);
  }
  for (int i=0, j=0;i<qt;i++){
    if (vAtleta[i]->nome[0] == l){
      vNomes[j] = (char*)malloc((strlen(vAtleta[i]->nome)+1)*sizeof(char));
      if (vNomes[j]==NULL)
      {
       printf("Memoria insuficiente.\n");
       exit(1);
      }
      strcpy(vNomes[j],vAtleta[i]->nome);
      j++;
    }
  }
  return vNomes;
}

void preencheNome(Atleta **vAtleta,int qt, int cont){
  char nome[30];
  printf("Digite o nome do atleta : ");
  scanf("%s", nome);
  vAtleta[cont]->nome = (char*)malloc((strlen(nome)+1)*sizeof(char));
  if (vAtleta[cont]==NULL)
  {
   printf("Memoria insuficiente.\n");
   exit(1);
  }
  strcpy(vAtleta[cont]->nome, nome);
}