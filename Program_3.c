#include<stdio.h>
#include<string.h>
void input(int *, int);
void display(int*,int );
void sort(int *, int);

    int main()
    {
        int a[5];

        input(a, 5);
        printf("\n");
        display(a, 5);
        printf("\nAfter sorting:\n");
        sort(a,5);
        return 0;
    }

    void input(int *p, int size)
    {
        int i;
        printf("Enter %d numbers:\n", size);
        for (i = 0; i < size; i++)
        {
            scanf("%d", p + i);
        }
    }

    void display(int *p, int size)
    {
        int i;
        for (i = 0; i < size; i++)
        {
            printf(" %d ", *(p + i));
        }
    }
// Here we use the same algorithm as sorting a array 
// in ascending order
    void sort(int *p, int size)
    {
       int i,j,temp;
       for (i = 0; i < size-1; i++)
       {
           for (j = i + 1; j < size; j++)
           {
               if (*(p+i) > *(p+j))
               {
                   temp = *(p+i);
                   *(p+i) = *(p+j);
                   *(p+j) = temp;
               }
           }
       }

       for (i = 0; i < size; i++)
       {
           printf(" %d ", *(p+i));
       }

    }
