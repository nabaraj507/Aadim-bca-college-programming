//WAP that demonstrates the use of the continue statement in a loop.
#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5)
            continue;
        printf("%d ", i);
    }
    return 0;
}
