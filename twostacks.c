#include <stdio.h>
#define SIZE 10

int top1 = -1;
int top2 = -1;
int firstArray[SIZE];
int secondArray[SIZE];

void push_stack1(int data){
    if(top1 > SIZE){
        printf("Stack1 is full.");
    }
    else {
        firstArray[++top1] = data;
    }
}

void push_stack2(int data){
    if(top2 > SIZE){
        printf("Stack2 is full.");
    }
    else {
        secondArray[++top2] = data;
    }
}

void pop_stack1(){
    if(top1 == -1){
        printf("Stack1 is empty. Cannot pop.");
    }else{
        firstArray[top1--];
    }
}

void pop_stack2(){
    if(top2 == -1){
        printf("Stack2 is empty. Cannot pop");
    }else{
        secondArray[top2--];
    }
}

void print_stack1(){
    int i;
    for(i = top1; i>=0; i--){
        printf("%d ", firstArray[i]);
    }
    printf("\n");
}

void print_stack2(){
    int i;
    for(i = top2; i>=0; i--){
        printf("%d ", secondArray[i]);
    }
    printf("\n");
}

int main(){
    int firstArray[SIZE];
    int secondArray[SIZE];
    int i;


    for(i = 1; i<=6; i++){
        push_stack1(i);
    }
    for(i = 8; i<=15; i++){
        push_stack2(i);
    }

    printf("Stack 1 is currently: ");
    print_stack1();
    printf("\n");
    printf("Stack 2 is currently: ");
    print_stack2();
    printf("\n");

    push_stack1(23);
    printf("Stack 1 is currently: ");
    print_stack1();
    printf("\n");

    push_stack2(23);
    printf("Stack 2 is currently: ");
    print_stack2();
    printf("\n");
    
    return 0;
}
