#include<stdio.h>

// write a program to print no's from 1 to 10

/*
int main(){
    for(int i=1;i<=10;i++){
        printf("%d\n",i);
    }
    return 0;
}
*/


// program for sum of N Natural no's

/* int main(){

    int n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("Sum is: %d",sum);
    return 0;
}
*/

// factorial of a number...

int main(){
    int fact=1,n;
    printf("Enter the number you want factorial of: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("Factorial of the entered number is %d",fact);
}

