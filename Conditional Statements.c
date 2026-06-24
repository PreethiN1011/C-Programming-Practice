1. Check Leap Year 

#include<stdio.h>
int main()
{
    int year;
    printf("Enter a Year:");
    scanf("%d",&year);
    if((year%400==0) || (year % 4==0 && year % 100!=0))
    printf("Leap year");
    else
     printf("Not a leap year");
     return 0;
}

2. Grade Calculation System 

#include<stdio.h>
int main()
{
    int marks;
    printf("enter a number:");
    scanf("%d",&marks);
    
    if(marks>=90)
    printf("GRADE A");
    else if(marks>=80)
    printf("GRADE B");
    else if(marks>=70)
    printf("GRADE C");
    else if(marks>=60)
    printf("GRADE D");
    else
    printf("FAIL");
    return 0;
}

3. Electricity Bill Calculation 

#include<stdio.h>
int main()
{
    int units;
    float bill;
    
    printf("enter units consumed:");
    scanf("%d",&units);
    
    if(units<=100)
    bill=units * 1.5;
    else if(units<=200)
    bill=(100*1.5)+((units-100)*2.5);
    else 
    bill=(100*1.5)+(100*2.5)+((units-200)*4);
    printf("Electricity Bill = Rs %.2f", bill); 
 
    return 0; 
}

4. Find Greatest Among 3 Numbers 

#include <stdio.h> 
 
int main() 
{ 
    int a, b, c; 
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &a, &b, &c);  
    if(a >= b && a >= c) 
        printf("%d is Greatest", a);  
    else if(b >= a && b >= c) 
        printf("%d is Greatest", b); 
    else 
        printf("%d is Greatest", c); 
    return 0; 
} 

5. Check Character Type (Vowel / Consonant / Digit / Special Character)

#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("VOWEL");
        else
         printf("CONSONANT");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("DIGITS");
    }
    else
    {
        printf("SPECIAL CHARACTERS");
    }
    return 0;
}
