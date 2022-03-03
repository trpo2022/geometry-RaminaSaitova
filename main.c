#include <stdio.h>
#include <string.h>

int sum(char* s)
{
    int res = 0, i;
    for (i = 0; i < strlen(s); ++i)
        if ((s[i] >= '0') && (s[i] <= '9')) res += s[i] - '0';
    return res;
}

void main()
{
    char s[100];
    printf("Vvedite stroku: ");
    scanf("%s ", &s);
    printf("The sum is: %d", sum(s));
    return;
}