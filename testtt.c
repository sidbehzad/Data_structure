#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bst
{
    struct bst *lt;
    int data;
    struct bst *rt;
};

struct bst *root = NULL;
struct bst *t;

void insert();
void inorder(struct bst *t);
void preorder(struct bst *t);
void postorder(struct bst *t);

int data;

int main()
{
    int c;
    do
    {
        printf("enter 1 to insert, 2 for inorder, 3 for preorder, 4 for postorder, 0 to exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert();
            break;
        case 2:
            printf("Inorder Traversal: ");
            inorder(root);
            printf("\n");
            break;
        case 3:
            printf("Preorder Traversal: ");
            preorder(root);
            printf("\n");
            break;
        case 4:
            printf("Postorder Traversal: ");
            postorder(root);
            printf("\n");
            break;
        case 0:
            break;
        default:
            printf("Invalid option entered.\n");
            break;
        }
    } while (c != 0);
}

void insert()
{
    struct bst *p, *pre, *curr;
    int el;
    
    p = (struct bst *)malloc(sizeof(struct bst));
    if(p==NULL){
        printf("memory is not available");
    }else{
    printf("Enter data: ");
    scanf("%d", &el);
    p->data = el;
    p->lt = NULL;
    p->rt = NULL;
    if (root == NULL)
    {
        root = p;
    }
    else
    {
       
        pre = NULL;
        curr = root;
       while(curr!=NULL){
        pre=curr;
        if(el< curr->data)
        curr=curr->lt;
        else{
            curr=curr->rt;
        }
        if(el<pre->data)
        pre->lt=p;
        else
        pre->rt=p;
       }
    }
    }
}

void inorder(struct bst *t)
{
    if (t == NULL)
        return;
    inorder(t->lt);
    printf("%d ", t->data);
    inorder(t->rt);
}

void preorder(struct bst *t)
{
    if (t == NULL)
        return;
    printf("%d ", t->data);
    preorder(t->lt);
    preorder(t->rt);
}

void postorder(struct bst *t)
{
    if (t == NULL)
        return;
    postorder(t->lt);
    postorder(t->rt);
    printf("%d ", t->data);
}

