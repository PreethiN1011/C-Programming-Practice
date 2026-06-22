1. Odd or Even

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

2. Largest of Three Numbers

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b && a >= c)
        printf("%d", a);
    else if(b >= c)
        printf("%d", b);
    else
        printf("%d", c);
    return 0;
}

3. Calculator Using switch-case
  
#include <stdio.h>
int main()
{
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch(op)
    {
        case '+': 
          printf("%d", a+b);
          break;
        case '-': 
          printf("%d", a-b);
          break;
        case '*':
          printf("%d", a*b); 
          break;
        case '/': 
          printf("%d", a/b); 
          break;
        default: printf("Invalid");
    }
    return 0;
}

4. Star Pattern

#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}

5. Multiplication Table

#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for(i=1; i<=10; i++)
        printf("%d x %d = %d\n", n, i, n*i);
    return 0;
}

