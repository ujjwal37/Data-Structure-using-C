#include<stdio.h>
int BinarySearch(int a[], int n, int Item);
int main()
{
    int BS[100], N , Item;
     BS[N];
     printf("Enter the size of array");
     scanf("%d", &N);
     printf("enter the elements of array");
     for(int i = 0 ; i < N ; i++ )
     {
         scanf("%d",&BS[N]);
     }
     printf("enter the element yoy want to search");
     scanf("%d", &Item);
     int Pos = BinarySearch(BS,N,Item);
     if(Pos != -1){
        printf("element is present at %d position",&Pos);
     }else
     {
         printf("element does not exist");
     }

}
 int BinarySearch(int a[], int n , int c){
      int i = 0 , mid;
      while(i <= n)
      { mid = (n+i)/2;
         if(a[mid] == c){
            return 1;
         }else if(a[mid]> c)
         {
             n = mid -1;
         }else
         {
             i = mid+1;
         }
      }
      return -1;
 }






