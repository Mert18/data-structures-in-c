#include <stdio.h>
#define N 20

void mergesort(int a[], int i, int j);
void merge(int a[], int i1, int j1, int i2, int j2);

int main(){
    int n, i;
    int a[N] = {1,5,4,3,83,23,32,754,95,34,12,64,83,65,94,87,64,53,21,16};

    mergesort(a, 0, N -1);

    for(int f=0; f<N; f++){
        printf("%d ", a[f]);
    }
    printf("\n");
    return 0;
}

void mergesort(int a[], int i, int j){
    int mid;
    if(i<j){
        mid = (i+j) / 2;
        mergesort(a, i, mid);
        mergesort(a, mid + 1, j);
        merge(a, i, mid, mid + 1, j);
    }
}

void merge(int a[], int i1, int j1, int i2, int j2){
    int temp[N*2]; // Array used for merging.
    int i, j, k;
    i = i1; // beginning of the first list.
    j = i2; // beginning of the second list.
    k = 0;

    while(i <= j1 && j <= j2){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }else{
            temp[k++] = a[j++];
        }


    }
    while(i <= j1){ // copy remaining elements of the first list.
        temp[k++] = a[i++];
    }
    while(j <= j2){
        temp[k++] = a[j++]; // copy remaining of the second list.
    }

    for(i = i1, j=0; i<=j2; i++, j++){
        a[i] = temp[j];
    }

}

