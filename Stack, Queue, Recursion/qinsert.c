#include <stdio.h>
#define max 50
int queue[max] = {5, 6, 8};
int rear = 2;
int front = 0;
int insert(int item);

int main()
{
    int item;
    printf("Enter item to be inserted: ");
    scanf("%d", &item);
    insert(item);
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    return 0;
}
int insert(int item)
{
    if (rear == max - 1)
    {
        printf("\nOverflow");
        return -1;
    }
    else if (front == -1)
    {
        front = 0;
    }
    rear = rear + 1;
    queue[rear] = item;
}