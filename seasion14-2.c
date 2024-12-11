#include <stdio.h>

int main() {
    char chuoi[] = "Hello World";
	int size=strlen(chuoi);
    for(int i = 0; i<size; i++) {
        printf("%c ", chuoi[i]);
    }

    return 0;
}

