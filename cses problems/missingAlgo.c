/* missing Algorithm
input n= +ve integer
sequence format 1, 2, 4 | 1, 3, 4  (if n=4)
output=> missing number*/
//@hungryc0d3r
#include <stdio.h>

int main()
{
    int i,n,arr[2000];
    printf("enter n:");
    scanf("%d",&n);
    printf("Enter array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array is:");
     int sumTotal;
    sumTotal= ((n+1)*(n+2))/2;
     for(i=0;i<n;i++){
        printf("%d \t",arr[i]);
          sumTotal -= arr[i];
     }
      int missing= sumTotal;
     printf("\nmissing is :%d",missing);
    return 0;
}
