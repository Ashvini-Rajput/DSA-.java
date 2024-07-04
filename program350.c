// doubly linear linklist

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First , int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else{
        newn->next = *First;
        *First = newn;
    }
}   
void InsertLast(PPNODE First ,int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn  = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn ->next = NULL;
    
    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;
        
        while(temp->next!= NULL)
        {
            temp = temp ->next;
        }
    
    temp ->next = newn;

     }
}