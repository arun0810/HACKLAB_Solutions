
#include<stdio.h>
#include<stdlib.h>

// Creating a node of a LIST
struct node
{
    int data;
    struct node *link;
};

// Adding a node
void Add(int data)
{
    struct node *head = NULL;
    head = malloc(sizeof (struct node));
    head->data = data;
    head->link = NULL;
    printf("%d->",head->data);
}

int main()
{
    Add(1);
    Add(5);
    Add(5);
    Add(6);
    printf("NULL");
    return 0;
}