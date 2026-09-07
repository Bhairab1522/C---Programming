#include <stdio.h>
int main() {
    int a[10], n, i, max, min;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    max = min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);
    return 0;
}