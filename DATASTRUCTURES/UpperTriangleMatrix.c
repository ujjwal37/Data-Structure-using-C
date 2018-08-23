#include<stdio.h>

void main()
{
    int row , column, i , j;
    int arr[10][10];
    printf("enter the number of row you want to enter");
    scanf("%d" , &row);
    printf("enter the number of column to enter");
    scanf("%d" , &column);

    printf("enter the elements in 1 array");
    for( i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < column ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for( i= 1 ;  i < row ; i++)
    {
        for( j = 0 ; j < i ; j++)
        {
            if(arr[i][j] != 0)
            {
               printf("no");
               break;
            }
        }
    }
}
