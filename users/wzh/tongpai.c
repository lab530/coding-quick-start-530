#include <stdio.h>
int arr[100005];
int main()
{
    int t;
    int max = sizeof(arr) / sizeof(int);
    for (int i = 0; i < max; i++)
    {
        arr[i] = 0;
    }
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &t);
        arr[t]++;
    }
    for (int k = 0; k < max; k++)
    {
        for (int y = 0; y < arr[k]; y++)
        {
            printf("%d", k);
        }
    }
    return 0;
}