#include <stdio.h>

//Faça um algoritmo que leia uma matriz 3x5 contendo
//valores numéricos e calcule e mostre em uma nova
//matriz a multiplicação de todos os elementos desta
//matriz por 2


int main(void){

    int m1[3][5], m2[3][5], linha, coluna;

    //USUÁRIO DIGITA VALORES PARA A MATRIZ
    for(linha=0;linha<=2;linha++){
        printf("\n");
        for(coluna=0;coluna<=4;coluna++){
            printf("\nDigite um numero para m1[%d][%d]: ",linha,coluna);
            scanf("%d",&m1[linha][coluna]);
        }
    }

    //OS ELEMENTOS DA MATRIZ SÃO MULTIPLICADOS POR 2
    for(linha=0;linha<=2;linha++){
        for(coluna=0;coluna<=4;coluna++){
            m2[linha][coluna] = (m1[linha][coluna]*2);
        }
    }

    //IMPRIME ELEMENTOS DEPOIS DA MULTIPLICAÇÃO POR 2
    for(linha=0;linha<=2;linha++){
        printf("\n");
        for(coluna=0;coluna<=4;coluna++){
            printf("\nValor de m2[%d][%d]: %d",linha,coluna,m2[linha][coluna]);
        }
    }
    return 0;
}