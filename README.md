# 🏅 Projeto TAD Atleta

Este projeto implementa um TAD (Tipo Abstrato de Dados) para representar atletas e manipular seus dados em linguagem C. Ele fornece funções para lidar com as operações comuns relacionadas a atletas, como cálculo de tempo, filtragem de nomes e outras funcionalidades.

## 🗂️ Estrutura do Projeto

O projeto é composto pelos seguintes arquivos:

- `funcmat.h`: Arquivo de cabeçalho que contém a definição da estrutura `Atleta` e as declarações das funções.
- `funcmat.c`: Implementação das funções declaradas em `funcmat.h`.
- `main.c`: Função principal que demonstra o uso das funções implementadas.

### 🏃‍♂️ Estrutura `Atleta`

```c
typedef struct atleta{
  char *nome;
  int hora;
  int minuto;
  int totalMin;
} Atleta;
```

### 🔧 Funções

#### `divisaoInteira`

Realiza a divisão inteira entre dois números.

```c
int divisaoInteira(int dividendo, int divisor, int *quociente, int *resto);
```

#### `horario`

Converte o tempo total em minutos para horas e minutos.

```c
void horario(int tempo, int *hora, int *minuto);
```

#### `AtletMsmLetra`

Retorna uma lista de nomes de atletas que começam com uma letra específica.

```c
char** AtletMsmLetra(Atleta **vAtleta, int qt, char l, int *n);
```

#### `preencheNome`

Preenche o nome de um atleta.

```c
void preencheNome(Atleta **vAtleta, int qt, int cont);
```

## 🛠️ Compilação e Execução

### Compilação

Para compilar o projeto, você pode usar o seguinte comando:

```bash
gcc -o main main.c funcmat.c
```

### Execução

Para executar o projeto, utilize o comando:

```bash
./main
```

## 📋 Exemplo de Uso

Ao executar o programa, o usuário será solicitado a inserir o nome e o tempo de treino (em minutos) de cada atleta. O programa calculará e exibirá o tempo médio de treino, além de listar os atletas com horas maiores e minutos menores que a média. Também exibirá os nomes dos atletas que começam com uma letra específica.

## 📄 Licença

Este projeto está licenciado sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## 🤝 Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

## 👥 Autores

- [Diogo Sion](https://github.com/DiogoSion)
