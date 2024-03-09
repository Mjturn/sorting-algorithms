#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* bubble_sort(int array[], const int SIZE) {
    for(int i = 0; i < SIZE - 1; i++) {
        for(int j = 0; j < SIZE - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    return array;
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

    bubble_sort(array, 5);
    printf("\n");

    printf("Bubble Sorted Array:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
