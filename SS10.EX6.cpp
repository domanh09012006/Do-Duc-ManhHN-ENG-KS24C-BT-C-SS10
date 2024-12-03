#include <stdio.h>

int main() {
    int array[] = {3,4,6,8,5,3,3,8,9,0,5,4,3,2};
    int size = sizeof(array) / sizeof(array[0]);
    int number;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &number);
    
    int positions[size];
    int find = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            positions[find] = i;
            find++;
        }
    }
    if (find > 0) {
        printf("Phan tu %d o cac vi tri: ", number);
        for (int i = 0; i < find; i++) {
            printf("%2d ", positions[i]);
        }
    } else {
        printf("Phan tu khong co trong mang\n", number);
    }
    
    return 0;
}

