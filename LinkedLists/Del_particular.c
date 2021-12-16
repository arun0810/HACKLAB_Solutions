#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;          
    struct node *next;
} *head;

void addlist(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        printf("node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf("Unable to allocate memory.");
                break;
            }
            else
            {
                printf("node %d: ", i);
                scanf("%d", &data);
                newNode->data = data;
                newNode->next = NULL;
                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
}

void referenceNum(int num)
{
    struct node *prev, *cur;
    while (head != NULL && head->data == num)
    {
        prev = head;
        head = head->next;
        free(prev);
        return;
    }
    prev = NULL;
    cur  = head;
    while (cur != NULL)
    {
        if (cur->data == num)
        {
            if (prev != NULL) 
                prev->next = cur->next;
            free(cur);
            return;
        } 
        prev = cur;
        cur = cur->next;
    }
}

void deleteList()
{
    struct node *temp;
    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void displayList()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d->", temp->data); 
            temp = temp->next;                 
        }
    }
}
int main()
{
    int n, num, check;
    printf("number of nodes: ");
    scanf("%d", &n);
    addlist(n);
    printf("list: \n");
    displayList();
    printf("NULL");
    printf("\nEnter the number to delete: ");
    scanf("%d",&num);
    referenceNum(num);
    displayList();
    printf("NULL");
    return 0;
}
