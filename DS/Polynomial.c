#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n1, n2;

    struct node
    {
        int coeff;
        int expo;
        struct node *link;
    };

    struct node *start1 = NULL, *start2 = NULL, *ptr1 = NULL, *ptr2 = NULL, *startS = NULL, *ptrS = NULL;
    struct node *newnode = NULL;

    printf("First Polynomial:\n");
    printf("Enter number of terms: ");
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter coefficient:");
        scanf("%d", &newnode->coeff);
        printf("Enter expo:");
        scanf("%d", &newnode->expo);
        if (start1 == NULL)
        {
            start1 = newnode;
            ptr1 = start1;
        }
        else
        {
            ptr1->link = newnode;
            ptr1 = newnode;
        }
    }
    ptr1 = NULL;

    printf("\nSecond Polynomial:\n");
    printf("Enter number of terms: ");
    scanf("%d", &n2);
    for (int i = 1; i <= n2; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter coefficient:");
        scanf("%d",&newnode->coeff);
        printf("Enter expo:");
        scanf("%d", &newnode->expo);
        if (start2 == NULL)
        {
            start2 = newnode;
            ptr2 = start2;
        }
        else
        {
            ptr2->link = newnode;
            ptr2 = newnode;
        }
    }
    ptr2 = NULL;

    ptr1 = start1;
    ptr2 = start2;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (ptr1->expo > ptr2->expo)
        {
            newnode->coeff = ptr1->coeff;
            newnode->expo = ptr1->expo;
            ptr1 = ptr1->link;
        }
        else if (ptr1->expo < ptr2->expo)
        {
            newnode->coeff = ptr2->coeff;
            newnode->expo = ptr2->expo;
            ptr2 = ptr2->link;
        }
        else if (ptr1->expo == ptr2->expo)
        {
            newnode->coeff = ptr1->coeff + ptr2->coeff;
            newnode->expo = ptr1->expo;
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }

        if (startS == NULL)
        {
            startS = ptrS = newnode;
        }
        else
        {
            ptrS->link = newnode;
            ptrS = newnode;
        }
    }
    while (ptr1 != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->coeff = ptr1->coeff;
        newnode->expo = ptr1->expo;
        ptr1 = ptr1->link;
        ptrS->link = newnode;
        ptrS = newnode;
    }
    while (ptr2 != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->coeff = ptr2->coeff;
        newnode->expo = ptr2->expo;
        ptr2 = ptr2->link;
        ptrS->link = newnode;
        ptrS = newnode;
    }

    ptr1 = start1;
    printf("\nFirst Polynomial:\n\t");
    while (ptr1->link != NULL)
    {
        printf("%dx^%d + ", ptr1->coeff, ptr1->expo);
        ptr1 = ptr1->link;
    }
    printf("%dx^%d\n\n", ptr1->coeff, ptr1->expo);

    ptr2 = start2;
    printf("Second Polynomial:\n\t");
    while (ptr2->link != NULL)
    {
        printf("%dx^%d + ", ptr2->coeff, ptr2->expo);
        ptr2 = ptr2->link;
    }
    printf("%dx^%d\n\n", ptr2->coeff, ptr2->expo);

    ptrS = startS;
    printf("Sum of above Polynomials:\n");
    while (ptrS->link != NULL)
    {
        printf("%dx^%d + ", ptrS->coeff, ptrS->expo);
        ptrS = ptrS->link;
    }
    printf("%dx^%d\n\n", ptrS->coeff, ptrS->expo);
}

