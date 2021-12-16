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

    /* Check if head node contains num */
    while (head != NULL && head->data == num)
    {
        // Get reference of head node
        prev = head;

        // Adjust head node link
        head = head->next;

        // Delete prev since it contains reference to head node
        free(prev);

        // No need to delete further
        return;
    }

    prev = NULL;
    cur  = head;

    /* For each node in the list */
    while (cur != NULL)
    {
        // Current node contains num
        if (cur->data == num)
        {
            // Adjust links for previous node
            if (prev != NULL) 
                prev->next = cur->next;

            // Delete current node
            free(cur);

            // No need to delete further
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
    scanf("%d",&num);
    referenceNum(int num);
    displayList();
    printf("NULL");
    return 0;
}
