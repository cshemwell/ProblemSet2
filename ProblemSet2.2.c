#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char const *argv[]) {

    double result, frequency;
    double midi = 60;
    int OGmidi= 60;

midi = midi - 69;
midi = midi / 12;
midi = -0.75;

result = pow(2, midi);
frequency = result * 440;


printf("Original MIDI note#: %d/n, Converted to frequency: %d/n", OGmidi, frequency);

return 0;
}
