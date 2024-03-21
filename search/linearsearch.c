#include<stdio.h>
int main(){
    int n,i,key;
    printf("Enter total number of entries\n");
    scanf("%d",&n);
    int a[n];
     printf("Enter numbers\n");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }

     int flag=0;
      printf("Enter the element to be searched\n");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==a[i]){
          flag=1;
          break;
        }
    }
    if(flag==1){
        printf("element found");
    }else
    printf("element not found");
}