#include <stdio.h>
#include <string.h>
#include <conio.h>

//created by chaitanya

int main()
{
    char username[15];
    char password[12];

    char validusername[15];
    char validpassword[12];


    printf("Enter your username:\n");
    scanf("%s",&username);

    printf("Enter your password:\n");
    scanf("%s",&password);

    //for validation username and password
     printf("Enter your username:\n");
    scanf("%s",&validusername);

    printf("Enter your password:\n");
    scanf("%s",&validpassword);

    if(strcmp(username,validusername)==0){
        if(strcmp(password,validpassword)==0){

        printf("\nWelcome.Login Success!");


        }else{
    printf("\nwrong password");
}
    }else{
    printf("\nUser doesn't exist");
}





    return 0;

}
