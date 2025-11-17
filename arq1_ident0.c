/*Faça um programa para gravar um registro em um
arquivo. Parar de gravar, somente quando o numero
identificador for igual a zero.

Numero identificador / Nome / Sobrenome /
Sexo / SaldoConta*/

struct pessoas
{
  int id;
  char nome[20];
  char sobrenome[20];
  char sexo[1];
  float saldoConta;
};

int main(){
  FILE *arq;
  struct pessoas dados;

  arq = fopen("dadosPessoas.txt", "w"); 
  if (arq == NULL) {
    fprintf(stderr, "Erro ao abrir o arquivo para leitura\n");
    exit(1);
  }

  printf("Digite o numero do id:");
  while(dados.id!=0){
    
  }



  fclose(arq);

  return 0;
}

//CONTINUAÇÃO NO CLASSROOM
