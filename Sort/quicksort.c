#include<stdio.h>

void printsort(int arr[], int size);
void quicksort(int l, int h, int arr[]);
int partition(int l, int h, int arr[]);
void swap(int *a, int *b);

int main() {
    int arr[] = {10, 16, 8, 12, 15, 6, 3, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int h = size - 1; // Set h to size - 1

    printf("The original array is: ");
    printsort(arr, size);

    quicksort(l, h, arr);

    printf("The final sorted array is: ");
    printsort(arr, size);

    return 0;
}

int partition(int l, int h, int arr[]) {
    int pivot = arr[l];
    int i = l;
    int j = h;

    while (i <= j) { // Use i <= j instead of i < j
        while (arr[i] <= pivot && i <= h) {
            i++;
        }
        while (arr[j] > pivot && j >= l) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[l], &arr[j]);

    return j;
}

void quicksort(int l, int h, int arr[]) {
    if (l < h) {
        int j = partition(l, h, arr);
        quicksort(l, j - 1, arr); // Use j - 1 instead of j
        quicksort(j + 1, h, arr);
    }
}

void printsort(int arr[], int size) {
    for (int m = 0; m < size; m++) {
        printf("%d, ", arr[m]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}
