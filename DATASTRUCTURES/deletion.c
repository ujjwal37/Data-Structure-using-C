#include<stdio.h>
void Deletion(int a[],int N, int item);
int main()
{
    int D[10],n,Item,i = 0;
    printf("Enter the number of elements in array");
    scanf("%d",&n);
    D[n];
    printf("enter the elements you want to enter");
    for(i=0 ; i< n; i++){
    scanf("%d",&D[i]);
    }
    printf("enter the element you want to delete");
    scanf("%d",&Item);
    Deletion(D,n,Item);
    for(i=0; i <n -1; i++){
        printf("%d",D[i]);
    }


}
void Deletion(int a[], int N, int item)
{
    int i = 0 , j =0 ;
    for( i = 0 ; i < N ; i++)
    {
        if(a[i] == item)
        {
            for(j = i ; j < N - 1 ; j++)
            {
                a[j] = a[j+1];
            }
        }
    }
    for( j =0 ; j< N - 1 ; j++)
    {

        printf("%d",a[j]);
    }
}
