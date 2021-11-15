#include <stdio.h>

int powe(int base, int exponent){
    if(exponent == 0){
        return 1;
    }else if(exponent % 2 == 0){
        return powe(base * base, exponent / 2);
    }else {
        return base * powe(base, exponent - 1);
    }
}

int main(){
    int result = 0;
    result = powe(3, 3);
    
    printf("Result: %d", result);
    printf("\n");
    return 0;
}
