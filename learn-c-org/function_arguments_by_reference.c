#include <stdio.h>

int add_one(int *p) {
    (*p)++;
}

int main() {
    int n = 3;
    int *p = &n;
    printf("n: %d\n", n);
    printf("p: %d", *p);
    add_one(&p);
    printf("New p: %d", *p);
    return 0;
}