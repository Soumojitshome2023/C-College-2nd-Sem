#include <stdio.h>

int main()
{
    int n, i, j, num , k;
    printf("Enter row:");
    scanf("%d", &n);

    for (i = 1; i <=n; i++)
    {
        for (k = 1; k <= n-i; k++)
        {
            printf("    ");
        }
        num = i;
        for (j = 1; j<=i ; j++)
        {   
            printf("%d   ", num);
            num = num +1;
        }
        printf("\n");

    }

    return 0;
}