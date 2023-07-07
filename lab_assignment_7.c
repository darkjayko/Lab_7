#include <stdio.h>
#include <stdlib.h>

int array []={97,16,45,63,13,22,7,58,72};

void swap (int *first, int *second){
    int temp = *first;
    *first = *second;
    *second = temp;
}

void bubbleSort (int array[], int arraySize){
    int i,j;
    int swaps=0;
    for (i=0; i <arraySize-1; i++){
        ;
        for (j=0; j<arraySize-i-1;j++){
            if(array[j]>array[j+1]){
                swap (&array[j],&array[j+1]);
                swaps ++;
            }


        }
        printf("run #%d \n", i+1);
        printf ("%d swaps \n\n", swaps);
        swaps = 0;
    }
}
void printArray(int array[], int size){
    int i;
    for (i=0; i < size; i++)
    printf("%d ", array[i]);
    printf("/n");
}

int main()
{
    int arraySize=9;
    bubbleSort(array, arraySize);
    printf("Sorted array: \n");
    printArray(array, arraySize);
    return 0;
}