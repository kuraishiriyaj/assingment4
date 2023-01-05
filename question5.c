#include<stdio.h>
/* write a program t print the frist 10 odd natural
numbers in reverse order ?
*/
int main()
{
int i;
printf("enter is the 10 odd natural number in reverse order\n");
for(i=10;i>=1;i--)
{
    
    printf("%d\n",(2*i-1));
}
    return 0;
}