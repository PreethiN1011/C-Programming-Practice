Swap Two Numbers Using Pointers 

#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    printf("x = %d, y = %d", x, y);
    return 0;
}

2. Find Largest Element in an Array Using Pointers

#include <stdio.h>
int main()
{
    int arr[] = {10, 25, 5, 40, 15};
    int *ptr = arr;
    int max = *ptr;
    for(int i = 1; i < 5; i++)
    {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }
    printf("Largest = %d", max);
    return 0;
}

3. Sum Array Elements Using Pointers

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
    }
    printf("Sum = %d", sum);
    return 0;
}

4. Reverse an Array Using Pointers 

#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *start = arr;
    int *end = arr + 4;
    int temp;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}

5. Pass a Variable to a Function Using Pointers

#include <stdio.h>
void change(int *x)
{
    *x = 100;
}
int main()
{
    int a = 10;
    change(&a);
    printf("%d", a);
    return 0;
}

