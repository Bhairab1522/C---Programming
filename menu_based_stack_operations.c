#include <stdio.h>
#define MAX 5
int s[MAX], top = -1;
int main()
{
    int ch, x, i;
    while(1)
    {
        printf("\n1.Push  2.Pop  3.Display  4.Top  5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                if(top == MAX-1)
                    printf("Overflow");
                else
                {
                    printf("Enter element: ");
                    scanf("%d", &x);
                    s[++top] = x;
                }
                break;
            case 2:
                if(top == -1) printf("Underflow");
                else printf("Popped: %d", s[top--]);
                break;
            case 3:
                if(top == -1) printf("Empty");
                else
                {
                    for(i=top; i>=0; i--)
                        printf("%d ", s[i]);
                }
                break;
            case 4:
                if(top == -1) printf("Empty");
                else printf("Top: %d", s[top]);
                break;
            case 5:
                return 0;
        }
    }
}