#include <stdio.h>

/*Escrever um algoritmo para ler uma matriz 7x4 contendo
valores numéricos (supor que os valores são distintos).
Após, encontrar o menor valor contido na matriz e sua
posição*/


int main(void){

    int m1[7][4], menor_valor, linha_menor_valor, coluna_menor_valor, linha, coluna;

    //USUÁRIO DIGITA VALORES PARA A MATRIZ 1
    for(linha=0;linha<=6;linha++){
        printf("\n");
        for(coluna=0;coluna<=3;coluna++){
            printf("\nDigite um numero para m1[%d][%d]: ",linha,coluna);
            scanf("%d",&m1[linha][coluna]);
        }
    }

    //Encontrar menor valor de m1
    menor_valor=m1[0][0];
    for(linha=0;linha<=6;linha++){
        for(coluna=0;coluna<=3;coluna++){
            if(m1[linha][coluna]<=menor_valor){
                menor_valor=m1[linha][coluna];
                linha_menor_valor=linha;
                coluna_menor_valor=coluna;
            }
        }
    }

    //resultado
    printf("\n\n************RESULTADO:");
    printf("\nO menor valor da Matriz m1 e' %d e esta' localizado na linha %d e coluna %d da matriz m1.", menor_valor, linha_menor_valor, coluna_menor_valor);
    printf("\n\n");
    
    return 0;
}