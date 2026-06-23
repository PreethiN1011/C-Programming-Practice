1. Add Two Numbers 

#include <stdio.h> 
int main() 
{ 
    int a, b, sum; 
    printf("Enter two numbers: "); 
    scanf("%d %d", &a, &b); 
    sum = a + b; 
    printf("Sum = %d", sum); 
    return 0; 
} 

2. Swap Two Numbers (Using Temporary Variable)

#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping=\n",a,b);
     printf("a = %d\n", a); 
    printf("b = %d\n", b);
    return 0;
}

3. Swap Two Numbers (Without Temporary Variable) 

#include <stdio.h> 
int main() 
{ 
    int a, b; 
    printf("Enter two numbers: "); 
    scanf("%d %d", &a, &b); 
    a=a+b;
    b=a-b;
    a=a-b;
        printf("After swapping:\n"); 
    printf("a = %d\n", a); 
    printf("b = %d\n", b); 
    return 0; 
} 
4. Largest of Three Numbers 

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers=\n",a,b,c);
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
        printf("largest is %d",a);
        else if(b>=a && b>=c)
        printf("largest is %d",b);
        else
        printf("largest is %d",c);
    return 0;
}

5. Even or Odd Number 

#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num % 2 ==0)
    printf("Even");
    else
    printf("Odd");
    return 0;
}

6. Simple Calculator Using Switch 

#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("enter operator(+,-,*,/)=");
    scanf("%c",&op);
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
  
    switch(op)
    {
        case'+':
        printf("Result=%d",a+b);
        break;
        
        case'-':
        printf("Result=%d",a-b);
        break;
        
        case'*':
        printf("Result=%d",a*b);
        break;
        
        case'/':
        printf("Result=%d",a/b);
        break;
        
        default:
        printf("invalid operator");
    }
    return 0;
}
