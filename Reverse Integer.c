/*This code helps to reverse a number
which can negative or positive but if after
reversing the number it exceeds the following 
contraints :

  2^-31<=reverse<=2^31-1 it should return zero*/

/* Test Cases:- 

Input:- 123

Output:- 321

Input:- -123

Output:- -321

Input:- 120

Output:- 21

*/

#include <stdio.h>

#include <math.h>

int reverse_num(int a);

int main (){

int x = -120, rev, lower, upper;

if(x<0){

x *= -1;

rev = -(reverse_num(x));

}

else{

rev = reverse_num(x);

}

lower = pow(-2,31);

upper = pow(2,31)-1;

if (lower<=rev<=upper){

printf("%d",rev);

}

else{

printf("0");

}

return 0;

}

int reverse_num(int a){

int rem,reverse,i = 0;

while (i<a){

rem = a % 10;

reverse = reverse* 10 + rem;

a/=10;

}

return reverse;

}
