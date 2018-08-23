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
   printf("the transpose of matrix is:");
   for( i =0 ; i <row; i++)
   {
       for(j = 0; j <column ; j++)
       {
           printf("%d",arr[j][i]);
       }
   }
}
