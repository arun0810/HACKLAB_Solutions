
#include<stdio.h>
#include<stdlib.h>

//CREATING LINKEDLISTS AND ADDING NODES

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
    printf("%d",head->data);
    return 0;
}