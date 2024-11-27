#include <stdio.h>

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap so nguyen thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Mang vua nhap la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            printf("Mang vua nhap so %d la so chan.\n", a[i]);
        } else {
            printf("Mang vua nhap so %d khong la so chan.\n", a[i]);
        }
    }
    return 0;
}

