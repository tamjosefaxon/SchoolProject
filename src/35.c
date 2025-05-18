#include <stdio.h>

int main() {
    int i = 0;
    do {
        if (i % 2 == 0) break;
        printf("Processing %d\n", i);
        ++i;
    } while (i < 15);

    return 0;
}
