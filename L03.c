#include <stdio.h>

void Castling(int n){
     while (n > 10){
        n--;
    }
    int arr [10] = {10, 22, 11, 31, 2, 3, 7, 8, 9, 121};
    for (int i = 0; i <= n-1; i++){
        int c, b;
        c = arr[i];
        b = arr[10-i-1];
        arr[i] = b;
        arr[10-i-1] = c;
    }
    for (int i = 0; i <= 10-1; i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    int i;
    printf("Vvedite chislo perestanovok:");
    scanf("%d", &i);
    Castling(i);
}
