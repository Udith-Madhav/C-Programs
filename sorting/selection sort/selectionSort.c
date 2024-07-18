#include <stdio.h>
int main(){
    int i,j,n,temp,minIndex;

    printf("Enter the number of element: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d integer:",n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    //perform selection sort
    for(i=0; i<n-1; i++){
        minIndex = i;

        for(j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array:\n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}