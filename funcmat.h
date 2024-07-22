typedef struct atleta{
  char *nome;
  int hora;
  int minuto;
  int totalMin;
} Atleta;

int divisaoInteira(int dividendo, int divisor, int *quociente, int *resto);
void horario(int tempo, int *hora, int *minuto);
char** AtletMsmLetra(Atleta **vAtleta,int qt,char l,int *n);
void preencheNome(Atleta **vAtleta,int qt,int cont);