#include <stdio.h>

int main() {
    char chuoi[] = "Hello World";
    char ki_tu; 
    int count = 0; 

    printf("Nhap vao mot ky tu: ");
    scanf("%c", &ki_tu);

    for(int i = 0; chuoi[i] != '\0'; i++) {
        if(chuoi[i] == ki_tu) {
            count++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ki_tu, count);

    return 0;
}

