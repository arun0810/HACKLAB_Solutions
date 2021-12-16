
#include<stdio.h>
#include<stdlib.h>

// Creating a node of a LIST
struct node
{
    int data;
    struct node *link;
};

// Function to delete a particular node
void DeleteNode(struct node **temp, int ref)
{
    struct node *current=*temp;
    struct node *previous=*temp;

    if(*temp==NULL)
        printf("List is empty");
    
// If the delete position is at 1st node
    else if(ref==1)
    {
        *temp=current->link;
        free(current);
        current = NULL;
    }
// If the delete postion is not at beginning
    else
    {
        while(ref!=1)
        {
            previous = current;
            current = current->link;
            ref--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}

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