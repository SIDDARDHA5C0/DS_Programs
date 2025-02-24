
#include <stdio.h>
#include <limits.h>

int optimalMergePattern(int arr[], int n)
{
    int minCost = 0;
    while (n > 1) {
        int minIndex1 = 0, minIndex2 = 0;
        int min1 = INT_MAX, min2 = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (arr[i] < min1) {
                min2 = min1;
                minIndex2 = minIndex1;
                min1 = arr[i];
                minIndex1 = i;
            }
            else if (arr[i] < min2) {
                min2 = arr[i];
                minIndex2 = i;
            }
        }

        int merged = min1 + min2;
        printf("\n merge %d and %d cost is =%d",min1,min2,merged);
        arr[minIndex1] = merged;
        for (int i = minIndex2 + 1; i < n; i++) {
            arr[i - 1] = arr[i];
        }
        n--;
        minCost += merged;

    }

    return minCost;
}

int main()
{
    int arr[20],files;
    printf("enter the number of files");
    scanf("%d",&files);
    printf("enter the records");
    for (int i=0;i<files;i++)
    {
        scanf("%d",&arr[i]);
    }
    int minCost = optimalMergePattern(arr, files);

    printf("\nMinimum cost of merging is %d", minCost);

    return 0;
}



