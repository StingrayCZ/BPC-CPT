#include <stdio.h>
#include <stdlib.h>

int cislo, vysledek, mod;


int main()
{
    mod = 1;

    while(1)
    {

        Delitele();

    }

}





int Delitele()
{
    printf("\n");
    for(int i = 1 ; i < 50; i++)
    {
        printf("*");
    }
    printf("\nZadej cislo:\n");
    scanf("%d", &cislo);

    printf("Delitele cisla jsou: ");

    for(int i = 1; i < cislo; i++)
    {
        vysledek = cislo % mod;

        if(vysledek == 0)
        {

            printf("%d ,", mod);

        }

        mod++;
    }

    mod = 1;

}
