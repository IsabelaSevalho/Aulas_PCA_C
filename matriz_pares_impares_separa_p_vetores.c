#include <stdio.h>

int main()
{
    int vet[4][4], contPares=0, contImpares=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            
            do{
                printf("Informe o valor de posicao[%d][%d]:", i, j);
                scanf("%d", &vet[i][j]);
            }while(vet[i][j]<0);
                        
            if((vet[i][j]%2)==0){
                ++contPares;
            }else{
                ++contImpares;
            }
        }
    }
    
    if(contPares>0){
        int vetA[contPares], iPares=0;
        
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if((vet[i][j]%2)==0){
                    vetA[iPares] = vet[i][j];
                    ++iPares;
                }
            }
        }
        printf("\n\nPARES:");
        for(int i=0;i<contPares;i++){
            printf("\nPar posicao %d: %d", i,vetA[i]);
        }
    }else{
        printf("\n\nNAO HA PARES:");
    }
    
    if(contImpares>0){
        int vetB[contImpares], iImpares=0;
        
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if((vet[i][j]%2)==1){
                    vetB[iImpares] = vet[i][j];
                    ++iImpares;
                }
            }
        }
        
        printf("\n\nIMPARES:");
        for(int i=0;i<contImpares;i++){
            printf("\nImpar posicao %d: %d", i,vetB[i]);
        }
    }else{
        printf("\n\nNAO HA IMPARES:");
    }
    

    return 0;
}
