#include <stdio.h>

void selection_sort(int *arr, int count){
    for (int i = 0; i < count - 1; i++)
    {
        int min_idx = i;
        for(int j = i + 1; j < count; j++)
        {
            if(arr[j] < arr[min_idx])
            min_idx = j;
        }
        int tmp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = tmp;
    }
}

int main() {

    int arr[] = {2,1,4,5,3};
    
    int delka = 5;

    int key = 1;

    selection_sort(arr, delka);

    for(int i = 0; i < delka; i++)
        printf("%d%c", arr[i], (i+1==delka) ? '\n' : ' ');

    return 0;
}