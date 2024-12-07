

#include <stdio.h>
int main(){
int n;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];

printf("Enter the %d values to store in the array: ",n);
for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
}
printf("The %d values stored in the array are: ",n);
for(int i = 0; i <n; i++){
    printf("%d ", arr[i]);
}
}



