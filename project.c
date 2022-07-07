/**
  * @param Basically we tend to forget our passwords, so we have a program that will store our account passwords.
  * @author ADITYA CHAUDHARY
  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Credentials Storing Assitant

int main(){

    //Menu Driven Program
    //Authentication System
    //Mask Password with '*'

    //Variable Declaration

    int i = 0, userID_verify_result, password_verify_result, access = 0, reenter = 0;

    //Welcome Statement
    printf("\033[0;31m");
    printf("Credentials Storing Assistant\n");
    printf("\033[0m");

    //Create a loop for unauthorised access !

    while(access == 0){
            char userID[20] , password[20] , ch;
        //Create Re-Enter Details Logic !

            //<!-- Authentication Loop Starts -->

            //All the authentication logic will come inside this block
            printf(">> Enter User ID: \n");

            //Take User ID from user
            scanf("%[^\n]s",userID);

            //For Debugging Purpose
            //printf(">> Entered ID : %s\n",userID);

            printf("\n");

            //Input Password from user but remember to mask it
            printf(">> Enter Password: \n");
            while((ch = getch()) != 13){
                password[i] = ch;
                i++;
                printf("*");
            }

            printf("\n");
            password[i] = '\0';

            //For Debugging Purpose
            //printf(">> Entered Password : %s\n",password);

            //Compare your credentials with input
            //If it matches, then ask for which account display

            userID_verify_result = strcmp(userID,"abc@gmail.com");
            password_verify_result = strcmp(password, "test@123");

            if((userID_verify_result == 0) && (password_verify_result == 0)){
                //Access Success
                //Change access flag variable to true or 1
                access = 1;

            }else{
                //Access Denied
                //User will control access flag variable
                //They should be sent back to enter user id and password again !
                printf("\033[0;31m");
                printf(">> Access Denied\n");
                printf("\033[0m");
                printf("\n");

                break;
            }


            if(access == 1){
                //Display various accounts
                //\033[0;32m
                printf("\033[0;32m");
                printf(">> Access Success \n");
                printf("\033[0m");
                printf("\n");
                display();
            }

    }

    return 0;
}



int display(){
    int choice,askOption = 0;

    while(askOption == 0){
        printf(">> Select Account : \n");
        printf("\t>> Press 1 : Email\n");
        printf("\t>> Press 2 : Instagram\n");
        printf("\t>> Press 3 : Ineuron\n");
        printf("\t>> Press 4 : Amazon\n");

        printf(">> Enter Here : ");
        scanf("%d",&choice);
        printf("\n");

        switch (choice){
        //Cases
        case 1:
                printf("\033[0;34m");
                printf("\t>> EMAIL\n");
                printf("\033[0m");
                printf("\t>> ID : abc@gmail.com\n");
                printf("\t>> Password : 123 \n");
                break;
        case 2:
                printf("\033[0;34m");
                printf("\t>> INSTAGRAM\n");
                printf("\033[0m");
                printf("\t>> ID : addy__242\n");
                printf("\t>> Password : 123 \n");
                break;
        case 3:
                printf("\033[0;34m");
                printf("\t>> INEURON\n");
                printf("\033[0m");
                printf("\t>> ID : abc@gmail.com\n");
                printf("\t>> Password : 123 \n");
                break;
        case 4:
                printf("\033[0;34m");
                printf("\t>> AMAZON\n");
                printf("\033[0m");
                printf("\t>> ID : abc@gmail.com\n");
                printf("\t>> Password : 123 \n");
                break;
        default:
                printf("\033[0;32m");
                printf(">> Choice other than 1, 2 and 3");
                printf("\033[0m");
                break;
        }

        printf("\n");
        printf("Do you want to continue ?\n");
        printf("\tPress 1 : Exit\n");
        printf("\tPress 0 : Continue\n");

        scanf("%d",&askOption);
        if(askOption != 0) break;

    }
return 0;
}

