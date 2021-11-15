#include <stdio.h>

void printStars(int n){
  if(n == 1){
    printf("* \n");
  }else{
    printf("*");
    printStars(n - 1);
  }
}

int main(){
  printStars(5);

  return 0;
}
