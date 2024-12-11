#include <stdio.h>
#include <ctype.h>

int main() {
    char chuoi[] = "Hello World 123!";
    int dem = 0;
    int i = 0;

    while (chuoi[i] != '\0') {
        if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
            dem++;
        }
        i++;
    }

    printf("So ky tu la chu cai trong chuoi: %d\n", dem);

    return 0;
}

