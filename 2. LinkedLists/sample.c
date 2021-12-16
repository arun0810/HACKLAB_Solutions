#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;          
    struct node* link; 
};

//ADDING NODES
void add(int n)
{
    struct node* head;
    struct node* current;
    struct node* previous;
    int num,i;
    head = malloc(sizeof(struct node));
    previous = head;

    printf("Node 1: ");
    scanf("%d",&num);
    head->data = num;
    head->link = NULL;

    for(i=2;i<=n;i++)
    {
        current = malloc(sizeof(struct node));
        printf("Node %d:",i);
        scanf("%d",&num);
        current->data = num;
        current->link = NULL;
        previous->link = current;
        previous = current;
    }
}

int main()
{
    int n;
    printf("No of Nodes: ");
    scanf("%d",&n);
    add(n);
    return 0;
}   