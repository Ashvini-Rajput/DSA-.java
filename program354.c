#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data ;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display (PNODE First)
{}

int Count(PNODE First)
{
    return 0;
}

void InserLast(PPNODE First , int No) //*
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = No;
    newn->next =  NULL;
    newn->prev =  NULL;

    if(*First == NULL)
    {
        newn = *First;
    }
    else
   {
        temp = *First;

    while(temp->next != NULL)
    {
         temp = temp ->next;
    }
   
    temp->next = newn;
    newn->prev = temp;      // $
   }

}

void InsertAtPos(PPNODE First, int No, int iPos)
{}

void DeleteFirst(PPNODE First)
{}

void DeleteLast(PPNODE First)
{}

void DeleteAtPos(PPNODE First, int iPos)
{}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,8);
    InsertFirst(&Head,4);
    InsertFirst(&Head,12);

    InsertLast(&Head,5);
    InsertLast(&Head,18);
    InsertLast(&Head,3);
    
    return 0;
}
    


    
