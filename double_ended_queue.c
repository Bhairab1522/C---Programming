#include <stdio.h>
#define MAX 5
int dq[MAX], front = -1, rear = -1;
void display()
{
    int i;
    if(front == -1)
        printf("Deque is empty\n");
    else
    {
        for(i = front; i <= rear; i++)
            printf("%d ", dq[i]);
        printf("\n");
    }
}
int main()
{
    int ch, x;
    while(1)
    {
        printf("\n1.Enqueue Front  2.Enqueue Rear");
        printf("\n3.Dequeue Front  4.Dequeue Rear");
        printf("\n5.Display  6.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                if(front == 0)
                    printf("Cannot insert\n");
                else
                {
                    printf("Enter element: ");
                    scanf("%d", &x);
                    if(front == -1) front = rear = 0;
                    else front--;
                    dq[front] = x;
                }
                display();
                break;
            case 2:
                if(rear == MAX-1)
                    printf("Overflow\n");
                else
                {
                    printf("Enter element: ");
                    scanf("%d", &x);
                    if(front == -1) front = 0;
                    dq[++rear] = x;
                }
                display();
                break;
            case 3:
                if(front == -1)
                    printf("Underflow\n");
                else
                {
                    printf("Deleted: %d\n", dq[front++]);
                    if(front > rear) front = rear = -1;
                }
                display();
                break;
            case 4:
                if(rear == -1)
                    printf("Underflow\n");
                else
                {
                    printf("Deleted: %d\n", dq[rear--]);
                    if(front > rear) front = rear = -1;
                }
                display();
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
        }
    }
}