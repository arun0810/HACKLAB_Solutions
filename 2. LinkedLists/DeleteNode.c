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

void addnode(int data)
{
    struct node *head = NULL;
    head = malloc(sizeof (struct node));
    head->data = data;
    head->link = NULL;
}

int main()
{
    addnode(1);
    addnode(2);
    addnode(3);
    addnode(6);
    return 0;
}