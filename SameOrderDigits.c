#include <stdio.h>

 void check( long i) {

              i/=10;
              if(i>0)
              check(i);
              if(i>0)
             printf("%ld\t",i%10);
             
}

int main()
{

   long n;
   printf("Enter a Number : ");
   
   scanf("%ld",&n);
   if(n==0)
     printf("0");
   else
   {
   n=n*10;
   check(n);
   }
return 0;


}

