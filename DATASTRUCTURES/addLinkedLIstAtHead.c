#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node* head;

void Insert(int x)
{
struct  Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp -> data = x;
  temp -> next = head;
  head = temp;
}
int print()
{    struct Node *temp = head;
    printf("List is : ");
    while(temp != NULL)
    {
        printf("%d", temp -> data);
        temp = temp -> next ;
    }
    printf(" \n ");
}
    int main()
    {
        head = NULL;
            printf("enter how many number");
            int n , i , x;
            scanf("%d",&n);
            for( i = 0; i < n ; i ++)
            {
                printf( " enter the number \n");
                scanf("%d",&x);
                Insert(x);
                print();

            }
return 0;
    }


