#include <stdio.h>
#define MAX 5
int q[MAX], front = -1, rear = -1;
void display()
{
    int i;
    if(front == -1)
        printf("Queue is empty\n");
    else
    {
        printf("Queue: ");
        for(i = front; i <= rear; i++)
            printf("%d ", q[i]);
        printf("\n");
    }
}
void insert()
{
    int x;
    if(rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        printf("Enter element: ");
        scanf("%d", &x);

        if(front == -1)
            front = 0;
        q[++rear] = x;
    }
}
void delete()
{
    if(front == -1)
        printf("Queue Underflow\n");
    else
    {
        printf("Deleted: %d\n", q[front++]);
        if(front > rear)
            front = rear = -1;
    }
}
int main()
{
    int n, i, ch;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &q[i]);
    front = 0;
    rear = n - 1;
    while(1)
    {
        printf("\n1. Display");
        printf("\n2. Insert");
        printf("\n3. Delete");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                display();
                break;
            case 2:
                insert();
                display();
                break;
            case 3:
                delete();
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}