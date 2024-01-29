#include<stdio.h>
void printsort(int arr[],int size);
void selectionsort(int arr[],int size);

void printsort(int arr[],int size){
	int m;
for(m=0;m<size;m++){
    printf("%d,",arr[m]);
}
printf("\n");
}
void selectionsort(int arr[],int size){
	int i,j;

    int min;
    int k;
	
for (i = 0; i < size; i++)
{min=arr[i];
  printf("loop= %d \n",i);
    k=i;
   for (j = i+1; j < size-i; j++)
   {
    if (min>arr[j])
    {
           min = arr[j];
                k = j;
    }
     
   }
   printf("min=%d\n",min);
    if(k!=i){
	
    swap(&arr[i],&arr[k]);
}else{
	printf("no need to swap\n");
	
}
    printf("the sorting of elements after pass %d is:\n", i + 1);
    printsort(arr,size);
   
}


}
void swap(int*a,int* b){

  int temp = *b;
    *b = *a;
    *a = temp;
}

int main(){
    int arr[]={3,5,1,6,2,8};
    int size=sizeof(arr) / sizeof(arr[0]);
    printf("the original array is ");
    printsort(arr,size);

    printf("the sorted elements are \n");
    selectionsort(arr,size);
    


}