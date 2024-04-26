#include <stdio.h>

void swap(int *array, int n);

int main() {
    int array[7], n, i;
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    swap(array, n);
    return 0;
}

void swap(int *array, int n) {
    int i, temp, j;
    for (i = 0; i < (n - 1); i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("After sorting the array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}
