#include <stdio.h>
int main()
{
    char str[50];
    printf("Enter String: ");
    fgets(str, 50, stdin);
    int i = 0;
    while (str[i] != '\0')
        i++;
    // Newline character gets included when ENTER is pressed, so i-1
    printf("Length is %d", i - 1);
}