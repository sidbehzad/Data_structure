#include<stdio.h>
int main(){
    int l=0,h=14,key;
    int elements[]={3,6,8,12,14,17,25,29,31,42,47,53,55,62};

    printf("Enter the element to be searched\n");
    scanf("%d",&key);

    int result=bsearch(l,h,key,elements);
    if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);

    return 0;
}
int bsearch(int l,int h,int key,int elements[]){
    int mid=(l+h)/2;
    
    while(l<=h){
    if(key==elements[mid])
    return mid;
    if(key<=elements[mid])
    return bsearch(l,mid-1,key,elements);
    else
    return bsearch(mid+1,h,key,elements);
    }
    return -1;
} 