#include <stdio.h>
#include <stdlib.h>
struct queue
{
    
    int data;
    struct queue * link;
};
struct queue *front =NULL;
struct queue *rear =NULL;
void enqueue();
void dequeue();
void display();
void peek();
void count();
void frontp();
void rearp();
int data;
void main(){
int c;
do{
    printf("enter 1 for enqueue,2 for dequeue,3 for display,4 for peek,5 for count,6 for front,7 for rear\n");
    scanf("%d",&c);
    switch(c){
        case 1:enqueue();
        break;
        case 2:dequeue();
        break;
        case 3:display();
        break;
        case 4:peek();
        break;
        case 5:count();
        break;
        case 6:frontp();
        break;
        case 7:rearp();
        break;
        default: printf("wrong number entered \n");
        break;
    }
}while(c!=0);
}
void enqueue(){
    int el;
    struct queue *p;
    p=(struct queue*)(sizeof(struct queue));
   
    if (p==NULL){
    	printf("structure not created\n");
    	return;
	}else
    {     
     printf("enter data\n");
    scanf("%d", &el);
    p->data=el;
       if(rear==NULL) {
	   p->link=NULL; 
        rear=p;
        front=p;
        

    }else{
        rear->link=p;
        rear=p;
        p->link=NULL;
    }
    
    
}
}
void dequeue(){
    if(rear==NULL){
        printf("queue empty\n");
        return;
    
    }else{
        printf("the element removed:%d\n",front->data);
        front=front->link;
    }
}
void display(){
     struct queue *p;
if(rear==NULL){
    printf("stack is empty\n");
return;
}else
{p=front;
    while(p->link !=NULL){
        printf("%d \n",p->data);
        p=p->link;
    }
    printf("%d \n",p->data);
}
}
void peek(){
    if(rear==NULL){
    printf("stack is empty\n");
   return;
}else
{

        printf(" the data at front is %d \n",front->data);
        
     p=p->link;
}
}
void count(){
       struct queue *p;
       int c=1;
if(rear==NULL){
    printf("stack is empty\n");
return;
}else
{p=front;
    while(p->link !=NULL){
        c++;
        p=p->link;
    }
    printf("the total count is: %d \n",c);

}
}
void frontp(){
    if(rear==NULL)
    printf("queue empty\n");
    else{
        printf("the front element is:%d",front->data);
    }
}
void rearp(){
    if(rear==NULL)
    printf("queue empty\n");
    else{
        printf("the front element is:%d",rear->data);
    }
}