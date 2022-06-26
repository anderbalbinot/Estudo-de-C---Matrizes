#include <stdio.h>

//INSTRUÇÕES DO PROGRAMA:
/*Faça um algoritmo que leia uma matriz A 5x5 contendo
valores numéricos e gere e mostre uma matriz B 5x5 tal
que:
▫ B(i,j)=0, se A(i,j) é par
▫ B(i,j)=1, se A(i,j) é impar*/


int main(void){

    int A[5][5], B[5][5], linha, coluna;

    //USUÁRIO DIGITA VALORES PARA A MATRIZ 'A'
    for(linha=0;linha<=4;linha++){
        printf("\n");
        for(coluna=0;coluna<=4;coluna++){
            printf("\nDigite um numero para A[%d][%d]: ",linha,coluna);
            scanf("%d",&A[linha][coluna]);
        }
    }


    //formar a Matriz B
    for(linha=0;linha<=4;linha++){
        for(coluna=0;coluna<=4;coluna++){
            if(A[linha][coluna]%2==0){
                B[linha][coluna]=0;
            }
            if(A[linha][coluna]%2==1){
                B[linha][coluna]=1;
            }
        }
    }

    //RESULTADO
    printf("\n");
    printf("\n\nMatriz B formada a partir da Matriz A: \n");
    printf("\n");
    
    for(linha=0;linha<=4;linha++){

        for(coluna=0;coluna<=4;coluna++){
            printf("%d ",B[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}