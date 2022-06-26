#include <stdio.h>

/*Escrever um algoritmo para ler uma matriz M(2,2)
contendo valores numéricos (supor que os valores são
distintos). Após, calcular e mostrar a matriz R, resultante
da multiplicação dos elementos de M pelo seu maior
elemento.*/


int main(void){

    int m[2][2], r[2][2], maior_elemento, linha, coluna;

    //USUÁRIO DIGITA VALORES PARA A MATRIZ 'm'
    for(linha=0;linha<=1;linha++){
        printf("\n");
        for(coluna=0;coluna<=1;coluna++){
            printf("\nDigite um numero para m1[%d][%d]: ",linha,coluna);
            scanf("%d",&m[linha][coluna]);
        }
    }

    //Encontrar maior elemento de 'm'
    maior_elemento=m[0][0];
    for(linha=0;linha<=1;linha++){
        for(coluna=0;coluna<=1;coluna++){
            if(m[linha][coluna]>=maior_elemento){
                maior_elemento=m[linha][coluna];
            }
        }
    }

    //OS ELEMENTOS DA MATRIZ 'm' são multiplicados pelo maior elemento
    for(linha=0;linha<=1;linha++){
        for(coluna=0;coluna<=1;coluna++){
            r[linha][coluna] = (m[linha][coluna]*maior_elemento);
        }
    }

    //IMPRIME ELEMENTOS DEPOIS DA MULTIPLICAÇÃO POR 2
    printf("\n");
    printf("Matriz r: ");
    printf("\n");
    
    for(linha=0;linha<=1;linha++){

        for(coluna=0;coluna<=1;coluna++){
            printf("%d ",r[linha][coluna]);
        }
        printf("\n");
    }


    return 0;
}