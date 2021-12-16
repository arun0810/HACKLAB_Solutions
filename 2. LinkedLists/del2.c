/***********************************************/
#include<stdio.h>
#include<stdlib.h>

// Creating a node of a LIST
struct node
{
    int data;
    struct node *link;
};

// Adding a node
void Add(int n)
{
    int i,num;
    struct node *head;
    struct node *current;
    struct node *previous;
    head = malloc(sizeof (struct node));
    
    printf("Enter element of node 1: ");
    scanf("%d",&num);

    head->data = num;
    head->link = NULL;    
    previous = head;

    for(i=2;i<=n;i++)
    {
        current = malloc(sizeof(struct node));
        printf("Enter element of node %d: ",i);
        scanf("%d",&num);
        current->data = num;
        current->link = NULL;

        previous->link = current;
        previous = previous->link;
    }
}

int main()
{
    int nodes;
    printf ("Enter the no. of nodes in a list: ");
    scanf ("%d",&nodes);
    printf("NULL");
    return 0;
}