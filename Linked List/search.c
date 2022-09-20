#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *nextptr;
} * stnode;

void createNodeList(int n);
int search();
int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createNodeList(n);
    search();
    return 0;
}

void createNodeList(int n)
{
    struct node *fnNode, *temp;
    int num;
    stnode = (struct node *)malloc(sizeof(struct node));
    if (stnode == NULL)
    {
        printf("\nMemory Allocation could not possible");
    }
    else
    {
        printf("\nEnter data for node 1: ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;

        temp = stnode;

        for (int i = 2; i <= n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if (fnNode == NULL)
            {
                printf("\nMemory Allocation could not possible");
            }
            else
            {
                printf("\nEnter data for node %d: ", i);
                scanf("%d", &num);

                fnNode->num = num;
                fnNode->nextptr = NULL;
                temp->nextptr = fnNode;
                temp = temp->nextptr;
            }
        }
    }
}

int search()
{
    int item;
    struct node *temp;
    if (stnode == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        printf("\nEnter an item is to be searched: ");
        scanf("%d", &item);
        temp = stnode;
        int loc = 0;
        while (temp != NULL)
        {
            if (item == temp->num)
            {
                printf("\nItem found at index %d", loc);
                return -1;
            }

            loc++;
            temp = temp->nextptr;
        }
    }
    printf("\nItem not found");
}