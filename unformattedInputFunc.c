#include<stdio.h>


// Unformatted function in C... 
// Used for character and string input in C...


// using the getchar() you can take the input of a single character from the user...

int main(){
    char ch;
    printf("Enter your preffered character : ");
    ch = getchar();
    printf("Your entered Character is: %c",ch);
    return 0;
}
