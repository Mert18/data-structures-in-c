#include <stdio.h>

int top = -1;
char mystack[100]; 


void Push(char c){
    if(top == 99){
        printf("Stack is full. \n");
    }else {
        mystack[++top] = c;
    }
}

void Pop(){
    if(top == -1){
        printf("Stack is empty. \n");
    }else{
        top--;
    }
}

int main(){
    char exp[] = "[[{()()}[]]{[]}()[]]";
    for(int i=0; i<sizeof exp-1; i++){
        Push(exp[i]);
        if(mystack[top] == ')' && mystack[top - 1] == '('){
            Pop();
            Pop();
        }else if(mystack[top] == '}' && mystack[top -1] == '{'){
            Pop();
            Pop();
        }else if(mystack[top] == ']' && mystack[top -1] == '[' ){
            Pop();
            Pop();
        }
    }

    if(top == -1){
        printf("Parantheses are balanced perfectly.");
    }else {
        printf("Paranthese are not balanced. \n");
    }

    return 0;
}
