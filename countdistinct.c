#include <stdio.h> 
int countdistinct(int arr[], int n) 
{ 
    int res = 1; 
    for (int i = 1; i < n; i++) { 
        int j = 0; 
        for (j = 0; j < i; j++) 
            if (arr[i] == arr[j]) 
                break; 
        if (i == j) 
            res++; 
    } 
    printf("%d",res);
} 
void main() 
{ 
    int n,i,arr[100];
    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    countdistinct(arr, n); 
}