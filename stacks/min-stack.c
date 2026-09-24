#include <stdio.h>
#include <limits.h>

#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} MinStack;

void init(MinStack *stack) {
    stack->top = -1;
}

void push(MinStack *stack, int value) {
    if (stack->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }

    stack->data[++stack->top] = value;
}

void pop(MinStack *stack) {
    if (stack->top == -1) {
        printf("Stack is empty\n");
        return;
    }

    stack->top--;
}

int top(MinStack *stack) {
    if (stack->top == -1) {
        return -1;
    }

    return stack->data[stack->top];
}

int getMin(MinStack *stack) {
    if (stack->top == -1) {
        return -1;
    }

    int min = INT_MAX;

    for (int i = 0; i <= stack->top; i++) {
        if (stack->data[i] < min) {
            min = stack->data[i];
        }
    }

    return min;
}

int main() {
    MinStack stack;

    init(&stack);

    push(&stack, -2);
push(&stack, 0);
push(&stack, -3);

    printf("Minimum: %d\n", getMin(&stack));

    pop(&stack);

    printf("Top: %d\n", top(&stack));
    printf("Minimum: %d\n", getMin(&stack));

    return 0;
}