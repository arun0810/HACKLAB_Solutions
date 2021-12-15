#include<stdio.h>
#include<stdlib.h>

//DELETE NODE

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

    

    return 0;
}