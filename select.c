#include <stdio.h>
#include <stdlib.h>

void sort(int list[], int x){
  int i, j, min, temp;
  for(i=0; i< x-1; i++){
    min = i;
    for(j = i+1; j<x; j++){
      if(list[j] < list[i]){
        min = j;
        temp = list[i];
        list[i] = list[min];
        list[min] = temp;
      }
    }
  }
}

void main(){
  int i, n;
  int list[101];
  printf("array size");
  scanf("%d", &n);

  for(i=0; i<n; i++){
    list[i] = rand() % 100;
    printf("%d ", list[i]);
  }
    printf("\n");

  sort(list, n);

  for(i=0; i<n; i++){
    printf("%d ", list[i]);
  }
    printf("\n");

}
