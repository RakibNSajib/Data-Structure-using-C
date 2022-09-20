#include <stdio.h>
#include <stdlib.h>
struct node
{
    int num;
    struct node *nextptr;
} * stnode;

void createNodeList(int n);
void insGiven();
void traverse();
int main()
{
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    createNodeList(n);
    insGiven();
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

void insGiven()
{
    int item, loc;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;

    if (ptr == NULL)
    {
        printf("\nOverflow");
    }

    else
    {
        printf("\nEnter an item to be inserted: ");
        scanf("%d", &item);
        printf("\nEnter Location: ");
        scanf("%d", &loc);

        ptr->num = item;

        if (loc == NULL) // inserts as first node
        {
            ptr->nextptr = stnode;
            stnode = ptr;
            printf("\nNode Inserted");
            return;
        }

        else
        {
            temp = stnode;
            for (int i = 0; i < loc; i++)
            {
                temp = temp->nextptr; // reach top node of temp

                if (temp == NULL)
                {
                    printf("\nCannot Insert");
                    return;
                }
            }
            ptr->nextptr = temp->nextptr;
            temp->nextptr = ptr;
            printf("\nNode inserted");
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