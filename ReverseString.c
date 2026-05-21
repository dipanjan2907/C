#include <stdio.h>
#include <string.h>
void reverse(char str[])
{
    char temp;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed String: %s", str);
}
int main(void)
{
    char str[100];
    printf("Enter String: ");
    scanf("%s", str);
    reverse(str);
    return 0;
}
