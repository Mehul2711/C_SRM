#include <stdio.h>
int main()  
{  
    int num1, num2, num3, num4;  
    int sum, sub, mult, mod;  
    float div;  
    int x=12, y=1; 
    int a=5, b=23, c;
    int m=24, n=65, o=34;
    int j=5, k=5, l=10, result;
    int u=12, v=25;
      

    //ARITHMATIC OPERATORS
    printf("1. Input any four numbers separated by comma : ");  
    scanf("%d,%d,%d,%d", &num1, &num2, &num3, &num4);  
    sum = num1 + num2 + num3 + num4;    
    mult = num1 * num2 * num3 * num4;   
    printf("The sum of the given numbers : %d\n", sum);  
    printf("The product of the given numbers : %d\n\n", mult);

    //INCREMENT AND DECREMENT OPERATORS
    printf("2. Initial value of x = %d\n", x); 
    printf("   Initial value of y = %d\n\n", y); 
    y = ++x;
    printf("   After incrementing by 1: x = %d\n", x);
    printf("   y = %d\n\n", y);
    y = --x; 
    printf("   After decrementing by 1: x = %d\n", x);
    printf("   y = %d\n\n", y);

    // ASSIGNMENT OPERATORS  
    c=a;  
    printf("3. c=%d\n",c);
    c*=b;
    printf("   c=%d\n\n",c);

    // RELATIONAL OPERATORS
    printf("4. %d > %d is %d\n",m,n,(m>n));
    printf("   %d < %d is %d\n\n",m,o,(m<o));

    // LOGICAL OPERATORS
    result= (j==k) && (l>k) && (j<l);
    printf("5. (j==k) && (l>k) is %d \n", result);
    result= (j==k) && (l<j) && (k<l);
    printf("   (j==k) && (l<j) is %d \n\n", result);

    // BITWISE AND OPERATOR & 
    printf("6. Output = %d", u&v);
    
  return 0;   
}