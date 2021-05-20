#include <stdio.h>
#define MAX_SIZE 10
/*
*This is a basic implementation of Stack data structures in C
*Uses Data oriented programming
*Just creating stack in fixed size
*No dynamically allocated
*/
int push(char* stack, int top, char element);
int pop(char* stack, int top);
int isEmpty(char* stack, int top);
int isFull(char* stack, int top);
int peek(char* stack, int top);

int main(){
    char stack[10];
    int top = -1;
    // For demonstartion we use string array to manipulated data

    char input[10] = {"Hello cat!"};
    int sizeInput = 10;
    //Using push function
    for(int i = 0; i < sizeInput; i++){
        top = push(stack, top, input[i]);
    }

    //Pop all the element in the stack
    while(!isEmpty(stack, top)){
        top = pop(stack, top);
    }
    return 0;
}


int push(char* stack, int top, char element){
    if(top < MAX_SIZE - 1){
        top += 1;
        stack[top] = element;
    }else{
        printf("Cannot push to the stack: memory exceeded.");
    }

    return top;
}

int pop(char* stack, int top){
    if(top > -1){
        char temp = stack[top];
        top = top - 1;
        printf("(%c) element is poped!\n", temp);
    }

    return top;
}

int isEmpty(char* stack, int top){
    return top <= -1;
}

int isFull(char* stack, int top){
    return top >= MAX_SIZE - 1;
}

int peek(char* stack, int top){
    return stack[top];
}
