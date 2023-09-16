#include <stdio.h>
#include <string.h>

void Sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array[] = {9, 8, 7, 5, 1, 4, 6, 8, 10, 15, 100, 1};
    int size = sizeof(array) / sizeof(array[0]);

    Sort(array, size);
    printArray(array, size);

    return 0;
}
