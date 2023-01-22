#include<stdio.h>
#include<string.h>

int main() {
    char line[100];
    gets(line);
    int i = 0;
    while ( line[i] != '\n') {
        printf("%c", line[i]);
        i++;
    }
    return 0;
}

