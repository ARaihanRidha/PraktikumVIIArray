  #include <stdio.h>
#include <string.h>
int main(){
    char shikamaru1[20],shikamaru2[20];
    int panjang1,panjang2,i,A,B;
    A=0;
    B=0;

    scanf(" %[^\n]%*c", &shikamaru1);
    scanf(" %[^\n]%*c", &shikamaru2);

    panjang1=strlen(shikamaru1);

    panjang2=strlen(shikamaru2);

    if(panjang1!=panjang2)
    {
        printf("Panjang kalimat berbeda, pesan palsu");
        
    }
    else
    {
        for ( i = 0; i < panjang1; i++)
        {
            if (shikamaru1[i] == ' ' && shikamaru2[i] == ' ')
            {
                continue;
            }




            else if(shikamaru1[i] == shikamaru2[i])
            {
                printf("*");
                A++;
                
            }
            else
            {
                printf("#");
                B++;
            
            }
            
        }
        printf("\n* = %d",A);
        printf("\n# = %d\n",B);
        if (A >= B)
        {
            printf("Pesan Asli");
        }
        else
        {
            printf("Pesan Palsu");
        }
    }
    
