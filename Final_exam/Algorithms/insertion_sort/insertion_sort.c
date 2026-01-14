#include <stdio.h>

void insertion_sort(int *arr, int count){
    for(int i=1;i<count; i++)
    {
        int key = arr[i]; //klicovy oprvek
        int j = i-1;


        //posouvej prvky vetsi nez key doprava
        while (j >= 0 && arr[j] > key)

        {
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j+1] = key; //vlozit prvek n spravne misto
    }
}

int main() {

    int arr[] = {2,1,4,5,3};
    
    int delka = 5;

    int key = 1;

    insertion_sort(arr, delka);

    for(int i = 0; i < delka; i++)
        printf("%d%c", arr[i], (i+1==delka) ? '\n' : ' ');

    return 0;
}