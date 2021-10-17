// 2.3#include <stdio.h>
// int main()
// {
//     int i ;
//     for ( i = 1; i <= 100; i++)
//     {
//         if (i%2==0)
//         {
//             printf("%d\n ", i);
//         }

//     }
//     return 0;
// }

// 2.8#include <stdio.h>
// int main()
// {
//     float x, y;
//     scanf("%f%f", &x, &y);
//     int z = x + y;
//     printf("%.2f\n", x);
//     printf("%.2f\n", y);
//     printf("%d", z);
//     return 0;
// }

//2.7 #include <stdio.h>       //problem
// int main()
// {
//      int x= 123456, y= 123456;

//     short int z = x + y;
//     printf("%hd", z);
//     return 0;
// }

//2.5 #include <stdio.h>
// int main()
// {
//     float r, s;
//     scanf("%f%f", &r, &s);
//     printf("***LIST OF ITEMS***\n");
//     printf("Item  price\n");
//     printf("Rice  Rs %.2f\n", r);
//     printf("Suger Rs %.2f", s);

//     return 0;
// }

// 2.4#include <stdio.h>
// int main()
// {
//     float x, y;
//     scanf("%f%f", &x, &y);
//     float z = x / y;
//     printf("%f\n",x);
//     printf("%f\n",y);
//     printf("%.2f",z);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float f_number = 15.95;

//     int i_number = f_number * 100;
//     printf("%d", i_number);

//     return 0;
// }

// 2.1#include <stdio.h>
// double sum(int n)
// {
//     double sum = 0.0, i;

//     for (i = 1; i <= n; i++)
//     {
//         sum += 1 / i;
//     }

//     return sum;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%f\n", sum(n));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float numbers[5];
//     int j, p = 0, n = 0;
//     printf("\nInput the  number: ");
//     scanf("%f%f%f%f%f", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

//     for (j = 0; j < 5; j++)
//     {
//         if (numbers[j] > 0)
//         {

//             p++;
//         }
//         else if (numbers[j] < 0)
//         {
//             n++;
//         }
//         else if (numbers[j] = 0)
//         {
//             break;
//         }
//     }
//     printf("\nNumber of positive numbers: %d", p);
//     printf("\nNumber of negative numbers: %d", n);
//     printf("\n");
//     return 0;
// }

// #include<stdio.h>

// #define TRUE 1

// #define PI 3.141593

// void main()

// {

//     float a;

//     float b;

//     float c;

//     float d = PI;

    

//     if (TRUE)

//     {

//         a = 100;

//         b = a * 10;

//         c = b - a;
//     }

//     printf("\na=%f\nb=%f\nc=%f\nPI=%f", a, b, c, d);
// }

#include <stdio.h>
int main()
{
    typedef unsigned int unit;
    unit i,j;
    i = 10;
    j=20;
    printf("value of i = %d\n",i);
    printf("value of j = %d\n",j);
    return 0;
}

