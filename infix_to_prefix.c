#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[20];
int top = -1;
int p(char c)
{
    if(c == '+' || c == '-') return 1;
    if(c == '*' || c == '/') return 2;
    return 0;
}
int main()
{
    char a[] = "(2+3*4)*(3-1)", b[20];
    int i, j = 0;
    for(i = strlen(a)-1; i >= 0; i--)
    {
        if(isdigit(a[i]))
            b[j++] = a[i];

        else if(a[i] == ')')
            s[++top] = '(';

        else if(a[i] == '(')
        {
            while(s[top] != '(')
                b[j++] = s[top--];
            top--;
        }
        else
        {
            while(top >= 0 && p(s[top]) > p(a[i]))
                b[j++] = s[top--];
            s[++top] = a[i];
        }
    }
    while(top >= 0)
        b[j++] = s[top--];
    printf("Prefix: ");
    for(i = j-1; i >= 0; i--)
        printf("%c", b[i]);
    return 0;
}