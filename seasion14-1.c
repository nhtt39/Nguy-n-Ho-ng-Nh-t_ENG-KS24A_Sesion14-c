#include <stdio.h>

int main() {
    char chuoi[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    fflush(stdin);

    printf("Chuoi ban vua nhap la: %s\n", chuoi);
    printf("Do dai cua chuoi la: %d\n", strlen(chuoi));

    return 0;
}

