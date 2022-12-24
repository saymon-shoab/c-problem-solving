// below we have a simple C program for bubble sort
#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp, flag=0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            // introducing a flag to monitor swapping
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                // if swapping happens update flag to 1
                flag = 1;
            } 
        }
        // if value of flag is zero after all the iterations of inner loop
        // then break out
        if(flag==0)
        {
            break;
        }
    }
    
    // print the sorted array
    printf("Sorted Array: ");
    int middle;
    int m1,m2;
    int ans;
    for(i = 1; i <= n; i++)
    {
        printf("%d  ", arr[i]);
        if (n%2==1)
        {
            middle =(n/2)+1;
            ans = arr[middle];
            // printf("middle number is%d", arr[middle]);
        }else if (n%2==0)
        {
            m1 =(n/2);
            m2 = m1+1; 
            ans = (arr[m1]+arr[m2])/2;
        }
    }
    // print middle number of the array..
    printf("\n");
    printf("the middle number from array is %d", ans);
}

int main()
{
    int arr[100], i, n, step, temp;
    // ask user for number of elements to be sorted
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    // input elements if the array
    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    // call the function bubbleSort
    bubbleSort(arr, n);
    
    return 0;
}