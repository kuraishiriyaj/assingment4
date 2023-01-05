#include<stdio.h>
/*              ******
                *****
                ****
                ***
                **
                * */
int main()
{
int num;
int i,j;
printf("enter is the number");
scanf("%d",&num);
for( i=num;i>=1;i--)
{
 for( j=i;j>=1;j--)
 {
     printf("*");


 }
 printf("\n");
}
return 0;
}
