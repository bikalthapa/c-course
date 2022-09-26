// Operators In C programming //
#include<stdio.h>
int main(){
// Arithmetic Operator //
int a = 10, b = 20;
printf("\n\na = %d and b = %d\t(For Arithmetic Operator)\n",a,b);
printf("a + b = %d\n",a+b);
printf("a - b = %d\n",a-b);
printf("a * b = %d\n",a*b);
printf("a / b = %d\n",a/b);
printf("a %% b = %d\n",a%b);


// Relational Operator //
int c = 20, d = 10;
printf("\n\nc = %d and d = %d\t(For Relational Operator)\n",c,d);
printf("c < d = %d\n",c<d);
printf("c > d = %d\n",c>d);
printf("c <= d = %d\n",c<=d);
printf("c >= d = %d\n",c>=d);
printf("c == d = %d\n",c==d);
printf("c != d = %d\n",c!=d);


// Logical Operator //
int e = 30, f = 20;
printf("\n\n e = %d and f = %d\t (For Logical Operator)\n",e,f);
printf("(e>f)&&(e>=f) is %d\n",(e>f)&&(e>=f));
printf("(e<f)||(e==f) is %d\n",(e<f)||(e==f));
printf("(e!=f)!=(e<f) is %d\n",(e!=f)!=(e<f));


// Bitwise Operator //
int g = 40, h = 20;
printf("\n\n g = %d and h = %d\t (For Bitwise Operator)\n",g,h);
printf("g & h  is %d\n",g&h);
printf("g | h is %d\n",g|h);
printf("g ^ h is %d\n",g^h);
printf("g << h is %d\n",g<<h);
printf("g >> h is %d\n",g>>h);
printf("~g is %d\n",~g);

// Increment And Decrement Operator //
int u = 10, x = 20;
printf("\n\n u = %d and x = %d\t (For Increment and decrement Operator)\n", u,x);
printf("++a is %d\n",++a);
printf("--b is %d\n",--b);

	return 0;
}
