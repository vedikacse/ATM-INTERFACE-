# ATM-INTERFACE-
Launched a project | ATM INTERFACE System 
 I'm excited to share the ATM INTERFACE project 
I recently developed as part of learning journey at Government College of engineering yavatmal (CSE)

project Overview: 
this is a console -based ATM simulation system built using C langauge.it offer's basic Banking features that simulates real-world ATM INTERFACE operations.

key features:
secure login using card 
Number and PIN verification 

Balance inquiry 
withdraw cash (with sufficient balance check)

Deposite cash

change pin 

(validates old pin)

Advantages:
provided a practical understanding of object oriented programming (OOP)


Enhanced skills in user input handling, conditional check,and data storage 

This is my first code in C-Rush2.0

#include <stdio.h>
int main()
{
    int pin;
    int amount; 
    int key;
    int balance = 50000;

    printf("      🙏Welcome🙏\n");
    printf("   🏦Bank of Baroda🏦\n      ");
    printf("(Ring road Yavatmal, Maharashtra)\n");
    printf("🎫 NO:1234567891213145\n");
    printf("Enter your PIN number:\n");
    scanf("%d", &pin); // make sure nobody is watching you while enter your code 
    //wrong pin may lead to blockage.
    
    printf("1. Withdraw\n");
    printf("2. Deposit\n");
    printf("3. Check balance\n");
    printf("4.change pin number\n");
    printf("Enter your choice: ");
    scanf("%d", &key);

    switch (key)
    {
    case 1:
    printf("Balance is Rs %d\n", balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);
    if (amount > balance)
    {
    printf("Invalid amount\n");
    }
    else
    {
    balance=balance-amount;//for withdraw 
    printf("Your balance is: %d\n", balance);
    }
    break;

    case 2:
    printf("Enter deposit amount: ");
    scanf("%d", &amount);
    balance=balance+amount;// for deposite 
    printf("Your balance is: %d\n", balance);
    break;

   case 3:
   printf("Your balance is: %d\n", balance);
   break;
   
   case 4:
   printf("Enter your new pin number\n");
   scanf("%d",&pin );
   break;
   
   default:
   printf("Invalid option\n");
   }
printf("🙏THANK YOU for using our ATM 🙏");
    return 0;
}






output:
🙏Welcome🙏
   🏦Bank of Baroda🏦
      (Ring road Yavatmal, Maharashtra)
🎫 NO:1234567891213145
Enter your PIN number:
1233
1. Withdraw
2. Deposit
3. Check balance
4.change pin number
Enter your choice: 1
Balance is Rs 50000
Enter withdrawal amount: 500
Your balance is: 49500
🙏THANK YOU for using our ATM 🙏
[Process completed - press Enter]
