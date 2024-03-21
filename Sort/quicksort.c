#include<stdio.h>
void printsort(int arr[],int size);
void quicksort(int l,int h,int arr[]);
int partition(int l,int h,int arr[]);
void swap(int *a, int *b);


int main(){
    int arr[]={10,16,8,12,15,6,3,9,5};

    int size=sizeof(arr) / sizeof(arr[0]);

    int l=0;
    int h=size;

    printf("the original array is ");
    printsort(arr,size);

    
    quicksort(l,h,arr);
     printf("The final sorted array is: ");
    printsort(arr, size);
}


int partition(int l,int h,int arr[]){
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        do
        {
            i++;
        } while (arr[i]<=pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        
        swap(&arr[i],&arr[j]);
// used to swap in between elements of pivot
    }
    swap(&arr[l],&arr[j]); // this is to swap the pivot element after one completeion of one round
 return j;
}


void quicksort(int l,int h,int arr[]){
	
	int j=partition(l,h,arr);
    quicksort( l,j,arr);
     quicksort( j+1,h,arr);

   
}


void printsort(int arr[],int size){
	int m;
for(m=0;m<size;m++){
    printf("%d,",arr[m]);
}
printf("\n");
}



void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}


