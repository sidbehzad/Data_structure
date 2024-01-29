void insert()
{
    struct bst *p, *pre, *curr;
    int el;

    p = (struct bst *)malloc(sizeof(struct bst));
    if (p == NULL)
    {
        printf("Memory is not available\n");
        return;
    }

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

        while (curr != NULL)
        {
            pre = curr;
            if (el < curr->data)
            {
                curr = curr->lt;
            }
            else if (el > curr->data)
            {
                curr = curr->rt;
            }
            else
            {
                // Handle duplicate values (you can choose how to handle them)
                printf("Duplicate value not allowed.\n");
                free(p); // Free the allocated memory
                return;
            }
        }

        if (el < pre->data)
        {
            pre->lt = p;
        }
        else
        {
            pre->rt = p;
        }
    }
}
