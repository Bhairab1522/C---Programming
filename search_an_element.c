#include <stdio.h>
int main()
{
    int a[10], n, x, i, found = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &x);
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("Element not found");

    return 0;
}