#include <stdio.h>
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
    char a[] = "(a+b*c)*d+e", b[20];
    int i, j = 0;
    for(i = 0; a[i]; i++)
    {
        if(isalnum(a[i]))
            b[j++] = a[i];

        else if(a[i] == '(')
            s[++top] = a[i];

        else if(a[i] == ')')
        {
            while(s[top] != '(')
                b[j++] = s[top--];
            top--;
        }
        else
        {
            while(top >= 0 && p(s[top]) >= p(a[i]))
                b[j++] = s[top--];
            s[++top] = a[i];
        }
    }
    while(top >= 0)
        b[j++] = s[top--];
    b[j] = '\0';
    printf("Postfix: %s", b);
    return 0;
}