#include <stdio.h>
//int no_of_transactions(int i);
int main()
{int n,income;
int i=0;
 int total_money_transfers,total_upi, total_cash,total_online_banking;
printf("please enter your income(monthly)\n");
scanf("%d",&income);
printf("enter the number of payments you have done in the day\n");
scanf("%d",&n);
printf("please choose the mode of transactions from the list below\n1.UPI PAYMENT\n2.PAID THROUGH CASH\n3.ONLINE BANKING\n4.MONEY TRANSFERS(offered to someoeone/donating to charity/spend upon others)\n");
    int upi_payments[n];
    int cash[n];
    int online_banking[n];
    int money_transfers[n];
int choice;
for(i=0;i<n;i++){
printf("TRASACTION %d\n",i+1);
printf("enter your choice\n");
do{
scanf("%d",&choice);
if(choice>4||choice<1){
    printf("please enter the right choice\n");
}
}
while(choice>4||choice<1);
switch(choice){                
    case 1: printf("enter the amount paid through UPI payments\n");
        scanf("%d",&upi_payments[i]);
        total_upi+=upi_payments[i];
        break;
    case 2: printf("enter the amount paid through cash\n");
        scanf("%d",&cash[i]);
        total_cash+=cash[i];
        break;
    case 3: printf("enter amount of transactions through online banking\n");
        scanf("%d",&online_banking[i]);
        total_online_banking+=online_banking[i];
        break;
    case 4: printf("enter the any another money transactions\n");
        scanf("%d",&money_transfers[i]);
        total_money_transfers+=money_transfers[i];
        break;
}               
}

//printf("total upi payemnts = %d\ntotal cash payments = %d\ntotal online banking = %d\ntotal other money transfers = %d\n",
//total_upi,total_cash,total_online_banking,total_money_transfers);
int sum_of_transactions;
sum_of_transactions=total_upi+total_cash+total_online_banking+total_money_transfers;
//printf("%d\n",sum_of_transactions);
if(sum_of_transactions>=(income/2)){
    printf("you are diddling your income, leesen your expendicture\nDON'T STEAL YOURSELF FROM BEING THE WISEST CONSERVATIVE 🙂\a");
}
else{
    printf("Enjoy the life\nLIFE IS VERY SHORT TO EXPLORE TOO MANY THINGS \n\a");
}
    return 0;
}