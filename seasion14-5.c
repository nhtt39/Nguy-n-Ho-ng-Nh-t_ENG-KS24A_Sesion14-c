#include <stdio.h>

int main() {
    char chuoi[] = "hello world";
    int dem = 0;
    int i = 0;
    int in_word = 0;

    while (chuoi[i] != '\0') {
        if (chuoi[i] != ' ' && !in_word) {
            dem++; 
            in_word = 1;
        }
        else if (chuoi[i] == ' ') {
            in_word = 0;
        }
        i++;
    }

    printf("So tu trong chuoi: %d\n", dem);

    return 0;
}

