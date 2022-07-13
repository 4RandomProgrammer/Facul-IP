#include <stdio.h>
#include <math.h>

int main() {
    int CLOWNS, RABBITS, WAITERS, FISHES = 0;

    scanf("%d%d", &CLOWNS, &RABBITS);

    if (CLOWNS % 2)
        CLOWNS++;
    CLOWNS /= 2;

    for (WAITERS = 1; WAITERS <= CLOWNS; WAITERS *= 2) {
        FISHES += WAITERS + RABBITS;
        printf("%d\n", FISHES);
    }

    printf("%0.f\n", sqrt(WAITERS));

    return 0;
}