#include <stdio.h>

int main(){

    int x,i,j,k,matriksA[20][20],matriksB[20][20],hasil[20][20];
    
    scanf("%d", &x);
    printf("Matriks A\n");
    for ( i = 0; i < x; i++){
        for ( j = 0; j < x; j++){
    scanf("%d", &matriksA[i][j]);        
        }
    }

    printf("Matriks B\n");

    for ( i = 0; i < x; i++){
        for ( j = 0; j < x; j++){
    scanf("%d", &matriksB[i][j]);
        }
    }
    
    for ( i = 0; i < x; i++){
        for ( j = 0; j < x; j++){
            hasil[i][j] = 0;
            for (k = 0; k < x; k++){
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }
    printf("\nMatriks AXB\n");
    for ( i = 0; i < x; i++){
        for ( j = 0; j < x; j++){
            printf("%d ", hasil[i][j]);
        }
    printf("\n");    
    }
    
    





}