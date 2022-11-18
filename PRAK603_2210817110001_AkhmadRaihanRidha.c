#include <stdio.h>
int main(){
    int baris1,baris2,i,num1[20],num2[20],hasil;
    scanf("%d",&baris1);
    scanf("%d",&baris2);

    if (baris1==baris2)
    {
        for ( i = 0; i < baris1; i++)
        {
            scanf("%d",&num1[i]);
        }
        for ( i = 0; i < baris2; i++)
        {
            scanf("%d",&num2[i]);
        }
        for ( i = 0; i < baris1; i++)
        {
            hasil=num1[i]*num2[i];
            printf("%d ",hasil);
        }
        
    }
    else
    {
        printf("Jumlah tidak sama");
    }
    










}