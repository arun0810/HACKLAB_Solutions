#include<stdio.h>
#include<stdlib.h>

//Creating a single node of a LIST
struct node
{
    int data;
    struct node *link;
};

//Function to delete a particular node

void DeleteNode(struct node **head, int ref)
{
    struct node *current = malloc(sizeof(struct node));
}

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