#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int array[], const int SIZE) {
    for(int i = 0; i < SIZE - 1; i++) {
        for(int j = 0; j < SIZE - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(int array[], const int SIZE) {
    for(int i = 1; i < SIZE; i++) {
        int temp = array[i];
        int j = i - 1;

        while(j >= 0 && array[j] > temp) {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = temp;
    }
}

int main() {
    const int SIZE = 5;
    const int MAX_VALUE = 100 + 1;
    
    srand(time(0));
    int array[SIZE];

    for(int i = 0; i < SIZE; i++) {
        int value = (rand() % MAX_VALUE);
        array[i] = value;
    }

    printf("Original Array:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }

    bubble_sort(array, SIZE);
    printf("\n");

    printf("Bubble Sorted Array:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }
    
    insertion_sort(array, SIZE);
    printf("\n");

    printf("Insertion Sorted Array:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
