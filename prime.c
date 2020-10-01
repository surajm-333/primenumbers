#include <stdio.h>
int primeno(int, int); 
int main()
{
    int num,check;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num==1)
    {
        printf("1 is neither prime nor composite number");
        return 0;
    }
    check = primeno(num, num / 2);
    if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
 
int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }       
    }
}
