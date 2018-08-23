#include<stdio.h>
void Insert(int a[] , int n , int item, int position);
int main()
{
    int I[10], n , item ,i, pos;
    printf("enter the size of array");
    scanf("%d",&n);
    I[n];
    printf("enter the elements you want to enter in array");
    for(i = 0 ; i < n ; i++)
    {
         scanf("%d",&I[i]);
    }
    printf("enter the element and position you want to enter");
    scanf("%d %d",&item,&pos);
    Insert(I,  n ,  item, pos);
    for( i =0 ; i < n+1; i++)
    {
       printf("%d",I[i]);
    }
    }
 void Insert(int a[], int n, int item, int position)
 {
     int i = position;
     for( i ; i < n ; i++)
     {
         a[i+1] = a[i];
     }
      a[i] = item;
 }

