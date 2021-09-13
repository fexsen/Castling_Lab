#include <stdio.h>

void Castling(int n){
    const int L = 10;
    int arr [L] = {10, 22, 11, 31, 2, 3, 7, 8, 9, 121};
    for (int i = 0; i <= n-1; i++){
        int c, b;
        c = arr[i];
        b = arr[L-i-1];
        arr[i] = b;
        arr[L-i-1] = c;
    }
    for (int i = 0; i <= L-1; i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    Castling(3);
}