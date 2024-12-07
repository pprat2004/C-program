// to see if a number is repeated more than once
#include <stdio.h>
//#define N 4

int main() {
    int N;

int seen[10] = {0};
printf("Enter a number: ");
scanf("%d", &N);
int rem;

while(N > 0){
    rem = N % 10;
    if(seen[rem] == 1){

        break;
    }
    seen[rem] = 1;
    N = N/10;
}
if(N > 0){
printf("YES");
}else{
    printf("No");
}
   
    return 0;
}
