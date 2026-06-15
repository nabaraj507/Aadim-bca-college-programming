#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x,y;
    printf("enter the value of x : ");
    scanf("%d",&x);
    printf("enter the value of y: ");
    scanf("%d",&y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
