#include <stdio.h>

void Castling(int n, int* p) {
    while (n > 10) {
        n--;
    }
    for (int i = 0; i <= n - 1; i++) {
        int c, b;
        c = p[i];
        b = p[10 - i - 1];
        p[i] = b;
        p[10 - i - 1] = c;
    }
    for (int i = 0; i <= 10 - 1; i++) {
        printf("%d\n", p[i]);
    }
}

int main(void) {
    int arr[] = { 10, 22, 11, 31, 2, 3, 7, 8, 9, 121 };
    int i;
    printf("Vvedite chislo perestanovok:");
    scanf("%d", &i);
    Castling(i, arr);
}
