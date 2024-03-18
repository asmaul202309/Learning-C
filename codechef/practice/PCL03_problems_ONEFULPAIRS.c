#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b + (a * b);
    if (sum == 111) {
        printf("yes\n"); 
    } else {
        printf("no\n"); 
    }

    return 0;
}
