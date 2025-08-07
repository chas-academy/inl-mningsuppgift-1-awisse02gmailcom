#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    int kast[100];
    int antal[6] = {0}; // antal för 1-6
    int summa = 0;
    float medel;

    // slumpa 100 tärningskast och lagra i array
    for (int i = 0; i < 100; i++ ){
        kast[i] = (rand() % 6) + 1;
        antal[kast[i] - 1]++;
        summa += kast[i];
    }
    
    //skriv antal för varje tärningsvärde 1-6
    for (int i = 0; i < 6; i++) {
        printf("%d\n", antal[i]);
    }

    //skriv summan av alla kast
    printf("%d\n", summa);

    //beräkna och skriva medelvärdet med 1 decimal
    medel = (float)summa / 100;
    printf("%.1f\n", medel);

    return 0;
}
