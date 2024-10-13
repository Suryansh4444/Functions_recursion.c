// Online C compiler to run C program online
#include <stdio.h>


// Function prototype
int sum(int,int);

// Function prototype
int sum(int a,int b){
printf("The sum is %d\n", a+b);
return a+b;
}

int main() {
   
    
    sum(3,7);
    sum(11,41);
    sum(82,56);

    return 0;
}