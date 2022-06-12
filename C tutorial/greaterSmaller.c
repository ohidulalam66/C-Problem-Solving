#include<stdio.h>

int main()

{
    int x;
printf("Enter the integer Number:\t");
scanf("%d", &x);

if(x>10){
printf("%d is greater than 10 \n", x);
}
else{
printf("%d is smaller than 10 \n", x);
}
    return 0;
}