#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
void startOfCall();
void description();
void main()
{
    description();
    startOfCall();



}
void startOfCall()
{
    int ch,choice;

    printf("PLEASE CHOOSE YOUR LANGUAGE FOR THE USER INTERFACE\n\n");
    intro_lang();

}

void display_menu()
{
    int ch,choice;
    printf("\n\n\t------NOW WE HAVE INTRODUCED VARIOUS FACILITIES FOR OUR CUSTOMER------\t\n\n");
    printf("\n\n1.To know your bill press 1\n");
    printf("2.For porting request press 2\n");
    printf("3.To talk to our customer care executive press 3\n");
    printf("4.To go back to previous menu press 9\n");
    printf("5.To exit press 0\n");
    printf("------------PLESE ENTER YOUR CHOICE----------------\n");
    scanf("%d",&ch);
    switch(ch)
    {
        system("cls");
    case 1:
        display_bill();
        back();
        break;
    case 2:
        portin_request();
        back();
        break;
    case 3:
        customer_call();
        back();
        break;
    case 4:
        intro_lang();
        break;
    case 5:
        exit(0);
        break;
    default:
        printf("\n\t WRONG CHOICE ENTERED\n");


    }


}


void display_bill()
{
    system("cls");
    printf("\n\t----------WELCOME TO BILL INFORMATION ZONE-----------------\n");
    printf("\n\t----------YOUR CURRENT OUTSTANDING BILL IS: 800------------\n");
}
void portin_request()
{
    char ch;
    system("cls");
    printf("\n\t----------WELCOME TO MOBILE NUMBER PORTABILITY ZONE-----------\n");
    printf("\n\t----------WOULD YOU LIKE TO PORTIN YOUR NUMBER----------------\n");
    printf("\n\t----------PRESS 'Y' FOR YES OR 'N' FOR NO-------------------------\n");
    scanf("%c",&ch);
    if(ch=='Y')
    {
        printf("\n\t --------------YOUR NUMBER PORTIN IS UNDER PROCESS-------------\n");
    }
    if(ch=='N')
    {
        return 0;
    }

}
void back()
{
    int ch1;
    printf("\n\t---------TO GO BACK TO PREVIOUS MENU PLEASE PRESS 9 -----------\n");
    printf("\n\t---------TO END THE CALL PLEASE PRESS 0 -----------\n");
    scanf("%d",&ch1);
    switch(ch1)
    {
    case 9:
        system("cls");
        display_menu();
        break;
    case 0:
        system("cls");
        printf("\n\t------------THANK YOU FOR CALLING AIRCON INDIA PVT LTD--------------\n");
        exit(0);
        break;
    }
}
void customer_call()
{
    int i,j;
    printf("\n\t-----PLEASE WAIT, WHILE WE CONNECT YOUR CALL TO OUR CUSTOMER CARE EXECUTIVE-----\n");
    for(i=0; i<20; i++)
    {
        for(j=0; j<20; j++)
        {}
    }
    for(i=0; i<50; i++)
    {
        printf(".");
        system("cls");
        printf("..");
        system("cls");
        printf("...");
        system("cls");
        printf("....");
        system("cls");


    }
    printf("\n\t----SORRY, BUT ALL OUR LINES ARE BUSY-------\n");
    printf("\n\t----PLEASE TRY AGAIN AFTER SOMETIME---------\n");
}
void intro_lang()
{
    int ch;
    printf("\t 1.TO CONTINUE IN ENGLISH PLEASE PRESS 1\n");
    printf("\t 2.TO CONTINUE IN HINDI PLEASE PRESS 2\n");
    printf("\n\t-------PLEASE PROVIDE THE INPUT--------\n");
    scanf("%d",&ch);
    system("cls");
    switch(ch)
    {
    case 1:
        display_menu();
        break;
    case 2:
        display_menu_hindi();
        break;

    }
}
void description()
{

    printf("\n----------------WELCOME TO AIRCON INDIA PVT LTD---------------------------------\n");
    printf("\n------------------WE ARE HAPPY TO HELP YOU--------------------------------------\n");

}
void display_menu_hindi()
{
    int ch,choice;
    printf("\n\n\t------HUMNE APNE CUSTOMERS KE LIYE NAYE SUVIDHA NIKALE HAIN------\t\n\n");
    printf("\n\n1.APNE BILL HETU JANKARI KE LIYE 1 DABAYE\n");
    printf("2.NUMBER PARIVARTAN KE LIYE 2 DABAYE\n");
    printf("3.CUSTOMER CARE EXECUTIVE SE BAAT KARNE KE LIYE 3 DABAYE\n");
    printf("4.PICHLE MENU KE LIYE 9 DABAYE\n");
    printf("5.CALL KHATAM KARNE KE LIYE 0 DABAYE\n");
    printf("------------APNA CHOICE BATAYE----------------\n");
    scanf("%d",&ch);
    switch(ch)
    {
        system("cls");
    case 1:
        display_bill1();
        back1();
        break;
    case 2:
        portin_request1();
        back1();
        break;
    case 3:
        customer_call1();
        back1();
        break;
    case 4:
        system("cls");
        intro_lang();
        break;
    case 5:
        return 0;

    default:
        printf("\n\t WRONG CHOICE ENTERED\n");

    }


}


void display_bill1()
{
    system("cls");
    printf("\n\t---------- BILL JANKARI ZONE MEIN APKA SWAGAT HAIN-----------------\n");
    printf("\n\t----------APKA  CURRENT OUTSTANDING BILL HAIN: 800------------\n");
}
void portin_request1()
{
    char ch;
    system("cls");
    printf("\n\t---------- MOBILE NUMBER PORTABILITY ZONE MEIN APKA SWAGAT HAIN-----------\n");
    printf("\n\t----------KYA AAP NUMBER PORTIN KARNA CHAHEGE----------------\n");
    printf("\n\t----------KRIPYA 'Y' YES  KE LIYE DABAYE OR 'N' FOR NAHI-------------------------\n");
    scanf("%c",&ch);
    if(ch=='Y')
    {
        printf("\n\t --------------APKA NUMBER PORTIN   PROCESS MEIN LAG GYA HAIN-------------\n");
    }
    if(ch=='N')
    {
        return 0;
    }

}
void back1()
{
    int ch1;
    printf("\n\t---------PICHLE MENU KE LIYE PRESS 9 DABAYE -----------\n");
    printf("\n\t---------CALL KHATAM KE LIYE PRESS 0 DABAYE -----------\n");
    scanf("%d",&ch1);
    switch(ch1)
    {
    case 9:
        system("cls");
        display_menu_hindi();
        break;
    case 0:
        system("cls");
        printf("\n\t------------APKA DHANYAWAD  AIRCON INDIA PVT LTD MEIN CALL KARNE KE LIYE--------------\n");
        exit(0);
        break;
    }
}
void customer_call1()
{
    int i,j;
    printf("\n\t-----WAIT KARRE, HUM AAPKI CALL CONNECT KRR RHE HAIN---\n");
    for(i=0; i<20; i++)
    {
        for(j=0; j<20; j++)
        {}
    }
    for(i=0; i<50; i++)
    {
        printf(".");
        system("cls");
        printf("..");
        system("cls");
        printf("...");
        system("cls");
        printf("....");
        system("cls");


    }
    printf("\n\t----MAAF KARRE, HUMARI SAARI LINES BUSY HAIN-------\n");
    printf("\n\t----KRIPYA THODI DER BAAD  TRY KARRE---------\n");
}
