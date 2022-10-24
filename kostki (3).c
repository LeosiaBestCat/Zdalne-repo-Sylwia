#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int wartosc = 0;
    int wyniki[12];
    int trafione = 0;

    srand(time(NULL));
    printf("dla jakiej wartosci obliczamy prawdopodobienstwo? (1-6): ");

    while (wartosc < 1 || wartosc > 6) {
        scanf("%d", &wartosc);
    }

    for (int i=0; i<12; i++) {
        wyniki[i] = (rand()%6) + 1;
        printf("%d ", wyniki[i]);
        if (wyniki[i] == wartosc) {
            trafione++;
        }
    }
    printf("\n");

    printf("trafione: %d/12 razy\n", trafione);
    printf("WYNIK: %d%%\n", (trafione*100/12 ));    
    return 0;
}