#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    int BPM = 120;
    int BPS, mili;

BPS = BPM / 60;
mili = BPS * 1000;

printf("BPM: %d/n, BPM in milliseconds: %d/n", BPM, mili);

return 0;
}
