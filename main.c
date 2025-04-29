#include <stdio.h>

int main() {
    system("chcp 65001");
    int array[] = {15, 10, -7, -5, 9, 0, 8};
    int n = sizeof(array) / sizeof(array[0]);
    int *ptr = array;
    int *min_ptr = ptr;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) < *min_ptr) {
            min_ptr = ptr + i;
        }
    }
    printf("Мінімальний елемент: %d\n", *min_ptr);
    printf("Індекс мінімального елемента: %ld\n", min_ptr - array);
    return 0;
}