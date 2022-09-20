#include <stdio.h>
int stack[50] = {4, 5, 6, 2, 1};
int top = 4;

int pop();

int main()
{
    printf("Top element is removed\n");

    pop();

    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}

int pop()
{
    if (top == 0)
    {
        printf("Underflow");
        return -1;
    }

    top = top - 1;
}