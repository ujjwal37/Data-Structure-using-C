#include<stdio.h>
int LinearSearch(int[],int, int );
int main()
{
    int LS[100],N,Item,Pos;
    LS[N];
    printf("enter the size of array");
    scanf("%d",&N);
    printf("enter the elements of array");
    for(int i = 0 ; i < N ; i++){
        scanf("%d",&LS[i]);
    }
    printf("enter the element you want to enter");
    scanf("%d",&Item);
     Pos = LinearSearch(LS,N ,Item);
       if(Pos != -1){
        printf("element found at position %d",Pos);
       }else{
       printf("element not found");
       }

}
  int LinearSearch(int a[], int b , int c)
  {
      int i = 0;
      for( i ; i < b ; i++){
        if(a[i] == c){
            return i;
        }
      }
      return -1;
  }
