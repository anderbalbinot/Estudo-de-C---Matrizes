#include <stdio.h>

/*Faça um algoritmo que leia duas matrizes 3x5 contendo
valores numéricos e calcule a multiplicação destas
matrizes, ou seja, a multiplicação de cada elemento da
primeira matriz com o elemento de mesma posição da
segunda matriz. Armazene o resultado em uma nova
matriz*/


int main(void){

    int m1[3][5], m2[3][5], m3[3][5], linha, coluna;

    //USUÁRIO DIGITA VALORES PARA A MATRIZ 1
    for(linha=0;linha<=2;linha++){
        printf("\n");
        for(coluna=0;coluna<=4;coluna++){
            printf("\nDigite um numero para m1[%d][%d]: ",linha,coluna);
            scanf("%d",&m1[linha][coluna]);
        }
    }

    //USUÁRIO DIGITA VALORES PARA A MATRIZ 2
    for(linha=0;linha<=2;linha++){
        printf("\n");
        for(coluna=0;coluna<=4;coluna++){
            printf("\nDigite um numero para m1[%d][%d]: ",linha,coluna);
            scanf("%d",&m2[linha][coluna]);
        }
    }

    //multiplicação da m1 pelos elementos da m
    for(linha=0;linha<=2;linha++){
        for(coluna=0;coluna<=4;coluna++){
            m3[linha][coluna] = (m1[linha][coluna]*m2[linha][coluna]);
        }
    }

    //IMPRIME ELEMENTOS DEPOIS DA MULTIPLICAÇÃO POR 2
    printf("\n");
    printf("Matriz m3:");
    printf("\n");
    
    for(linha=0;linha<=2;linha++){

        for(coluna=0;coluna<=4;coluna++){
            printf("%d ",m3[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}