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
    
}


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