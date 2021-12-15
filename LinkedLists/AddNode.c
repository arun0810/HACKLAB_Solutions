
#include<stdio.h>
#include<stdlib.h>

//CREATING LINKEDLISTS AND ADDING A NODE

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = malloc(sizeof (struct node));
    head->data = 5;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 40;
    current->link = NULL;
    head->link = current;

    printf("%d %d",head->data,head->link->data);
    return 0;
}