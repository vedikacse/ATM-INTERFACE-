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
