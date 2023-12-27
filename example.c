#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int paraAt();

    int i, atisSonucu;
    int yazi = 0;
    int tura = 0;
    int toplamAtis = 100;

int main() {
    srand(time(NULL));

    for (i = 0; i < toplamAtis; i++) {
        atisSonucu = paraAt();

        if (atisSonucu == 0) {
            printf("Yazi ");
            yazi++;
        } else {
            printf("Tura ");
            tura++;
        }
    }

    printf("\nToplam Atis Sayisi: %d\n", toplamAtis);
    printf("\nYazi Sayisi: %d\n", yazi);
    printf("\nTura Sayisi: %d\n", tura);

    return 0;
}

int paraAt() {
    return rand() % 2;
}
