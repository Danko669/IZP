#include <stdio.h>

int linear_search(char *arr, int n, int key){

    for(int i=0; i < n; i++){
        if(arr[i]==key)
        return i;
        //pokud mam serazene pole tak delam tento else if
        else if(arr[i]>key)
        break;
    }
    return -1;
}

int main() {

    char arr[] = {0,1,2,3,4};
    
    int delka = 5;

    int key = 1;

    int searched = linear_search(arr, delka, key);

    printf("%d", searched);
    return 0;
}
