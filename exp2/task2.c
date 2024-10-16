#include <stdio.h>
int main(){ 
    int num1, num2,  sum = 0;  
  
    printf("Enter a integer number\n");  

    printf("From:");
    scanf("%d", &num1);  
    printf("To:");
    scanf("%d", &num2);  
  
    while(num1 <= num2)  
    {  
        if(num1%2 != 0)  
        {  
            sum = sum + num1;  
        }  
        num1++;  
    }  
  
    printf("Sum of ODD integer number is %d\n", sum);  

    return 0;
}
