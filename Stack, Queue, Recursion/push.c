#include <stdio.h>
int stack[50] = {4, 5, 6, 2, 1};
int top = 4;
int maxstk = 50;

int push(int item);

int main()
{
    int item;
    printf("Enter the item to be inserted:");
    scanf("%d", &item);
    push(item);

    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}

int push(int item)
{
    if (top == maxstk)
    {
        printf("Overflow");
        return -1;
    }

    top = top + 1;
    stack[top] = item;
}