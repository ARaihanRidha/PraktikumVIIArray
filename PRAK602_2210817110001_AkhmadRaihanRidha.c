#include <stdio.h>
int main(){
    int baris,i,isi;
    scanf("%d",&baris);
    int Angka[baris];
    for ( i = 0; i < baris; i++){
        scanf("%d",&isi);
        Angka[i]=isi;
    }
    for ( i = 0; i < baris; i++){
        
        printf("%d ", Angka[i]* (i + 1));
        
    }
        
        
        
    
    
}