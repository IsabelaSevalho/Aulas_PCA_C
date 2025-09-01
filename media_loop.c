#include <stdio.h>

int main()
{
    float media;
    int numeros, qntd_num=0;

    do{
        printf("Digite um numero: ");
        scanf("%d", &numeros);
        media +=numeros;
        ++qntd_num;

    }while(numeros!=0);

    if(media==0){
        printf("Vc nao digitou numeros validos para a media!!\n");
    }else{
        media/=(qntd_num-1);
        printf("Sua media eh: %f", media);
    }

    return 0;
}
