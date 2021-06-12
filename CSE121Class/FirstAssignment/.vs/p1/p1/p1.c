#include <stdio.h>

int test(int num) {
    num * 2;
    return num;
}

int main(void) {
    int a, b, c;
    a = 9;
    b = 20;
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);
    printf("That was easy!\n");
    b = test(15);
    printf("%i", b);
    return 0;
}