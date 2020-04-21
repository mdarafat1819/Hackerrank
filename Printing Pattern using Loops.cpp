#include <stdio.h>

int main()
{
    int n, col;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--)
    {
        for(int j = n; j > i; j--) printf("%d ", j);
        for(int k = 0; k < (1 + (i - 1) * 2); k++) printf("%d ", i);
        for(int j = i+1; j <= n; j++) printf("%d ", j);
        printf("\n");
    }
    for(int i = 2; i <= n; i++)
    {
        for(int j = n; j > i; j--) printf("%d ", j);
        for(int k = 0; k < (1 + (i - 1) * 2); k++) printf("%d ", i);
        for(int j = i+1; j <= n; j++) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
