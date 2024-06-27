#include<stdio.h>
int fun(int n, int *arr);
int fun2(int n, int *arr);

int main() {

    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements in array\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Maximum element: %d\n", fun(size, arr));
    printf("Minimum element: %d\n", fun2(size, arr));
    return 0;
}

int fun(int n, int *arr) {
    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int fun2(int n, int *arr) {
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
