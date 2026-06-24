1.Reverse a Number 
#include <stdio.h>  
int main() 
{ 
    int num, rev = 0, rem;  
    scanf("%d", &num); 
    while(num != 0) 
    { 
        rem = num % 10; 
        rev = rev * 10 + rem; 
        num = num / 10; 
    }  
    printf("%d", rev); 
    return 0; 
} 

2. Palindrome Number 

#include <stdio.h>  
int main() 
{ 
    int num, temp, rev = 0, rem;
    scanf("%d", &num);  
    temp=num;
    while(num != 0) 
    { 
        rem = num % 10; 
        rev = rev * 10 + rem; 
        num = num / 10; 
    } 
    if(temp == rev) 
        printf("Palindrome"); 
    else 
        printf("Not Palindrome"); 
    return 0; 
}  

3. Armstrong Number

#include <stdio.h>  
int main() 
{ 
  int num, temp, rem, sum = 0; 
    scanf("%d", &num);  
    temp = num;  
    while(num != 0) 
    { 
        rem = num % 10; 
        sum = sum + (rem * rem * rem); 
        num = num / 10; 
    }  
    if(sum == temp) 
        printf("Armstrong"); 
    else 
        printf("Not Armstrong"); 
    return 0; 
} 

4. Factorial 
  
#include<stdio.h>
int main()
{
    int n,i;
    long long factorial=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial of %d= %lld",n,factorial);
    return 0;
}

5. Fibonacci Series 

#include<stdio.h>
int main()
{
  int n,a=0,b=1,c,i;
  scanf("%d",&n);
  printf("%d %d",a,b);
for(i=3;i<=n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
return 0;
}

6. Sum of Digits 

#include <stdio.h>  
int main() 
{ 
    int num, sum = 0, rem;  
    scanf("%d", &num);  
    while(num != 0) 
    { 
        rem = num % 10; 
        sum = sum + rem; 
        num = num / 10; 
    }  
    printf("%d", sum); 
    return 0; 
} 
