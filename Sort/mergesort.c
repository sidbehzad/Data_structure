#include<stdio.h>

 void mergesort(int arr[],int l,int h){
    if(l<h){
       int mid=(l+h)/2;
       mergesort(arr,l,mid);
       mergesort(arr ,mid+1,h);
       merge(arr,l,mid,h);
    }
 }
 void merge(int arr[],int l,int m,int n){
    int i=0;
    int j=0;
    int k=l;
    int L[m],M[n];
    for (int i = 0; i < m; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n; j++)
    M[j] = arr[m + 1 + j];
    while(i<m &&j<n){
   
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < m) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n) {
    arr[k] = M[j];
    j++;
    k++;
  }
    }
    
    void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
 
int main(){
     int arr[] = {6, 5, 12, 10, 9, 1};
     int l=0;
  int size = sizeof(arr) / sizeof(arr[0]);
  mergesort(arr,l,size);

  printf("Sorted array: \n");
  printArray(arr, size);
}