#include <stdio.h> 
int main()
{
    int a, b;   
    printf("Input two integers\n");
    scanf("%d%d", &a, &b);
    //logic   
    a = a + b;
    b = a - b;
    a = a - b; 
    printf("Entered number after swapping:");
    printf("%d %d",a,b);
    return 0;
} 