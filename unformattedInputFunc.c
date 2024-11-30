#include<stdio.h>


// Unformatted function in C... 
// Used for character and string input in C...


// using the getchar() you can take the input of a single character from the user...

int main(){
    // char ch;
    // printf("Enter your preffered character : ");
    /*ch = getchar(); // use getchar to take a single character input from the user...
    */
    // printf("Your entered Character is: %c",ch);
    char str[16];
    printf("Enter your Preffered String:\n");
    fgets(str,sizeof(str),stdin);
    printf("Your entered string is:%s\n",str);
    return 0;
} 




