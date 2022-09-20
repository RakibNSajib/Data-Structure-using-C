#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *nextptr;
} * stnode;

void createNodeList(int n);
void traverse();
int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createNodeList(n);
    traverse();
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

void traverse()
{
    struct node *temp;
    if (stnode == NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        temp = stnode;
        int i = 1;
        while (temp != NULL)
        {

            printf("\nData for node %d: %d", i, temp->num);
            i++;
            temp = temp->nextptr;
        }
    }
}