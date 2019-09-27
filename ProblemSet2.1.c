#include <stdio.h>
#include <stdbool.h>

//I believe this int main function is the cause of my compiling not working, but I can't figure out a solution

int main(int argc, char const *argv[]) {

    int c, C, result2;
    bool result;

    c = 63;
    C = 43;

    result = c > C;
    result2 = (result -1) * -1;

    printf("c letter is lowercase: %d\n, c letter is uppercase: %d\n", result, result2);
    return 0;
    
}

