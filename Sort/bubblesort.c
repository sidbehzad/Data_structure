#include<stdio.h>
void printsort(int arr[],int size);
void bubblesort(int arr[],int size);

void printsort(int arr[],int size){
	int m;
for(m=0;m<size;m++){
    printf("%d,",arr[m]);
}
printf("\n");
}
void bubblesort(int arr[],int size){
	int i,j;
	int n=0;
	
for (i = 0; i < size-1; i++)
{
   for (j = 0; j < size-i-1; j++)
   {
    if (arr[j]>arr[j+1])
    {
      int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
    }
     printf("the sorting of elements are \n");
    printsort(arr,size);
   }
    
    printf("loop= %d \n",n);
    n++;
    
}


}


int main(){
    int arr[]={3,5,1,6,2,8};
    int size=sizeof(arr) / sizeof(arr[0]);
    printf("the original array is ");
    printsort(arr,size);

    printf("the sorted elements are \n");
    bubblesort(arr,size);
    


}