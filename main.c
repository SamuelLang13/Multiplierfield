#include <stdio.h>
#include<math.h>


int main(void) 
{
    int range;
    int numOfDigits;
    //int finalNumber;
    //int whiteSpace;
    char pipe='|';
    char plus='+';
    printf("Rozsah:\n");
    if(scanf("%d",&range)!=1 || range<=0)
    {
        printf("Nespravny vstup.\n");
        return 0;
    }

    numOfDigits=log10(range*range)+1;
    
    //finalNumber=();

    //X axis legend
    for (int i = range+1; i >=1; i--)
    {
        if(i==range+1)
        {
            printf("%*c",numOfDigits+1,pipe);
        }
        else
        {
            printf("%*d",numOfDigits+1,i);

        }
        

        
    }
    printf("\n");
    //Minus axis legend
    for (int i = 0; i < numOfDigits; i++)
    {
        printf("-");
    }
    
    printf("%c",plus);

    for (int i = 1; i <= range*(numOfDigits+1); i++)
    {
        
        printf("-");
    }
    printf("\n");

    //Y axis legend
    for (int i = 1; i <= range; i++)
    {
        printf("%*d|",numOfDigits,i);
        for (int j = range; j >= i; j--)
        {   
            printf(" %*d",numOfDigits,i*j);
        
        }
        printf("\n");
        
    }

    
    return 0;
}