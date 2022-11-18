#include <stdio.h>
int main(){
    int j,Baris,i,kolom,Angka;
    scanf("%d  %d", &Baris, &kolom);
    int Matriks[20][20];
    
    for ( i = 0; i < Baris; i++){
        for ( j = 0; j < kolom; j++){
     scanf("%d", &Matriks[i][j]);
            
        }
        
    }
    for ( i = 0; i < Baris; i++){
        for ( j = 0; j < kolom; j++){
            printf("%d ", Matriks[i][j]);
        }
    printf("\n");    
    }
    

}