// contratou 6 funcionarios temporarios
//mostre nome, telefone e venda realizada de cada um deles
//no final mostre o nome de todos os funcionarios que venderam mais de 100 reais e o nome e telefone do funcionario que realizou a maior venda

#include <stdio.h>

struct Func{
    //char *nome, *telefone;
    //float *venda; POONTEIRO
    char nome[20], telefone[18];
    int venda; //FORMA ESTATICA
    
}

int main() {
    struct Func func[6];
    int posMaior;
    float maiorVenda;

    for(int i==0;i<6;i++){
      printf("[%d]Informe o nome:", i);
      scanf("%s", &func[i].nome);
      
      printf("Informe o telefone:);
      scanf("%s", &func[i].telefone);
      
      printf("Informe o valor da venda:");
      scanf("%f", &func[i].venda);
    }

  maiorVenda = func[0].venda;
  posMaior = 0;

  printf("Pessoas que venderam acima de 100:");
  for(int i=0;i<6;i++){
    if(func[i].venda>100){
      printf("Nome[%d] = %s \n", i, func[i].nome);
    }

    if(func[i].venda>maiorVenda){
      maiorVenda = func[i].venda;
      posMaior = i;
    }
  }

  printf("Nome da maior venda: ", func[posMaior].nome);
  printf("Telefone da maior venda: ", func[posMaior].telefone);

    return 0;
}
