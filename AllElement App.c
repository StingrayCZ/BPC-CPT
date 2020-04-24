#include <stdio.h>
#include <stdlib.h>

int cislo, delitel, pocetelementu;


int main()
{

    while(1){
    pocetelementu = 1;
    cislo = 1;


    for(int j = 1; j < 50; j++)
    {

        printf("*");
    }


    printf("\nZadej modolus\n");
    scanf("%d", &delitel);


    printf("\n\rElementy jsou\n\r");

    for(int i = 1; i < (delitel + 1); i++)
    {

        SuperEuler();
        cislo ++;

    }

    pocetelementu = pocetelementu - 1;

    printf("\n");
    printf("\n\rPocet elementu je: %d\n\r", pocetelementu);
    }


    return 0;
}


int SuperEuler()
{



    int mod=2;
    int i = 1;

    while(mod >= 2)
    {

        mod = (cislo * i)%delitel;
        i++;
    }

    i = i - 1;


    if(mod == 0)
    {

        return 0;
    }
    else{

        printf("%d; ", cislo);

        pocetelementu++;

    }

}




