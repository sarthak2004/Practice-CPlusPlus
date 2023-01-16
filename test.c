#include<stdio.h>

void fx(char* arr, int j, char* arr2) {
    int x = 0;
    for (int i = j-1; i >= 0; i--) {
        arr2[x] = arr[i];
        x++;
    }
}

int main() {
    char arr[100], arr2[100];
    gets(arr);
    int j = 0;
    while (arr[j] != '\0') {
        j++;
    }
    fx(arr, j, arr2);
    for (int i = 0; i < j; i++) {
        printf("%c", arr2[i]);
    }
    return 0;
}