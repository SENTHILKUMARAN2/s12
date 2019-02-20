#include <stdio.h>

int main()
{
   int n, rev = 0, temp;

   printf("Enter a number to check if it is a palindrome or not\n");
   scanf("%d",&n);

   temp = n;

   while( temp != 0 )
   {
      rev = rev * 10;
      rev = rev + temp%10;
      temp = temp/10;
   }

   if ( n == rev )
      printf("%d is a palindrome numr asce .\n", n);
   else
      printf("%d is not a palindrome numrasce .\n", n);

   return 0;
}
