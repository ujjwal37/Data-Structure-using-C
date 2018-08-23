#include<stdio.h>
int main()
{
    int row , column, i , j , k , sum = 0;
    int arr[10][10] ,  ar[10][10] ,  p[10][10];
    printf("enter the number of row you want to enter");
    scanf("%d" , &row);
    printf("enter the number of column to enter");
    scanf("%d" , &column);

    printf("enter the elements in 1 array");
    for( i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < column ; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
      printf("enter the elements in 2 array");
    for( i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < column ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for( i = 0 ; i < row; i++)
        {
            for( j =0 ; j < column ; j++)
            {
                for( k = 0 ; k < row; k++)
                {
                    sum = sum + arr[i][k]*ar[k][j];
                }
                p[i][j]= sum;
                sum  = 0;
            }
        }
         for( i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < column ; j++)
        {
            printf("%d",p[i][j]);
        }
    }
}

