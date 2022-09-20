#include <stdio.h>
#define max 50
int queue[max] = {5, 6, 8};
int rear = 2;
int front = 0;
int delete ();

int main()
{
    delete ();
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    return 0;
}
int delete ()
{
    int item;
    if (front == -1 || front > rear)
    {
        printf("\nUnderflow");
        return -1;
    }
    else
    {
        item = queue[front];
        front = front + 1;
        printf("\nElement deleted\n");
    }
}