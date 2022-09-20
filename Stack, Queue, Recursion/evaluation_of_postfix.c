#include <stdio.h>
#include <stdlib.h>
void push(int x);
int pop();
int s[25];
int size = 25;
int top = 0;
int main()
{
    char a[20], b[10][10];
    int i = 0, j = 0, k = 0, m, n, g;
    printf("Enter Postfix Expression: ");
    gets(a);

    do
    {
        if ((a[i] != '+') && (a[i] != '-') && (a[i] != '*') && (a[i] != '/') && (a[i] != ',') && (a[i] != ')'))
        {
            b[j][k] = a[i];
            k++;
        }
        if ((a[i] != '+') && (a[i] != '-') && (a[i] != '*') && (a[i] != '/') && (a[i + 1] == ',') && (a[i] != ')'))
        {
            n = atoi(b[j]);
            j++;
            k = 0;
            push(n);
        }
        if (a[i] == '+')
        {
            m = pop();
            g = pop();
            n = g + m;
            push(n);
        }
        if (a[i] == '-')
        {
            m = pop();
            g = pop();
            n = g - m;
            push(n);
        }
        if (a[i] == '*')
        {
            m = pop();
            g = pop();
            n = g * m;
            push(n);
        }
        if (a[i] == '/')
        {
            m = pop();
            g = pop();
            n = g / m;
            push(n);
        }
        i++;
    } while (a[i] != ')');

    printf("Evaluated Value: %d", n);
    return 0;
}

void push(int x)
{
    top++;
    if (top == size)
    {
        printf("Overflow");
    }
    else
    {
        s[top] = x;
    }
}

int pop()
{
    if (top == 0)
    {
        printf("Underflow");
        return 0;
    }
    int last = s[top];
    top--;
    return last;
}