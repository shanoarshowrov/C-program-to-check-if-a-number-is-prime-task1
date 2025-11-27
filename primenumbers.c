#include<stdio.h>
int main ()
{
 int i,n,count=0;
 printf("## Check a Number is Prime or Not Prime ##\n");
 printf("Enter a Number=");
 scanf("%d",&n);
 for (i=1;i<=n;i++){

    if(n%i==0)
    {
        count++;

    }
 }
 if(count/2==1)
 {
    printf("%d is a Prime Number");
 }
 else
 {
    printf("%d is Not a Prime Number");
 }


    return 0;

     /*code by Md Shanoar Showrov
    BSc in CSE , Leading University
    Email:- ishowrov4@gmail.com */
    

}
