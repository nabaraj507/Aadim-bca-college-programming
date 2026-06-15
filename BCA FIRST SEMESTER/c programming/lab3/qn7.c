//WAP that demonstrates the use of the break statement in a loop.
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 6)
            break;
        printf("%d ", i);
    }
    return 0;
}

    