#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int x){
    if (top == MAX -1){
        printf("stack overflow");
    }else{
        top=top+1;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("underflow");
    }else{
        printf("Deleted element is %d",stack[top]);
        top=top-1;
    }
}
int main(){
    push(10);
    push(20);
    push(30);

    pop(30);
    pop(20);

    return 0;
}