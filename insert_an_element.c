#include <stdio.h>
int main() {
    int a[20], n, x, pos, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element and position: ");
    scanf("%d%d", &x, &pos);
    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = x;
    n++;
    printf("Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}