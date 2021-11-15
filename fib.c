#include <stdio.h>

int fibonacci(int n){
    if(n<2){
        return n;
    }
    else {
        return (fibonacci(n-2) + fibonacci(n-1));
    }
}

int main(){
    int res = fibonacci(4);
    printf("%d \n", res);
    return 0;
}
