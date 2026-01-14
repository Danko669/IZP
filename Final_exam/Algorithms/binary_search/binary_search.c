#include <stdio.h>

int binary_search(int *arr,int n, int key){
    int low = 0, high = n - 1; // rozsah vyhledavani, postupne se zmensuje
    while(low <=high){
        int mid = (low + high) / 2;
        if(arr[mid] == key)
            return mid;
        else if (arr[mid]<key)
            low = mid +1;
        else
            high = mid -1;        
    }
    return -1;
}

int main() {

    int arr[] = {0,1,2,3,4};
    
    int delka = 5;

    int key = 4;

    int searched = binary_search(arr, delka, key);

    printf("%d", searched);
    return 0;
}
