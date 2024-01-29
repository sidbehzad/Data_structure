#include <stdio.h>
#include <stdlib.h>
struct stack
{
    
    int data;
    struct stack * link;
};
struct stack * top=NULL;
void push();
void pop();
void display();
void peek();
void count();
int data;
void main(){
int c;
do{
    printf("enter 1 for push,2 for pop,3 for display,4 for peek,5 for count\n");
    scanf("%d",&c);
    switch(c){
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:display();
        break;
        case 4:peek();
        break;
        case 5:count();
        break;
        default: printf("wrong number entered \n");
        break;
    }
}while(c!=0);
}

void push(){
    int el ;
	struct stack *p;
    p=(struct stack*)malloc(sizeof(struct stack));
    if(p==NULL){
	
    printf("stack is empty \n");
    return;}
    else{
        printf("enter the data \n");
        scanf("%d",&el);
        p->data =el;
    if (top==NULL){
        p->link=NULL;
        top=p;
        return;
    }else{
        p->link=top;
        top=p;
    }
    }
}
void pop(){
    if(top==NULL){
        printf("STACK IS EMPTY\n");
    }else
    {
        printf("element deleted :%d \n",top->data);
     top=top->link;   
    }
    
}
void display(){
    struct stack *p;
if(top==NULL){
    printf("stack is empty\n");
return;
}else
{p=top;
    while(p->link !=NULL){
        printf("%d \n",p->data);
        p=p->link;
    }
    printf("%d \n",p->data);
}

}
void peek(){
    if(top==NULL){
    printf("stack is empty\n");
   return;
}else
{

        printf(" the data at peak is %d \n",top->data);
        

}
}
void count(){
       struct stack *p;
       int c=1;
if(top==NULL){
    printf("stack is empty\n");
return;
}else
{p=top;
    while(p->link !=NULL){
        c++;
        p=p->link;
    }
    printf("the total count is: %d\n",c);

}
}
