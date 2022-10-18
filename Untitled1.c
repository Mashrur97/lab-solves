#include<stdio.h>
int main()
{

int amount,n500,r500,n100,r100,n50,r50,n20,r20,n10,r10,n5,r5,n2,r2,n1,r1;
//n500 means the number of 500 taka notes
//r500 means the remainder of the amount

printf("Enter amount:");
scanf("%d",&amount);

n500=amount/500;
r500=amount%500;

n100=r500/100;
r100=r500%100;

n50=r100/50;
r50=r100%50;

n20=r50/20;
r20=r50%20;

n10=r20/10;
r10=r20%10;

n5=r10/5;
r5=r10%5;

n2=r5/2;
r2=r5%2;

n1=r2/1;
r1=r2%1;

printf("Total number of notes:\n500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n",n500,n100,n50,n20,n10,n5,n2,n1);

 return 0;
}
