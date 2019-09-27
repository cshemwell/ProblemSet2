#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

    int c, C;
    bool result;

    c = 63;
    C = 43;

    result = c > C;

    printf("c letter is lowercase: %d/n, c letter is uppercase: %d/n", result, result);
}
