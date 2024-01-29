#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bt
{
    struct bt *lt;
    int data;
    struct bt *rt;
};

struct bt *root = NULL;
struct bt *t;


void insert();
void inorder(struct bt *t);
void preorder(struct bt *t);
void postorder(struct bt *t);

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
    struct bt *p, *pre, *curr;
    int el, i, len;
    char dir[20];
    p = (struct bt *)malloc(sizeof(struct bt));
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
        printf("Enter the directions (l for left, r for right) to insert data (e.g., lrlr): ");
        scanf("%s", dir);
        pre = NULL;
        curr = root;
        len = strlen(dir);
        for (i = 0; i < len; i++)
        {
            if (curr == NULL)
                break;
            pre = curr;
            if (dir[i] == 'l' || dir[i] == 'L')
            {
                curr = curr->lt;
            }
            else if (dir[i] == 'r' || dir[i] == 'R')
            {
                curr = curr->rt;
            }
        }
        if (curr != NULL || i != len)
        {
            printf("Insertion of node is not possible.\n");
        }
        else
        {
            if (dir[i - 1] == 'l' || dir[i - 1] == 'L')
            {
                pre->lt = p;
            }
            else if (dir[i - 1] == 'r' || dir[i - 1] == 'R')
            {
                pre->rt = p;
            }
        }
    }
}

void inorder(struct bt *t)
{
    if (t == NULL)
        return;
    inorder(t->lt);
    printf("%d ", t->data);
    inorder(t->rt);
}

void preorder(struct bt *t)
{
    if (t == NULL)
        return;
    printf("%d ", t->data);
    preorder(t->lt);
    preorder(t->rt);
}

void postorder(struct bt *t)
{
    if (t == NULL)
        return;
    postorder(t->lt);
    postorder(t->rt);
    printf("%d ", t->data);
}
