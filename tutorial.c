task: output Hello World
code:
#include <stdio.h>

int main()
{
    printf("Hello world");
    
    return 0;
}
output:
Hello world

task: input and output numbers
code:
#include <stdio.h>

int main()
{	
	int num1, num2;

	printf("Enter numbers ");
	
	scanf("%d %d", &num1, &num2);
	
	printf("You numbers %d and %d", num1, num2);
	
	return 0;
}
output:
Enter numbers 5 5
You numbers 5 and 5

task: input and output character
code:
#include <stdio.h>

int main()
{	
	char ch;

	printf("Enter a character ");
	
	scanf("%c", &ch);
	
	printf("Your character %c", ch);
	
	return 0;
}
output:
Enter a character z
Your character z

task: input and output your name
code:
#include <stdio.h>

int main()
{	
	char string[50];

	printf("Enter your name ");
	
	gets(string);
	
	printf("Welcome %s", string);
	
	return 0;
}
output:
Enter your name ferbl ferbl
Welcome ferbl ferbl

task:
1) input the number
2) compare inputted number
if the number is less than 100, display "Number is less than 100"
if the number is 100, display "Number is 100"
if the number is greater than 100, display "Number is greater than 100"
code:
#include <stdio.h>

int main()
{	
	int number;
	
	printf("Enter a number ");
	scanf("%d", &number);
	
	if(number < 100)
	{
		printf("Number is less than 100");
	}
	else if(number == 100)
	{
		printf("Number is 100");
	}
	else
	{
		printf("Number is greater than 100");
	}
	
	return 0;
}
output:
Enter a number 5
Number is less than 100
output:
Enter a number 100
Number is 100
output:
Enter a number 299
Number is greater than 100

task: 
1) input your grade
2) compare inputted grade
if the grade is A, display "Excellent"
if the grade is B, display "Keep it up" etc. 
if the grade is not equal to A B C D F, display "Invalid grade"
code:
#include <stdio.h>

int main()
{	
	char grade;
	printf("Enter your grade ");
	scanf("%c", &grade);
	
	switch(grade)
	{
		case 'A':
			printf("Excellent");
			break;
		
		case 'B':
			printf("Keep it up");
			break;
		
		case 'C':
			printf("Well done");
			break;
		
		case 'D':
			printf("You passed");
			break;
		
		case 'F':
			printf("Better luck next time");
			break;
		
		default:
			printf("Invalid grade");
	}
	
	return 0;
}
output:
Enter your grade A
Excellent
output:
Enter your grade D
You passed
output:
Enter your grade z
Invalid grade

task:
1) input your char
2) compare inputted char
if the grade is a A e E i I o O u U, display "is a vowel"
if the grade is not a A e E i I o O u U, display "is not vowel"
code:
#include <stdio.h>

int main()
{	
	char ch;
	printf("Enter your char ");
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			printf("%c is a vowel", ch);
			break;
			
		default:
			printf("%c is not vowel", ch);
	}
	
	return 0;
}
output:
Enter your char a
a is a vowel
output:
Enter your char z
z is not vowel

task:
add library <ctype.h>, 
islower(ch) is a lowercase character?
toupper(ch), char to uppercase
tolower(ch), char to lowercase
if the char is lowercase, display uppercase
if the char is uppercase, display lowercase
code:
#include <stdio.h>
#include <ctype.h>

int main()
{	
	char ch;
	printf("Enter your char ");
	ch = getchar();
	
	if(islower(ch))
	{
		printf("Reverse char %c", toupper(ch));
	}
	else
	{
		printf("Reverse char %c", tolower(ch));
	}
	
	return 0;
}
output:
Enter your char d
Reverse char D

task:
swap two numbers
code:
#include <stdio.h>

int main()
{	
	int x = 5;
	int y = 55;
	int temporary;
	
	temporary = x;
	x = y;
	y = temporary;
	
	printf("x = %d \n", x);
	printf("y = %d \n", y);
	
	return 0;
}
output:
x = 55
y = 5

task:
find the greatest and smallest number
code:
#include <stdio.h>

int a;
int b;

int main()
{	
	printf("Enter the two number to find the greatest and smallest number ");
	
	scanf("%d %d", &a, &b);
	
	if(a == b)
	{
		printf("The numbers are equal");
	}
	else if(a > b)
	{
		printf("%d greatess \n", a);
		printf("%d smallest \n", b);
	}
	else
	{
		printf("%d smallest \n", a);
		printf("%d greatess \n", b);
	}
	
	return 0;
}
output:
Enter the two number to find the greatest and smallest number 55 5
55 greatess
5 smallest
output:
Enter the two number to find the greatest and smallest number 15 100
15 smallest
100 greatess
output:
Enter the two number to find the greatest and smallest number 5 5
The numbers are equal

task:
display numbers from 0 to 9
if x is less 10 then a is increased by 1
code:
#include <stdio.h>

int main()
{	
	int x = 0;
	
	for(x = 0; x < 10; x++)
	{
		printf("x = %d \n", x);
	}
	
	return 0;
}
output:
x = 0
x = 1
x = 2
x = 3
x = 4
x = 5
x = 6
x = 7
x = 8
x = 9

task:
display numbers from 0 to 9
if x is less 10 then a is increased by 1
code:
#include <stdio.h>

int main()
{	
	int x = 0;
	
	while(x < 10)
	{
		printf("x = %d \n", x);
		
		x++;
	}
	
	return 0;
}
output:
x = 0
x = 1
x = 2
x = 3
x = 4
x = 5
x = 6
x = 7
x = 8
x = 9

task:
display numbers from 10 to 1
decrement x by 1
if x is more 0
repeat the cycle
code:
#include <stdio.h>

int main()
{	
	int x = 10;
	
	do
	{
		printf("x = %d \n", x);
		
		x--;
	}
	while(x > 0);
	
	return 0;
}
output:
x = 10
x = 9
x = 8
x = 7
x = 6
x = 5
x = 4
x = 3
x = 2
x = 1

task:
display a rectangle
code:
#include <stdio.h>

int main()
{	
	int a;
	int b;
	
	for(a = 0; a < 5; a++)
	{
		for(b = 0; b < 3; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
output:
***
***
***
***
***

task:
calculate factorial
5! = 1 · 2 · 3 · 4 · 5 = 120
code:
#include <stdio.h>

int main()
{	
	int i;
	int n;
	int fact = 1;

	printf("Enter a number ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{		
		fact = fact * i;
		
		printf("i = %d \n", i);
		printf("fact = %d \n", fact);
	}
	
	printf("Factorial of %d is %d", n, fact);
	
	return 0;
}
output:
Enter a number 5
i = 1
fact = 1
i = 2
fact = 2
i = 3
fact = 6
i = 4
fact = 24
i = 5
fact = 120
Factorial of 5 is 120

task:
calculate the fibonacci
0 + 1 + 1 + 2 + 3 + 5
code:
#include <stdio.h>

void fibonacci(int num);

int main()
{	
	int num = 0;
	
	printf("Enter the number to calculate the fibonacci ");
	
	scanf("%d", &num);
	
	fibonacci(num);
	
	return 0;
}

void fibonacci(int num)
{
	int a = 0;
	int b = 1;
	int c;
	int i = 3;

	if(num == 1)
	{
		printf("%d", a);
	}
	
	if(num >= 2)
	{
		printf("%d %d ", a, b);
	}
	
	while(num >= i)
	{
		c = a + b;
		
		printf("%d ", c);
		
		a = b;
		b = c;
		
		i++;
	}
}
output:
Enter the number to calculate the fibonacci 6
0 1 1 2 3 5

task: reverse number 25
0 * 10 = 0
0 + (25 % 10 = 5) = 5
25 / 10 = 2.5 ~ 2

5 * 10 = 50
50 + (2 % 10 = 2) = 52
2 / 10 = 0.2 ~ 0
code:
#include <stdio.h>

int main()
{	
	int number;
	int reverse = 0;
	
	printf("Enter a number ");
	scanf("%d", &number);
	
	while(number != 0)
	{
		reverse = reverse * 10;
		printf("reverse1 = %d, number1 = %d \n", reverse, number);
		
		reverse = reverse + number % 10; 
		printf("reverse2 = %d, number2 = %d \n", reverse, number);
		
		number = number / 10;
		printf("reverse3 = %d, number3 = %d \n", reverse, number);
		
		printf("\n");
	}
	
	printf("Reverse number %d ", reverse);
	
	return 0;
}
output:
Enter a number 25
reverse1 = 0, number1 = 25
reverse2 = 5, number2 = 25
reverse3 = 5, number3 = 2

reverse1 = 50, number1 = 2
reverse2 = 52, number2 = 2
reverse3 = 52, number3 = 0

Reverse number 52

task:
check if the number is a palindrome
code:
#include <stdio.h>

int reverseNumber(int num);

int main()
{	
	int number;
	
	printf("Enter a number ");
	scanf("%d", &number);
	
	if(number == reverseNumber(number))
	{
		printf("The number %d is a polindrome", number);
	}
	else
	{
		printf("The number %d is not a polindrome", number);
	}
	
	return 0;
}

int reverseNumber(int num)
{
	int reverse = 0;
	
	while(num != 0)
	{
		reverse = reverse * 10;
		
		reverse = reverse + num % 10; 
		
		num = num / 10;
	}
	
	return reverse;
}
output:
Enter a number 121
The number 121 is a polindrome
output:
Enter a number 25
The number 25 is not a polindrome

task:
calculate the sum of all digits 123
1 + 2 + 3 = 6
code:
#include <stdio.h>

int main()
{	
	int number;
	int remainder;
	int sum;
	
	printf("Enter the number to calculate the sum of all digits ");
	scanf("%d", &number);
	
	while(number != 0)
	{
		remainder = number % 10;
		printf("remainder = %d \n", remainder);
		
		sum += remainder;
		printf("sum = %d \n", sum);
		
		number = number / 10;
		printf("number = %d \n", number);
		
		printf("\n");
	}
	
	printf("Sum of all digits %d", sum);
	
	return 0;
}
output:
Enter the number to calculate the sum of all digits 123
remainder = 3
sum = 3
number = 12

remainder = 2
sum = 5
number = 1

remainder = 1
sum = 6
number = 0

Sum of all digits 6

task:
сalculate the average of the entered numbers
5 + 7 + 10 = 22 / 3 = 7.33333
code:
#include <stdio.h>

int main()
{	
	int elements;
	float sum = 0;
	float input;
	float average;
	int i;

	printf("Enter the number of elements to find the average ");
	scanf("%d", &elements);
	
	printf("Enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%f", &input);
		
		sum += input;
	}
	
	average = sum / elements;
	
	printf("The average number is %f", average);
	
	return 0;
}
output:
Enter the number of elements to find the average 3
Enter 3 elements
5
7
10
The average number is 7.333333

task:
find the armstrong number
(1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3) = 153
code:
#include <stdio.h>

int main()
{	
	int begin = 152;
	int end = 154;
	int remainder;
	int number;
	int sum;

	printf("Search armstrong number \n");
	
	for(begin; end >= begin; begin++)
	{
		number = begin;
		printf("*number = %d \n", number);
		
		sum = 0;
		
		while(number != 0)
		{
			remainder = number % 10;
			printf("#remainder = %d \n", remainder);
			
			sum += remainder*remainder*remainder;
			printf("!sum = %d \n", sum);
			
			number = number / 10;
			printf("num = %d \n", number);
		}
		
		printf("\n");
		
		if(sum == begin)
		{
			printf("This is armstrong number %d \n\n", begin);
		}
	}
	
	
	return 0;
}
output:
Search armstrong number
*number = 152
#remainder = 2
!sum = 8
num = 15
#remainder = 5
!sum = 133
num = 1
#remainder = 1
!sum = 134
num = 0

*number = 153
#remainder = 3
!sum = 27
num = 15
#remainder = 5
!sum = 152
num = 1
#remainder = 1
!sum = 153
num = 0

This is armstrong number 153

*number = 154
#remainder = 4
!sum = 64
num = 15
#remainder = 5
!sum = 189
num = 1
#remainder = 1
!sum = 190
num = 0

task:
check if the entered number is armstrong number
code:
#include <stdio.h>

int main()
{	
	int numberInput;
	int numberCheck;
	int remainder;
	int sum = 0;
	
	
	printf("Check if the entered number is an armstrong number ");
	scanf("%d", &numberInput);
	
	numberCheck = numberInput;
	
	while(numberCheck != 0)
	{
		remainder = numberCheck % 10;
		
		sum += remainder*remainder*remainder;
		
		numberCheck = numberCheck / 10;
	}
	
	printf("sum = %d \n\n", sum);
	
	if(numberInput == sum)
	{
		printf("This is the armstrong number");
	}
	else
	{
		printf("This is not armstrong number");
	}
	
	return 0;
}
output:
Check if the entered number is an armstrong number 153
sum = 153

This is the armstrong number
output:
Check if the entered number is an armstrong number 55
sum = 250

This is not armstrong number

task:
whether the number is even or odd
& - AND
checks decimal in binary form
1 - 1 = 1
1 - 0 = 0
0 - 0 = 0
10 decimal = 1010 binary
9 decimal = 1001 binary
1 decimal = 0001 binary
10 & 1
1010
0001
0000 = 0 decimal = even
9 & 1
1001
0001
0001 = 1 decimal = odd
if(0 = false)
if(1 = true)
code:
#include <stdio.h>

int main()
{		
	printf("10 & 1 = %d ", 10 & 1);
	
	if(10 & 1)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
	
	printf("\n");
	
	printf("9 & 1 = %d ", 9 & 1);
	
	if(9 & 1)
	{
		printf("odd");
	}
	else
	{
		printf("even");
	}
	
	
	return 0;
}
output:
10 & 1 = 0 even
9 & 1 = 1 odd

task:
check if the number is even or odd
(10 / 2) = 5 * 2 = 10 == 10 (true) - even
(5 / 2) = 2 * 2 = 4 == 5 (false) - odd
code:
#include <stdio.h>

int main()
{		
	int number;

	printf("enter a number to check if the number is even or odd ");
	scanf("%d", &number);
	
	if((number / 2) * 2 == number)
	{
		printf("This is an even number");
	}
	else
	{
		printf("This is an odd number");
	}

	return 0;
}
output:
Enter a number to check if the number is even or odd 10
This is an even number
output:
Enter a number to check if the number is even or odd 5
This is an odd number

task:
find the factors of the number
code:
#include <stdio.h>

int main()
{		
	int number;
	int factor = 1;

	printf("enter a number to find the factor of ");
	scanf("%d", &number);
	
	for(factor; number >= factor; factor++)
	{		
		printf("number=%d %% factor=%d = remainder=%d \n", number, factor, number % factor);

		if(number % factor == 0)
		{
			printf("found factor = %d \n", factor);
		}
	}

	return 0;
}
output:
enter a number to find the factor of 12
number=12 % factor=1 = remainder=0
found factor = 1
number=12 % factor=2 = remainder=0
found factor = 2
number=12 % factor=3 = remainder=0
found factor = 3
number=12 % factor=4 = remainder=0
found factor = 4
number=12 % factor=5 = remainder=2
number=12 % factor=6 = remainder=0
found factor = 6
number=12 % factor=7 = remainder=5
number=12 % factor=8 = remainder=4
number=12 % factor=9 = remainder=3
number=12 % factor=10 = remainder=2
number=12 % factor=11 = remainder=1
number=12 % factor=12 = remainder=0
found factor = 12

task:
find the sum of the entered numbers
code:
#include <stdio.h>

int main()
{		
	int number;
	int input;
	int sum = 0;
	int i;

	printf("how many numbers will you sum? ");
	scanf("%d", &number);
	
	printf("enter %d numbers \n", number);
	
	for(i = 1; number >= i; i++)
	{
		scanf("%d", &input);
		
		sum += input;
	}
	
	printf("Sum = %d", sum);

	return 0;
}
output:
how many numbers will you sum? 3
enter 3 numbers
1
2
3
Sum = 6

task:
check if the number is prime
code:
#include <stdio.h>

int isPrime(int num);

int main()
{	
	int number;

	printf("enter a number to check if is prime ");
	scanf("%d", &number);
	

	if(isPrime(number))
	{
		printf("prime number");
	}
	else
	{
		printf("composite number");
	}
	

	return 0;
}

int isPrime(int num)
{
	int i = 2;
	
	printf("num = %d \n", num);
	
	if(1 >= num)
	{
		return 0;
	}
	
	for(i; num > i; i++)
	{
		printf("num=%d %% i=%d = %d \n", num, i, num % i);
		
		if(num % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}
output:
enter a number to check if is prime 11
num = 11
num=11 % i=2 = 1
num=11 % i=3 = 2
num=11 % i=4 = 3
num=11 % i=5 = 1
num=11 % i=6 = 5
num=11 % i=7 = 4
num=11 % i=8 = 3
num=11 % i=9 = 2
num=11 % i=10 = 1
prime number
output:
enter a number to check if is prime 9
num = 9
num=9 % i=2 = 1
num=9 % i=3 = 0
composite number

task:
find the greatest input number
code:
#include <stdio.h>

int main()
{	
	int number;
	int input;
	int big;
	int i;

	printf("how many numbers will you enter to find the greatest? ");
	scanf("%d", &number);
	
	printf("enter %d numbers \n", number);
	
	printf("first ");
	scanf("%d", &big);
	
	for(i = 2; number >= i; i++)
	{
		scanf("%d", &input);
		
		printf("input=%d, big=%d \n", input, big);
		
		if(input > big)
		{
			big = input;
		}
	}
	
	printf("greatest number %d", big);
	
	return 0;
}
output:
how many numbers will you enter to find the greatest? 3
enter 3 numbers
first 5
3
input=3, big=5
10
input=10, big=5
greatest number 10

task:
calculate exponent number
code:
#include <stdio.h>

int main()
{	
	int number;
	int exponent;
	int exponentSave;
	int value = 1;

	printf("enter number ");
	scanf("%d", &number);
	
	printf("enter exponent ");
	scanf("%d", &exponent);
	
	exponentSave = exponent;
	
	while(exponent > 0)
	{
		value *= number;
		
		exponent--;
	}
	
	printf("%d^%d = %d", number, exponentSave, value);
	
	return 0;
}
output:
enter number 4
enter exponent 3
4^3 = 64

task:
display the multiplication table of the entered number
code:
#include <stdio.h>

int main()
{	
	int number;
	int value;
	int i;

	printf("what number do you need as a multiplication table? ");
	scanf("%d", &number);
	
	for(i = 1; i <= 10; i++)
	{
		value = number * i;
		
		printf("%d * %d = %d \n", number, i, value);
	}
	
	return 0;
}
output:
what number do you need as a multiplication table? 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50

task:
enter and display array elements
code:
#include <stdio.h>

int main()
{	
	int number;
	int array[2]; 
	
	printf("enter the first element of the array ");
	scanf("%d", &array[0]);
	
	printf("enter the second element of the array ");
	scanf("%d", &array[1]);
	
	printf("enter the third element of the array ");
	scanf("%d", &array[2]);
	
	
	printf("array[0] = %d \n", array[0]);
	printf("array[1] = %d \n", array[1]);
	printf("array[2] = %d \n", array[2]);
	
	return 0;
}
output:
enter the first element of the array 45
enter the second element of the array 54
enter the third element of the array 15
array[0] = 45
array[1] = 54
array[2] = 15

task:
enter and display array elements
code:
#include <stdio.h>

int main()
{	
	int array[100]; 
	int number;
	int i;
	
	printf("how many elements will you enter into the array? ");
	scanf("%d", &number);
	
	printf("enter %d elements \n", number);
	
	for(i = 0; number > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	printf("array contains ");
	
	for(i = 0; number > i; i++)
	{
		printf("%d ", array[i]);
	}
	
	return 0;
}
output:
how many elements will you enter into the array? 3
enter 3 elements
55
56
45
array contains 55 56 45

task:
reverse number array
code:
#include <stdio.h>

int main()
{	
	int array[2];
	int arrayRev[2];
	
	array[0] = 11;
	array[1] = 22;
	array[2] = 33;
	
	printf("%d \n", array[0]);
	printf("%d \n", array[1]);
	printf("%d \n", array[2]);
	
	arrayRev[0] = array[2];
	arrayRev[1] = array[1];
	arrayRev[2] = array[0];

	printf("\n");
	
	printf("%d \n", arrayRev[0]);
	printf("%d \n", arrayRev[1]);
	printf("%d \n", arrayRev[2]);
	
	return 0;
}
output:
11
22
33

55
44
33

task:
reverse number array
(end = elements - 1) (3 - 1 = 2) array starts from zero 
code:
#include <stdio.h>

int main()
{	
	int elements = 3;
	int array[elements];
	int arrayRev[elements];
	int i;
	int end;
	
	array[0] = 11;
	array[1] = 22;
	array[2] = 33;
	
	end = elements - 1;
	
	for(i = 0; elements > i; i++)
	{
		printf("i=%d, end=%d \n", i, end);
		
		arrayRev[i] = array[end];
		
		end--;
	}
	
	printf("reverse array \n");
	
	for(i = 0; elements > i; i++)
	{
		printf("%d \n", arrayRev[i]);
	}
	
	return 0;
}
output:
i=0, end=2
i=1, end=1
i=2, end=0
reverse array
33
22
11

task:
1) enter the numbers into the array
2) reverse the entered array
code:
#include <stdio.h>

int main()
{	
	int array[100];
	int arrayRev[100];
	int number;
	int end;
	int i;
	
	
	printf("how many elements will you enter into the array? ");
	scanf("%d", &number);
	
	
	printf("enter %d elements \n", number);
	
	for(i = 0; number > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	printf("find the end number of an array \n");
	end = number - 1;
	
	
	printf("reverse the array... \n");
	
	for(i = 0; number > i; i++)
	{
		arrayRev[i] = array[end];
		
		end--;
	}
	
	
	printf("display reverse array \n");
	
	for(i = 0; number > i; i++)
	{
		printf("%d \n", arrayRev[i]);
	}
	
	return 0;
}
output:
how many elements will you enter into the array? 3
enter 3 elements
11
22
33
find the end number of an array
reverse the array...
display reverse array
33
22
11

task:
calculate the length of the string
code:
#include <stdio.h>

int main()
{	
	char string[100];
	int number = 0;

	printf("Enter the string ");
	gets(string);
	
	while(string[number] != '\0')
	{
		printf("%c = %d \n", string[number], number);
		
		number++;
		
		printf("%d \n", number);
	}
	
	printf("The length of the string is %d", number);
	
	return 0;
}
output:
Enter the string ferbl
f = 0
1
e = 1
2
r = 2
3
b = 3
4
l = 4
5
The length of the string is 5

task:
reverse a string
string Org [f-0 e-1 r-2 b-3 l-4]
string Rev [l-0 b-1 r-2 e-3 f-4]
l-4 -> l-0
code:
#include <stdio.h>

int main()
{	
	char stringOrg[100];
	char stringRev[100];
	int length = 0;
	
	int begin;
	int end;

	printf("Enter the string ");
	gets(stringOrg);
	
	
	while(stringOrg[length] != '\0')
	{
		printf("%c - %d \n", stringOrg[length], length);
		
		length++;
		
		printf("%d \n", length);
	}
	
	
	end = length - 1;
	
	
	for(begin = 0; length > begin; begin++)
	{
		printf("begin = %d, end = %d \n", begin, end);
		
		stringRev[begin] = stringOrg[end];
		
		end--;
	}
	
	printf("\n");
	printf("Your reverse a string %s", stringRev);
	
	return 0;
}
output:
Enter the string ferbl
f - 0
1
e - 1
2
r - 2
3
b - 3
4
l - 4
5

begin = 0, end = 4
begin = 1, end = 3
begin = 2, end = 2
begin = 3, end = 1
begin = 4, end = 0

Your reverse a string lbref

task:
check if the entered number is an integer or a floating point
code:
#include <stdio.h>

int main()
{	
	char number[10];
	int flag = 0;
	int i = 0;
	
	printf("enter a number to check if is integer or float ");
	scanf("%s", number);
	
	while(number[i] != '\0')
	{
		if(number[i] == '.')
		{
			flag = 1;
			
			break;
		}
		
		i++;
	}
	
	
	if(flag)
	{
		printf("this float-point number");
	}
	else
	{
		printf("this integer number");
	}
	
	return 0;
}
output:
enter a number to check if is integer or float 15.9
this float-point number
output:
enter a number to check if is integer or float 16
this integer number

task:
replace number in array
code:
#include <stdio.h>

void displayArray();

	int array[100];
	int elements;
	int position;
	int newNumber;
	int i;
	
int main()
{	
	printf("how many elements to add to the array? ");
	scanf("%d", &elements);
	
	
	printf("Enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	displayArray();
	
	
	printf("which position to replace? \n");
	scanf("%d", &position);
	
	
	printf("what number? \n");
	scanf("%d", &newNumber);
	
	array[position] = newNumber;
	
	displayArray();
	
	return 0;
}

void displayArray()
{
	printf("\n");
	printf("array contains \n");
	
	for(i = 0; elements > i; i++)
	{	
		printf("position %d = %d \n", i,array[i]);
	}
}
output:
how many elements to add to the array? 3
Enter 3 elements
11
22
33

array contains
position 0 = 11
position 1 = 22
position 2 = 33
which position to replace?
1
what number?
55

array contains
position 0 = 11
position 1 = 55
position 2 = 33

task:
insert a number into an array with a shift of numbers
input array
el = 3   i = el - 1
i = 2  pos = 1
0-11  1-22  2-33  3-00
0-11  1-22  2-33->3-33   i -> i+1
0-11  1-22->2-22  3-33
0-11  1-55  2-22  3-33
code:
#include <stdio.h>

int main()
{	
	int array[100];
	int elements;
	int insertNum;
	int position;
	int i;

	printf("how many elements to add to the array? ");
	scanf("%d", &elements);
	
	printf("enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	printf("positions of elements \n");
	
	for(i = 0; elements > i; i++)
	{
		printf("positions %d = %d \n", i, array[i]);
	}
	
	
	printf("at what position to insert a new element? ");
	scanf("%d", &position);
	
	
	printf("what number? ");
	scanf("%d", &insertNum);
	
	
	i = elements - 1;
	
	
	for(i; i >= position; i--)
	{
		printf("i=%d >= pos=%d \n", i, position);
		
		printf("%d << %d \n", array[i+1], array[i]);
		
		array[i+1] = array[i];
	}
	
	
	array[position] = insertNum;
	
	
	printf("positions of elements \n");
	
	for(i = 0; elements >= i; i++)
	{
		printf("positions %d = %d \n", i, array[i]);
	}
	
	return 0;
}
output:
how many elements to add to the array? 3
enter 3 elements
11
22
33
positions of elements
positions 0 = 11
positions 1 = 22
positions 2 = 33
at what position to insert a new element? 1
what number? 55
i=2 >= pos=1
0 << 33
i=1 >= pos=1
33 << 22
positions of elements
positions 0 = 11
positions 1 = 55
positions 2 = 22
positions 3 = 33

task:
delete an element in an array with a shift of numbers
pos = 1    el = 3   pos = i
0-11  1-22  2-33  3-00
0-11  1-33<-2-33  3-00    i+1 -> i
0-11  1-33  2-00<-3-00
code:
#include <stdio.h>

int main()
{	
	int array[100];
	int elements;
	int position;
	int i;

	printf("how many elements to add to the array? ");
	scanf("%d", &elements);
	
	printf("enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	printf("positions of elements \n");
	for(i = 0; elements > i; i++)
	{
		printf("positions %d = %d \n", i, array[i]);
	}
	
	
	printf("what position to remove? ");
	scanf("%d", &position);
	
	
	i = position;
	
	
	for(i; elements > i; i++)
	{
		printf("el=%d > i=%d \n", elements, i);
		
		printf("%d << %d \n", array[i], array[i+1]);
		
		array[i] = array[i+1];
	}
	
	
	printf("positions of elements \n");
	for(i = 0; elements > i; i++)
	{
		printf("positions %d = %d \n", i, array[i]);
	}
	
	return 0;
}
output:
how many elements to add to the array? 3
enter 3 elements
11
22
33
positions of elements
positions 0 = 11
positions 1 = 22
positions 2 = 33
what position to remove? 1
el=3 > i=1
22 << 33
el=3 > i=2
33 << 0
positions of elements
positions 0 = 11
positions 1 = 33
positions 2 = 0

task:
delete an element in an array with a shift of numbers
inputNum = 22 this pos = 1    el=3    i = pos 
0-11  1-22  2-33  3-00
0-11  1-33<-2-33  3-00    i+1 -> i
0-11  1-33  2-00<-3-00
code:
#include <stdio.h>

	int array[100];
	int elements;
	int found;
	int pos;
	int num;
	int i;

void displayArray()
{
	printf("array includes \n");
	
	for(i = 0; elements > i; i++)
	{
		printf("%d ", array[i]);
	}
}

int main()
{	
	printf("how many elements to add to the array? ");
	scanf("%d", &elements);
	
	printf("Enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	displayArray();
	
	
	printf("\n");
	printf("which number to remove? ");
	scanf("%d", &num);
	
	for(i = 0; elements > i; i++)
	{
		if(array[i] == num)
		{
			found = 1;
			
			pos = i;
			
			printf("position = %d \n", pos);
			
			break;
		}
	}

	
	if(found == 1)
	{
		for(i = pos; elements > i; i++)
		{
			printf("el=%d > i=%d \n", elements, i);
			
			printf("%d << %d \n", array[i], array[i+1]);
			
			array[i] = array[i+1];
		}
	}
	else
	{
		printf("element not found");
	}
	
	
	displayArray();
	
	
	return 0;
}
output:
how many elements to add to the array? 3
Enter 3 elements
11
22
33
array includes
11 22 33
which number to remove? 22
position = 1
el=3 > i=1
22 << 33
el=3 > i=2
33 << 0
array includes
11 33 0

task:
find the larger and smaller element in the array
0-11  1-22  2-33
big = 0-11   
1-22 > 0-11   big = 1-22    
2-33 > 1-22   big = 2-33
0-11  1-22  2-33
small = 0-11
1-22 > 0-11   small = 0-11  
2-33 > 0-11   small = 0-11
code:
#include <stdio.h>

int main()
{	
	int array[100];
	int elements;
	int big;
	int small;
	int i;

	printf("how many elements to add to the array? ");
	scanf("%d", &elements);
	
	
	printf("enter %d elements \n", elements);
	
	
	for(i=0; elements > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	printf("search for a big element... \n");
	

	big = array[0];
	
	
	for(i = 1; elements > i; i++)
	{
		printf("%d=%d > big=%d \n", i, array[i], big);
		
		if(array[i] > big)
		{
			big = array[i];
			
			printf("big = %d \n", big);
		}
	}
	
	
	printf("search for a small element... \n");
	
	
	small = array[0];
	
	
	for(i = 1; elements > i; i++)
	{
		printf("small=%d > %d=%d \n", small, i, array[i]);
		
		if(small > array[i])
		{
			small = array[i];
			
			printf("small = %d \n", small);
		}
	}
	
	
	printf("large element in the array is %d \n", big);
	
	printf("smallest element in the array is %d \n", small);
	
	return 0;
}
output:
how many elements to add to the array? 3
enter 3 elements
11
22
33
search for a big element...
1=22 > big=11
big = 22
2=33 > big=22
big = 33
search for a small element...
small=11 > 1=22
small=11 > 2=33
large element in the array is 33
smallest element in the array is 11

task:
calculate the sum of numbers in an array
code:
#include <stdio.h>

int main()
{	
	int array[100];
	int elements;
	int sum;
	int i;
	
	printf("how many elements to add to the array? ");
	scanf("%d", &elements);
	
	
	printf("enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%d", &array[i]);
		
		sum += array[i];
	}
	
	
	printf("sum = %d", sum);
	
	
	return 0;
}
output:
how many elements to add to the array? 3
enter 3 elements
11
22
33
sum = 66

task:
output of a two-dimensional array
code:
#include <stdio.h>

int main()
{	
	int array[2][3];
	
	array[0][0] = 1;
	array[0][1] = 2;
	array[0][2] = 3;
	
	printf("%d \n", array[0][0]);
	printf("%d \n", array[0][1]);
	printf("%d \n", array[0][2]);
	
	array[1][0] = 4;
	array[1][1] = 5;
	array[1][2] = 6;
	
	printf("%d \n", array[1][0]);
	printf("%d \n", array[1][1]);
	printf("%d \n", array[1][2]);
	
	return 0;
}
output:
1
2
3
4
5
6

task:
output of a two-dimensional array
code:
#include <stdio.h>

int main()
{	
	int array[2][3] =
	{
		{1, 2, 3},
		{4, 5, 6}
	};
	
	printf("%d \n", array[0][0]);
	printf("%d \n", array[0][1]);
	printf("%d \n", array[0][2]);
	printf("%d \n", array[1][0]);
	printf("%d \n", array[1][1]);
	printf("%d \n", array[1][2]);
	
	return 0;
}
output:
1
2
3
4
5
6

task:
output of a two-dimensional array
code:
#include <stdio.h>

int main()
{	
	int array[2][3];
	int i;
	int u;
	
	
	for(i = 0; 2 > i; i++)
	{
		for(u = 0; 3 > u; u++)
		{
			printf("array[%d][%d] ", i, u);
			scanf("%d", &array[i][u]);
		}
	}
	
	
	printf("array contains \n");
	
	for(i = 0; 2 > i; i++)
	{
		for(u = 0; 3 > u; u++)
		{
			printf("%d ", array[i][u]);
		}
		
		printf("\n");
	}
	
	return 0;
}
output:
array[0][0] 1
array[0][1] 2
array[0][2] 3
array[1][0] 4
array[1][1] 5
array[1][2] 6
array contains
1 2 3
4 5 6

task:
enter and display the matrix
code:
#include <stdio.h>

int main()
{	
	int array[10][10];
	int rows;
	int columns;
	int i;
	int u;
	
	printf("how many rows will be in the matrix? \n");
	printf(" x \n x \n x \n ? \n");
	scanf("%d", &rows);
	
	
	printf("how many columns will be in the matrix? \n");
	printf(" x x x ? \n");
	scanf("%d", &columns);
	
	
	printf("enter %d elements \n", rows*columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &array[i][u]);
		}
	}
	
	
	printf("array contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", array[i][u]);
		}
		printf("\n");
	}
	
	return 0;
}
output:
how many rows will be in the matrix?
 x
 x
 x
 ?
2
how many columns will be in the matrix?
 x x x ?
3
enter 6 elements
1
2
3
4
5
6
array contains...
1 2 3
4 5 6

task:
whether the matrix is a sparse matrix
sparse matrix is a one in which the majority of the values are zero
0 0 0
0 6 5
6 elements / 2 = 3  half the matrix
4 elements = 0   2 elements = nonzero
4 > 3 = zeros are greater than nonzero values -> sparse matrix
code:
#include <stdio.h>

int main()
{	
	int array[10][10];
	int count = 0;
	int rows;
	int columns;
	int i;
	int u;
	
	printf("how many rows will be in the matrix? \n");
	printf(" x \n x \n x \n ? \n");
	scanf("%d", &rows);
	
	
	printf("how many columns will be in the matrix? \n");
	printf(" x x x ? \n");
	scanf("%d", &columns);
	
	
	printf("enter %d elements \n", rows * columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &array[i][u]);
			
			if(array[i][u] == 0)
			{
				count++;
			}
		}
	}
	
	
	printf("array contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", array[i][u]);
		}
		printf("\n");
	}
	
	
	if(count > (rows * columns) / 2)
	{
		printf("this is a sparse matrix");
	}
	else
	{
		printf("it is not a sparse matrix");
	}
	
	return 0;
}
output:
how many rows will be in the matrix?
 x
 x
 x
 ?
2
how many columns will be in the matrix?
 x x x ?
3
enter 6 elements
0
0
0
0
6
9
array contains...
0 0 0
0 6 9
this is a sparse matrix

task:
display the reverse matrix
code:
#include <stdio.h>

int main()
{	
	int array[10][10];
	int reverse[10][10];
	int rows;
	int columns;
	int i;
	int u;
	
	printf("how many rows will be in the matrix? \n");
	printf(" x \n x \n x \n ? \n");
	scanf("%d", &rows);
	
	
	printf("how many columns will be in the matrix? \n");
	printf(" x x x ? \n");
	scanf("%d", &columns);
	
	
	printf("enter %d elements \n", rows * columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &array[i][u]);
		}
	}
	
	
	printf("array contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", array[i][u]);
		}
		printf("\n");
	}
	
	
	printf("array -> reverse... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("arr: %d %d \n", i, u);
			printf("rev: %d %d \n\n", u, i);
			
			reverse[u][i] = array[i][u];
		}
	}
	
	
	printf("reverse contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", reverse[i][u]);
		}
		printf("\n");
	}
	
	
	return 0;
}
output:
how many rows will be in the matrix?
 x
 x
 x
 ?
3
how many columns will be in the matrix?
 x x x ?
3
enter 9 elements
1
2
3
4
5
6
7
8
9
array contains...
1 2 3
4 5 6
7 8 9
array -> reverse...
arr: 0 0
rev: 0 0

arr: 0 1
rev: 1 0

arr: 0 2
rev: 2 0

arr: 1 0
rev: 0 1

arr: 1 1
rev: 1 1

arr: 1 2
rev: 2 1

arr: 2 0
rev: 0 2

arr: 2 1
rev: 1 2

arr: 2 2
rev: 2 2

reverse contains...
1 4 7
2 5 8
3 6 9

task:
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int array[10][10];
	int reverse[10][10];
	int rows;
	int columns;
	int i;
	int u;
	
	printf("how many rows will be in the matrix? \n");
	printf(" x \n x \n x \n ? \n");
	scanf("%d", &rows);
	
	
	printf("how many columns will be in the matrix? \n");
	printf(" x x x ? \n");
	scanf("%d", &columns);
	
	
	printf("enter %d elements \n", rows * columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &array[i][u]);
		}
	}
	
	
	printf("array contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", array[i][u]);
		}
		printf("\n");
	}
	
	
	printf("array -> reverse... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{			
			reverse[u][i] = array[i][u];
		}
	}
	
	
	printf("reverse contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", reverse[i][u]);
		}
		printf("\n");
	}
	
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			if(array[i][u] != reverse[i][u])
			{
				printf("is not a symmetric matrix");
				
				exit(0);
			}
		}
	}
	
	
	printf("is a symmetric matrix");
	
	
	return 0;
}
output:
how many rows will be in the matrix?
 x
 x
 x
 ?
3
how many columns will be in the matrix?
 x x x ?
3
enter 9 elements
1
2
3
2
4
5
3
5
6
array contains...
1 2 3
2 4 5
3 5 6
array -> reverse...
reverse contains...
1 2 3
2 4 5
3 5 6
is a symmetric matrix

task:
calculate the determinant of a 2x2 matrix
1  2
3  4
1 * 4 - 2 * 3 = -2
code:
#include <stdio.h>

int main()
{	
	int arr[2][2];
	int determinant;
	int i;
	int u;

	printf("enter 4 elements into the array to find the determinant of 2x2 matrix \n");
	
	for(i = 0; 2 > i; i++)
	{
		for(u = 0; 2 > u; u++)
		{
			scanf("%d", &arr[u][i]);
		}
	}
	
	
	printf("array contains... \n");
	
	for(i = 0; 2 > i; i++)
	{
		for(u = 0; 2 > u; u++)
		{
			printf("%d  ", arr[u][i]);
		}
		
		printf("\n");
	}
	
	
	determinant = arr[0][0] * arr[1][1] - arr[0][1] * arr[1][0];
	
	
	printf("determinant \n");
	
	printf("%d - %d", arr[0][0] * arr[1][1], arr[0][1] * arr[1][0]);
	
	printf(" = %d", determinant);
	
	return 0;
}
output:
enter 4 elements into the array to find the determinant of 2x2 matrix
1
2
3
4
array contains...
1  2
3  4
determinant
4 - 6 = -2

task:
calculate the trace of a square matrix
square matrix is when the rows and columns are equal
trace square matrix - sum of elements on the main diagonal
1 2 3
4 5 6
7 8 9
1 + 5 + 9 = 15
code:
#include <stdio.h>

int main()
{	
	int array[10][10];
	int rows;
	int columns;
	int trace = 0;
	int i;
	int u;

	printf("how many rows and columns will be in the matrix? ");
	scanf("%d", &rows);
	columns = rows;
	
	
	printf("enter %d elements \n", rows * columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &array[i][u]);
		}
	}
	
	
	printf("array contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", array[i][u]);
		}
		printf("\n");
	}
	
	
	printf("calculating the trace of the matrix... \n");
	
	for(i = 0; rows > i; i++)
	{
		trace += array[i][i];
	}
	
	
	printf("trace = %d", trace);
	
	return 0;
}
output:
how many rows and columns will be in the matrix? 3
enter 9 elements
1
2
3
4
5
6
7
8
9
array contains...
1 2 3
4 5 6
7 8 9
calculating the trace of the matrix...
trace = 15

task:
calculate the normal of a square matrix
1 2 3
4 5 6
7 8 9
normal = 
(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + (6*6) + (7*7) + (8*8) + (9*9)
  1   +   4   +   9   +  16   +  25   +  36   +  49   +  64   +  81
    ____
= \/285 = 16.881943

code:
#include <stdio.h>
#include <math.h>

int main()
{	
	int array[10][10];
	int rows;
	int columns;
	int sum = 0;
	float normal = 0;
	int i;
	int u;

	printf("how many rows and columns will be in the matrix? ");
	scanf("%d", &rows);
	columns = rows;
	
	
	printf("enter %d elements \n", rows * columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &array[i][u]);
		}
	}
	
	
	printf("array contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", array[i][u]);
		}
		printf("\n");
	}
	
	
	printf("calculating the normal of the matrix... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{		
			sum += array[i][u] * array[i][u];
		}
	}
	
	printf("sum = %d \n", sum);
	
	
	normal = sqrt(sum);
	
	printf("normal = %f", normal);
	
	return 0;
}
output:
how many rows and columns will be in the matrix? 3
enter 9 elements
1
2
3
4
5
6
7
8
9
array contains...
1 2 3
4 5 6
7 8 9
calculating the normal of the matrix...
sum = 285
normal = 16.881943

task:
calculate the sum of two matrices
1 2    +    1 2     =   2 4
3 4         3 4         6 8
code:
#include <stdio.h>

int main()
{	
	int firstMatrix[10][10];
	int secondMatrix[10][10];
	int sum[10][10];
	int rows;
	int columns;
	int i;
	int u;

	printf("how many rows will be in the matrix? ");
	scanf("%d", &rows);
	
	
	printf("how many columns will be in the matrix? ");
	scanf("%d", &columns);
	
	
	printf("enter %d elements in the first matrix \n", rows * columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &firstMatrix[i][u]);
		}
	}
	
	
	printf("firts array contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", firstMatrix[i][u]);
		}
		printf("\n");
	}
	
	
	printf("enter %d elements in the second matrix \n", rows * columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &secondMatrix[i][u]);
		}
	}
	
	
	printf("second array contains... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", secondMatrix[i][u]);
		}
		printf("\n");
	}
	
	
	printf("sum two matrices... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			sum[i][u] = firstMatrix[i][u] + secondMatrix[i][u];
		}
	}
	
	
	printf("sum = \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", sum[i][u]);
		}
		printf("\n");
	}
	
	
	return 0;
}
output:
how many rows will be in the matrix? 2
how many columns will be in the matrix? 2
enter 4 elements in the first matrix
1
2
3
4
firts array contains...
1 2
3 4
enter 4 elements in the second matrix
1
2
3
4
second array contains...
1 2
3 4
sum two matrices...
sum =
2 4
6 8

task:
subtraction of two matrix
1 2     -    1 2      =     0 0
3 4          3 4            0 0
code:
#include <stdio.h>

int main()
{	
	int firstMatrix[10][10];
	int secondMatrix[10][10];
	int sub[10][10];
	int rows;
	int columns;
	int i;
	int u;

	printf("how many rows will be in the matrix? ");
	scanf("%d", &rows);
	
	
	printf("how many columns will be in the matrix? ");
	scanf("%d", &columns);
	
	
	printf("enter %d elements in the first matrix \n", rows * columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &firstMatrix[i][u]);
		}
	}
	
	
	printf("enter %d elements in the second matrix \n", rows * columns);
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			scanf("%d", &secondMatrix[i][u]);
		}
	}
	
	
	printf("subtraction of two matrices... \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			sub[i][u] = firstMatrix[i][u] - secondMatrix[i][u];
		}
	}
	
	
	printf("subtraction = \n");
	
	for(i = 0; rows > i; i++)
	{
		for(u = 0; columns > u; u++)
		{
			printf("%d ", sub[i][u]);
		}
		printf("\n");
	}
	
	
	return 0;
}
output:
how many rows will be in the matrix? 2
how many columns will be in the matrix? 2
enter 4 elements in the first matrix
1
2
3
4
enter 4 elements in the second matrix
1
2
3
4
subtraction of two matrices...
subtraction =
0 0
0 0

task:
multiplication of two matrices
1 2  *  5 6  =  1*5+2*7  1*6+2*8  =  19 22
3 4     7 8     3*5+4*7  3*6+4*8     43 50

1 2     5 6
3 4     7 8

00 00 1*5 
01 10 2*7 ac cb
00 01 1*6 ac cb
01 11 2*8 ac cd

a b c
0 0 0
0 0 1
0 1 0
0 1 1
1 0 0
1 0 1
1 1 0
1 1 1
code:
#include <stdio.h>

int main()
{	
	int firstMatrix[10][10];
	int secondMatrix[10][10];
	int multiplyMatrix[10][10];
	int rows;
	int columns;
	int sum;
	int a;
	int b;
	int c;

	printf("how many rows and columns will be in the matrix? ");
	scanf("%d", &rows);
	columns = rows;
	
	
	printf("enter %d elements in the first matrix \n", rows * columns);
	
	for(a = 0; rows > a; a++)
	{
		for(b = 0; columns > b; b++)
		{
			scanf("%d", &firstMatrix[a][b]);
		}
	}
	
	
	printf("first matrix contains... \n");
	
	for(a = 0; rows > a; a++)
	{
		for(b = 0; columns > b; b++)
		{
			printf("%d ", firstMatrix[a][b]);
		}
		printf("\n");
	}
	
	
	printf("enter %d elements in the second matrix \n", rows * columns);
		
	for(a = 0; rows > a; a++)
	{
		for(b = 0; columns > b; b++)
		{
			scanf("%d", &secondMatrix[a][b]);
		}
	}
	
	
	printf("second matrix contains... \n");
	
	for(a = 0; rows > a; a++)
	{
		for(b = 0; columns > b; b++)
		{
			printf("%d ", secondMatrix[a][b]);
		}
		printf("\n");
	}
	
	
	printf("multiplication of two matrices... \n");
	
	for(a = 0; rows > a; a++)
	{
		for(b = 0; columns > b; b++)
		{
			for(c = 0; rows > c; c++)
			{
				printf("a=%d b=%d c=%d \n", a, b, c);
				
				sum += firstMatrix[a][c] * secondMatrix[c][b];
			}
			
		printf("\n");
			
		multiplyMatrix[a][b] = sum;
			
		sum = 0;
		}
	}
	
	
	printf("multiplication = \n");
	
	for(a = 0; rows > a; a++)
	{
		for(b = 0; columns > b; b++)
		{
			printf("%d ", multiplyMatrix[a][b]);
		}
		printf("\n");
	}
	
	
	return 0;
}
output:
how many rows and columns will be in the matrix? 2
enter 4 elements in the first matrix
1
2
3
4
first matrix contains...
1 2
3 4
enter 4 elements in the second matrix
5
6
7
8
second matrix contains...
5 6
7 8
multiplication of two matrices...
a=0 b=0 c=0
a=0 b=0 c=1

a=0 b=1 c=0
a=0 b=1 c=1

a=1 b=0 c=0
a=1 b=0 c=1

a=1 b=1 c=0
a=1 b=1 c=1

multiplication =
19 22
43 50

task:
display the address of the variable
A = 55 -> located in memory at address 22fe4c
B = 11 -> located in memory at address 22fe48
code:
#include <stdio.h>

int main()
{	
	int A = 55;
	
	int B = 11;
	
	
	printf("address of variable A = %x \n", &A);
	
	printf("address of variable B = %x \n", &B);
	
	
	return 0;
}
output:
address of variable A = 22fe4c
address of variable B = 22fe48

task:
pointer to a variable
A = 55 -> located in memory at address 22fe44
address A -> B
B -> points to address 22fe44
code:
#include <stdio.h>

int main()
{	
	int A = 55;
	
	int *B;
	
	
	printf("address of variable A = %x \n", &A);
	
	printf("address of variable B = %x \n\n", B);
	
	
	B = &A;
	
	
	printf("address of variable A = %x \n", &A);
	
	printf("address of variable B = %x \n", B);
	
	
	return 0;
}
output:
address of variable A = 22fe44
address of variable B = 1

address of variable A = 22fe44
address of variable B = 22fe44

task:
pointer to a variable
A = 55 -> located in memory at address 22fe44
address A -> B
B -> points to address 22fe44
A = 11
B = A -> 11
code:
#include <stdio.h>

int main()
{	
	int A = 55;
	
	int *B;
	
	
	B = &A;
	
	
	printf("address of variable A = %x \n", &A);
	
	printf("address of variable B = %x \n", B);
	
	
	printf("A = %d \n", A);
	
	printf("B = %d \n \n", *B);
	
	
	A = 11;
	
	
	printf("A = %d \n", A);
	
	printf("B = %d \n", *B);
	
	
	return 0;
}
output:
address of variable A = 22fe44
address of variable B = 22fe44
A = 55
B = 55

A = 11
B = 11

task:
size of variable
code:
#include <stdio.h>

int main()
{	
	char Char = 'a';

	int Int = 5;
	
	float Float = 17.5;
	
	double Double = 784.465;
	
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	
	printf("size: \n \n");
	
	printf("char = %lu \n", sizeof(Char));
	
	printf("int = %lu \n", sizeof(Int));
	
	printf("float = %lu \n", sizeof(Float));
	
	printf("double = %lu \n", sizeof(Double));
	
	printf("int + double = %lu \n", sizeof(Int + Double));
	
	printf("int array (4*9) = %lu \n", sizeof(array));
	
	
	return 0;
}
output:
size:

char = 1
int = 4
float = 4
double = 8
int + double = 8
int array (4*9) = 36

task:
allocate dynamically memorу
*memory
elements = 3
sizeof(int) = 4
allocate (elements * sizeof(int)) = 12byte -> *memorу
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int *memory;
	int elements = 3;
	
	
	printf("dynamically allocate memory... \n");
	
	memory = malloc(elements * sizeof(int));
	
	
	printf("data input... \n");
	
	memory[0] = 55;
	memory[1] = 11;
	memory[2] = 44;
	
	
	printf("%d \n", memory[0]);
	printf("%d \n", memory[1]);
	printf("%d \n \n", memory[2]);
	
	
	printf("clearing dynamically allocated memory \n");
	
	free(memory);
	
	
	printf("%d \n", memory[0]);
	printf("%d \n", memory[1]);
	printf("%d \n", memory[2]);
	
	
	return 0;
}
output:
dynamically allocate memory...
data input...
55
11
44

clearing dynamically allocated memory
5002640
0
4981080

task:
enter numbers into a dynamic array
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int *array;
	int elements;
	int i;
	

	printf("how many elements to add the dynamic array? ");
	scanf("%d", &elements);
	
	
	array = malloc(elements * sizeof(int));
	
	
	printf("enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	printf("array contains... \n");
	
	for(i = 0; elements > i; i++)
	{
		printf("%d \n", array[i]);
	}
	
	
	return 0;
}
output:
how many elements to add the array? 3
enter 3 elements
11
22
33
array contains...
11
22
33

task:
pointer to an array element
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int number[1];
	int *pointer[1];
	
	
	number[0] = 55;
	
	
	pointer[0] = &number[0];
	
	
	printf("number = %d \n", number[0]);
	printf("pointer = %d \n \n", *pointer[0]);
	
	
	number[0] = 11;
	
	
	printf("number = %d \n", number[0]);
	printf("pointer = %d \n", *pointer[0]);
	
	
	return 0;
}
output:
number = 55
pointer = 55

number = 11
pointer = 11

task:
output an array of chars using a pointer
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	char word[] = "one";
	
	char *pointer;
	
	
	printf("array of chars -> word \n");
	
	printf("%s \n", word);

	
	pointer = word;
	
	
	printf("chars output using a pointer \n");
	
	printf("%c \n", *pointer);
	
	pointer++;
	
	printf("%c \n", *pointer);
	
	pointer++;
	
	printf("%c \n", *pointer);
	
	
	return 0;
}
output:
array of chars -> word
one
chars output using a pointer
o
n
e

task:
output an array of chars using a pointer
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	char word[] = "one";
	char *point;
	
	
	point = word;
	
	
	while(*point)
	{
		printf("%c \n", *point);
		
		point++;
	}
	
	
	return 0;
}
output:
o
n
e

task:
output an element of array using a pointer
array[0] = 11
array[1] = 22
array[2] = 33
pointer 0 <- array[0]
pointer 0 = array[0]  pointer++
pointer 1 = array[1]  pointer++
pointer 2 = array[2]
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int elements = 3;
	
	int array[elements];
	int *pointer;
	int i;
	
	
	array[0] = 11;
	array[1] = 22;
	array[2] = 33;
	
	
	pointer = &array[0];
	
	
	for(i = 0; elements > i; i++)
	{
		printf("%d \n", *pointer);
		
		pointer++;
	}
	
	
	return 0;
}
output:
11
22
33

task:
output an element of array using a pointer
elements = 3
array[0] = 11
array[1] = 22
array[2] = 33
pointer 2 <- array[elements - 1]
pointer 2 = array[2]  pointer--
pointer 1 = array[1]  pointer--
pointer 0 = array[0]
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int elements = 3;
	
	int array[elements];
	int *pointer;
	int i;
	
	
	array[0] = 11;
	array[1] = 22;
	array[2] = 33;
	
	
	pointer = &array[elements - 1];
	
	
	for(i = 0; elements > i; i++)
	{
		printf("%d \n", *pointer);
		
		pointer--;
	}
	
	
	return 0;
}
output:
33
22
11

task:
compare two numbers using a pointers
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int *pointerFirst;
	float *pointerSecond;
	
	int numberFirst = 55;
	float numberSecond = 55.11;
	
	
	pointerFirst = &numberFirst;
	pointerSecond = &numberSecond;
	
	
	if(*pointerFirst > *pointerSecond)
	{
		printf("55 > 55.11 \n");
	}
	else
	{
		printf("55 < 55.11 \n");
	}
	
	
	return 0;
}
output:
55 < 55.11

task:
display the number of pointer to pointer
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int number;
	int *pointer;
	int **pointerToPointer;
	
	
	number = 55;
	
	pointer = &number;
	
	pointerToPointer = &pointer;
	
	
	printf("number = %d \n", number);
	
	printf("pointer = %d \n", *pointer);
	
	printf("pointerToPointer = %d \n", **pointerToPointer);
	
	
	return 0;
}
output:
number = 55
pointer = 55
pointerToPointer = 55

task:
join two array of char using pointers
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	char word[] = "one";
	char *point;
	
	
	point = word;
	
	
	while(*point)
	{	
		printf("%c \n", *point);

		point++;
	}
	
	
	*point = 't';
	
	point++;
	*point = 'w';
	
	point++;
	*point = 'o';
	
	
	printf("%s \n", word);
	
	
	return 0;
}
output:
o
n
e
onetwo

task:
join two array of char using pointers
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	char wordOne[] = "one";
	char wordTwo[] = "two";
	char *pointOne;
	char *pointTwo;
	
	
	pointOne = wordOne;
	pointTwo = wordTwo;
	
	
	while(*pointOne)
	{	
		printf("%c \n", *pointOne);

		pointOne++;
	}
	
	while(*pointTwo)
	{
		printf("%c = %c \n", *pointOne, *pointTwo);
		
		*pointOne = *pointTwo;
		
		pointOne++;
		
		pointTwo++;
	}
	
	
	printf("%s \n", wordOne);
	
	
	return 0;
}
output:
o
n
e
  = t
  = w
  = o
onetwo

task:
add one char to array using a pointer
code:
#include <stdio.h>

void addOneChar(char *pointer);

int main()
{	
	char string[100];
	
	
	printf("enter the string ");
	gets(string);
	
	
	addOneChar(string);
	
	
	printf("%s \n", string);
	
	
	return 0;
}

void addOneChar(char *pointer)
{
	while(*pointer)
	{
		printf("%c \n", *pointer);
		
		pointer++;
	}
	
	*pointer = 'S';
}
output:
enter the string one
o
n
e
oneS

task:
join two array of char using pointers
code:
#include <stdio.h>

void join(char *pointerOne, char *pointerTwo);

int main()
{	
	char stringOne[100];
	char stringTwo[100]; 
	
	
	printf("enter the first string ");
	gets(stringOne);
	
	
	printf("enter the second string ");
	gets(stringTwo);
	
	
	join(stringOne, stringTwo);
	
	
	printf("%s", stringOne);
	
	
	return 0;
}

void join(char *pointerOne, char *pointerTwo)
{
	while(*pointerOne)
	{
		pointerOne++;
	}
	
	while(*pointerTwo)
	{
		*pointerOne = *pointerTwo;
		
		pointerOne++;
		pointerTwo++;
	}
}
output:
enter the first string one
enter the second string two
onetwo

task:
find the length of a string using pointers
code:
#include <stdio.h>

int length(char *pointer);

int main()
{	
	char string[100];
	
	
	printf("enter a string ");
	
	gets(string);
	
	
	printf("string length is %d", length(string));
	
	
	return 0;
}

int length(char *pointer)
{
	int i = 0;
	
	while(*pointer != '\0')
	{
		pointer++;
		
		i++;
	}
	
	return i;
}
output:
enter a string ferbl
string length is 5

task:
reverse a string using pointers
code:
#include <stdio.h>

void string_reverse(char *string);
int string_length(char *pointer);

int main()
{	
	char string[100];
	
	
	printf("enter the string ");
	gets(string);
	
	
	string_reverse(string);
	
	
	printf("reverse string = %s \n", string);
	
	
	return 0;
}

void string_reverse(char *string)
{
	char *begin = string;
	char *end = string;
	char temp;
	
	int length = string_length(string);
	int i;
	
	
	printf("looking for the last character... \n");
	
	for(i = 0; (length - 1) > i; i++)
	{
		printf("%c \n", *end);
		
		end++;
	}
	
	printf("end char = %c \n \n", *end);
	
	
	printf("turn over the string... \n");
	
	for(i = 0; (length / 2) > i; i++)
	{
		printf("i = %d \n", i);
		
		printf("%c <- %c \n", temp, *end);
		temp = *end;
		
		printf("%c <- %c \n", *end, *begin);
		*end = *begin;
		
		printf("%c <- %c \n", *begin, temp);
		*begin = temp;
		
		begin++;
		end--;
		
		printf("%s \n \n", string);
	}
}

int string_length(char *pointer)
{
	int i = 0;
	
	while(*pointer != '\0')
	{
		pointer++;
		
		i++;
	}
	
	return i;
}
output:
enter the string abc
looking for the last character...
a
b
end char = c

turn over the string...
i = 0
  <- c
c <- a
a <- c
cba

reverse string = cba

task:
swap two numbers using pointers
code:
#include <stdio.h>

void swap_two_numbers(int *numOne, int *numTwo);

int main()
{	
	int numberOne;
	int numberTwo;
	

	printf("enter the first number ");
	scanf("%d", &numberOne);
	
	printf("enter the second number ");
	scanf("%d", &numberTwo);
	
	
	printf("numberOne = %d \n", numberOne);
	printf("numberTwo = %d \n \n", numberTwo);
	
	
	printf("swap two numbers... \n \n");
	
	swap_two_numbers(&numberOne, &numberTwo);
	
	
	printf("numberOne = %d \n", numberOne);
	printf("numberTwo = %d \n", numberTwo);
	
	
	return 0;
}

void swap_two_numbers(int *numOne, int *numTwo)
{
	int temp;
	
	temp = *numOne;
	
	*numOne = *numTwo;
	
	*numTwo = temp;
}
output:
enter the first number 11
enter the second number 22
numberOne = 11
numberTwo = 22

swap two numbers...

numberOne = 22
numberTwo = 11

task:
pointer to a function
code:
#include <stdio.h>

int sum(int numOne, int numTwo);

int main()
{	
	int (*pointer) (int, int);
	
	
	pointer = sum;
	
	
	printf("1 + 1 = %d \n", sum(1, 1));
	
	
	printf("1 + 1 = %d \n", pointer(1, 1));
	
	
	return 0;
}

int sum(int numOne, int numTwo)
{
	return numOne + numTwo;
}
output:
1 + 1 = 2
1 + 1 = 2

task:
display NULL
code:
#include <stdio.h>

int main()
{	
	int *number_int = NULL;
	float *number_float = NULL;
	char *character = NULL;
	
	
	printf("number_int = %d \n", number_int);
	printf("number_float = %f \n", number_float);
	printf("character = %c \n", character);
	
	
	return 0;
}
output:
number_int = 0
number_float = 0.000000
character =

task:
use ctype.h library
code:
#include <stdio.h>
#include <ctype.h>

int main()
{	
	char array[] = {'A', 'b', '5', '@', ',', ' ', '\t'};
	int length = sizeof(array);
	int i;
	
	
	printf("array contains... \n");
	
	for(i = 0; length > i; i++)
	{
		printf("%c - char \n", array[i]);
	}
	
	
	printf("\n whether the character is alphabetic... isalpha() \n");
	
	for(i = 0; length > i; i++)
	{
		if(isalpha(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is alphanumeric... isalnum() \n");
	
	for(i = 0; length > i; i++)
	{
		if(isalnum(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is decimal digit... isdigit() \n");
	
	for(i = 0; length > i; i++)
	{
		if(isdigit(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is hexadecimal digit... isxdigit() \n");
	
	for(i = 0; length > i; i++)
	{
		if(isxdigit(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is uppercase... isupper() \n");
	
	for(i = 0; length > i; i++)
	{
		if(isupper(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is lowercase... islower() \n");
	
	for(i = 0; length > i; i++)
	{
		if(islower(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is punctuation ... ispunct() \n");
	
	for(i = 0; length > i; i++)
	{
		if(ispunct(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is control ... iscntrl() \n");
	
	for(i = 0; length > i; i++)
	{
		if(iscntrl(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is white space ... isspace() \n");
	
	for(i = 0; length > i; i++)
	{
		if(isspace(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is print ... isprint() \n");
	
	for(i = 0; length > i; i++)
	{
		if(isprint(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	printf("\n whether the character is graphical ... isgraph() \n");
	
	for(i = 0; length > i; i++)
	{
		if(isgraph(array[i]))
		{
			printf("%c - yes \n", array[i]);
		}
	}
	
	
	return 0;
}
output:
array contains...
A - char
b - char
5 - char
@ - char
, - char
  - char
         - char

 whether the character is alphabetic... isalpha()
A - yes
b - yes

 whether the character is alphanumeric... isalnum()
A - yes
b - yes
5 - yes

 whether the character is decimal digit... isdigit()
5 - yes

 whether the character is hexadecimal digit... isxdigit()
A - yes
b - yes
5 - yes

 whether the character is uppercase... isupper()
A - yes

 whether the character is lowercase... islower()
b - yes

 whether the character is punctuation ... ispunct()
@ - yes
, - yes

 whether the character is control ... iscntrl()
         - yes

 whether the character is white space ... isspace()
  - yes
         - yes

 whether the character is print ... isprint()
A - yes
b - yes
5 - yes
@ - yes
, - yes
  - yes

 whether the character is graphical ... isgraph()
A - yes
b - yes
5 - yes
@ - yes
, - yes

task:
convert char to uppercase using ctype.h library
code:
#include <stdio.h>
#include <ctype.h>

int main()
{	
	char value = 'a';
	
	printf("a -> %c", toupper(value));
	
	return 0;
}
output:
a -> A

task:
convert char to lowercase using ctype.h library
code:
#include <stdio.h>
#include <ctype.h>

int main()
{	
	char value = 'A';
	
	printf("A -> %c", tolower(value));
	
	return 0;
}
output:
A -> a

task:
copy the string
copy <- array
code:
#include <stdio.h>
#include <string.h>

int main()
{	
	char array[100] = "string";
	char copy[100];
	
	
	strcpy(copy, array);
	
	
	printf("%s \n", copy);
	
	
	return 0;
}
output:
string

task:
copy the string
code:
#include <stdio.h>

void stringCopy(char one[], char two[]);

int main()
{	
	char array[100] = "string";
	char copy[100];
	
	
	stringCopy(copy, array);
	
	
	printf("%s \n", copy);
	
	
	return 0;
}

void stringCopy(char one[], char two[])
{
	int i = 0;
	
	while(two[i] != '\0')
	{
		one[i] = two[i];
		
		i++;
	}
	
	one[i] = '\0';
}
output:
string

task:
compare string
code:
#include <stdio.h>
#include <string.h>

int main()
{	
	char arrayOne[100] = "string";
	char arrayTwo[100] = "string";
	int compare;
	
	
	compare = strcmp(arrayOne, arrayTwo);
	
	
	if(compare == 0)
	{
		printf("strings are equal");
	}
	else
	{
		printf("strings are not equal");
	}
	
	
	return 0;
}
output:
strings are equal

task:
compare string
code:
#include <stdio.h>

int stringCompare(char one[], char two[]);

int main()
{	
	char arrayOne[100] = "string";
	char arrayTwo[100] = "string";
	
	
	if(stringCompare(arrayOne, arrayTwo))
	{
		printf("strings are equal");
	}
	else
	{
		printf("strings are not equal");
	}
	
	
	return 0;
}

int stringCompare(char one[], char two[])
{
	int i = 0;
	
	while(one[i] == two[i])
	{
		printf("%c == %c \n", one[i], two[i]);
		
		
		if(one[i] == '\0' && two[i] == '\0')
		{
			return 1;
		}
		
		i++;
	}
	
	return 0;
}
output:
s == s
t == t
r == r
i == i
n == n
g == g
  ==
strings are equal

task:
reverse a string
code:
#include <stdio.h>
#include <string.h>

int main()
{	
	char array[100] = "ferbl";
	
	
	strrev(array);
	
	
	printf("%s \n", array);
	
	
	return 0;
}
output:
lbref

task:
find the length of string
code:
#include <stdio.h>
#include <string.h>

int main()
{	
	char array[100];
	int length;
	
	
	printf("enter a string \n");
	gets(array);
	
	
	length = strlen(array);
	
	
	printf("length = %d", length);
	
	
	return 0;
}
output:
enter a string
abc
length = 3

task:
find the length of string
sizeof() counts \0 character
code:
#include <stdio.h>
#include <string.h>

int main()
{	
	char array[] = "abc";
	int length_Sizeof;
	int length_Strlen;
	
	
	length_Sizeof = sizeof(array);
	
	length_Strlen = strlen(array);
	
	
	printf("length Sizeof = %d \n", length_Sizeof);
	
	printf("length strlen = %d \n", length_Strlen);
	
	
	return 0;
}
output:
length Sizeof = 4
length strlen = 3

task:
find the length of string
code:
#include <stdio.h>

int string_length(char array[]);

int main()
{	
	char array[100];
	int length;
	
	
	printf("enter a string \n");
	gets(array);
	
	
	length = string_length(array);
	
	
	printf("length = %d", length);
	
	
	return 0;
}

int string_length(char array[])
{
	int i = 0;
	
	while(array[i] != '\0')
	{
		i++;
	}
	
	return i;
}
output:
enter a string
abc
length = 3

task:
remove spaces in string
code:
#include <stdio.h>
#include <string.h>

int main()
{	
	char array[100] = "a  b c";
	char noSpaces[100];
	int length;
	int count = 0;
	int i;
	
	
	length = strlen(array);
	
	
	for(i = 0; length > i; i++)
	{		
		printf("1) array[i=%d] = '%c' \n", i, array[i]);
		
		if(array[i] != ' ')
		{
			printf("2) noSpaces[count=%d] = array[i=%d] \n", count, i);
			noSpaces[count] = array[i];
			
			
			printf("3) count++ \n \n");
			count++;
		}
	}
	
	
	noSpaces[count] = '\0';
	
	
	printf("%s \n", noSpaces);
	
	
	return 0;
}
output:
1) array[i=0] = 'a'
2) noSpaces[count=0] = array[i=0]
3) count++

1) array[i=1] = ' '
1) array[i=2] = ' '
1) array[i=3] = 'b'
2) noSpaces[count=1] = array[i=3]
3) count++

1) array[i=4] = ' '
1) array[i=5] = 'c'
2) noSpaces[count=2] = array[i=5]
3) count++

abc

task:
calculate frequency chars in string
code:
#include <stdio.h>

int main()
{	
	char array[] = "abbzzz";
	int frequency_chars[26] = {0};
	int temp;
	int i = 0;
	
	
	printf("array contains... \n");
	
	while(array[i] != '\0')
	{
		printf("%c = %d ascii \n", array[i], array[i]);
		
		i++;
	}
	i = 0;
	
	
	while(array[i] != '\0')
	{
		if(array[i] >= 'a' && array[i] <= 'z')
		{			
			printf("temp = %d - %d \n", array[i], 'a');
			printf("%d \n", array[i] - 'a');
	
			temp = array[i] - 'a';
			
			frequency_chars[temp]++;
		}
		
		i++;
	}
	
	
	for(i = 0; 26 > i; i++)
	{
		printf("%c = %d \n", i + 'a', frequency_chars[i]);
	}
	
	
	return 0;
}
output:
array contains...
a = 97 ascii
b = 98 ascii
b = 98 ascii
z = 122 ascii
z = 122 ascii
z = 122 ascii
temp = 97 - 97
0
temp = 98 - 97
1
temp = 98 - 97
1
temp = 122 - 97
25
temp = 122 - 97
25
temp = 122 - 97
25
a = 1
b = 2
c = 0
d = 0
e = 0
f = 0
g = 0
h = 0
i = 0
j = 0
k = 0
l = 0
m = 0
n = 0
o = 0
p = 0
q = 0
r = 0
s = 0
t = 0
u = 0
v = 0
w = 0
x = 0
y = 0
z = 3

task:
calculate frequency chars in string
code:
#include <stdio.h>
#include <string.h>

int main()
{	
	char array[] = "acf";
	char ascii_lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char ascii_uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int frequency_chars[26] = {0};
	int length;
	int i = 0;
	int u = 0;
	
	
	length = strlen(array);
	
	
	for(i = 0; length > i; i++)
	{
		printf("%d \n", i);
		
		for(u = 0; 26 > u; u++)
		{
			printf("array[i=%d]=%c == ascii[u=%d]=%c \n", i, array[i], u, ascii_lowercase[u]);
			
			
			if(array[i] == ascii_lowercase[u])
			{
				frequency_chars[u]++;
				break;
			}
			else if(array[i] == ascii_uppercase[u])
			{
				frequency_chars[u]++;
				break;
			}
		}
	}
	
	
	for(i = 0; 26 > i; i++)
	{
		printf("%c = %d \n", ascii_lowercase[i], frequency_chars[i]);
	}
	
	
	return 0;
}
output:
0
array[i=0]=a == ascii[u=0]=a
1
array[i=1]=c == ascii[u=0]=a
array[i=1]=c == ascii[u=1]=b
array[i=1]=c == ascii[u=2]=c
2
array[i=2]=f == ascii[u=0]=a
array[i=2]=f == ascii[u=1]=b
array[i=2]=f == ascii[u=2]=c
array[i=2]=f == ascii[u=3]=d
array[i=2]=f == ascii[u=4]=e
array[i=2]=f == ascii[u=5]=f
a = 1
b = 0
c = 1
d = 0
e = 0
f = 1
g = 0
h = 0
i = 0
j = 0
k = 0
l = 0
m = 0
n = 0
o = 0
p = 0
q = 0
r = 0
s = 0
t = 0
u = 0
v = 0
w = 0
x = 0
y = 0
z = 0

task:
convert character to lowercase
code:
#include <stdio.h>

int main()
{	
	char symbol = 'A';
	
	
	if(symbol >= 'A' && symbol <= 'Z')
	{
		printf("a = %d ascii \n", 'a');
		printf("A = %d ascii \n\n", 'A');
		
		printf("a - A = 32 \n");
		printf("97 - 65 = %d \n\n", 'a' - 'A');
		
		printf("A -> a \n\n");
		
		printf("A + 32 = a \n");
		printf("65 + 32 = %d \n\n", 'A' + 32);
		
		
		symbol = symbol + ('a' - 'A');
	}
	
	
	printf("%c \n", symbol);
	
		
	return 0;
}
output:
a = 97 ascii
A = 65 ascii

a - A = 32
97 - 65 = 32

A -> a

A + 32 = a
65 + 32 = 97

a

task:
count the number of vowels
code:
#include <stdio.h>

int count_vovels(char array[]);
int isVowel(char symbol);

int main()
{	
	char string[] = "Aabc";
	
	
	printf("number of vowels = %d", count_vovels(string));
		
	
	return 0;
}

int count_vovels(char array[])
{
	int count;
	int flag;
	int i = 0;
	
	
	while(array[i] != '\0')
	{		
		printf("%c isVowel = %d \n", array[i], isVowel(array[i]));

		flag = isVowel( array[i] ); 
		
		
		if(flag)
		{
			count++;
		}
		
		
		i++;
	}

	return count;
}

int isVowel(char symbol)
{
	if(symbol >= 'A' && symbol <= 'Z')
	{		
		symbol = symbol + ('a' - 'A');
	}
	
	
	if(symbol == 'a' || symbol == 'e' || 
	   symbol == 'i' || symbol == 'o' || 
	   symbol == 'u')
	{
		return 1;
	}
	
	return 0;
}
output:
A isVowel = 1
a isVowel = 1
b isVowel = 0
c isVowel = 0
number of vowels = 2

task:
count the number of vowels
code:
#include <stdio.h>
#include <string.h>

int count_vovels(char array[]);

int main()
{	
	char string[] = "AaBoz";
	
	
	printf("number of vowels = %d \n", count_vovels(string));
	
	
	return 0;
}

int count_vovels(char array[])
{
	char vovels[] = "aeiouAEIOU";
	int length = strlen(array);
	int count = 0;
	int i;
	int u;
	
	
	for(i = 0; length > i; i++)
	{
		for(u = 0; 10 > u; u++)
		{
			if(array[i] == vovels[u])
			{
				count++;
				break;
			}
		}
	}
	
	return count;
}
output:
number of vowels = 3

task:
sum numbers from 1 to 5 using recursion
code:
#include <stdio.h>

int sum;

int get_sum(int number)
{	
	printf("number = %d, sum = %d \n", number, sum);
	
	if(number > 0)
	{
		sum = sum + number;
		
		get_sum( number - 1 );
	}
	
	printf("return %d, number %d \n", sum, number);
	return sum;
}

int main()
{		
	printf("sum from 1 to 5 \n");
	
	get_sum(5);
	
	return 0;
}
output:
sum from 1 to 5
number = 5, sum = 0
number = 4, sum = 5
number = 3, sum = 9
number = 2, sum = 12
number = 1, sum = 14
number = 0, sum = 15
return 15, number 0
return 15, number 1
return 15, number 2
return 15, number 3
return 15, number 4
return 15, number 5

task:
calculate fibonacci using recursion
0 10 10 20 30 50 80
code:
#include <stdio.h>

void fibonacci(int first, int second, int length);

int main()
{		
	fibonacci(0, 10, 5);
	
	return 0;
}

void fibonacci(int first, int second, int length)
{
	int sum;
	
	printf("first = %d, second = %d, length = %d \n", first, second, length);
	
	if(length > 0)
	{
		sum = first + second;
		
		printf("sum %d \n", sum);
		
		fibonacci(second, sum, length - 1);
	}
}
output:
first = 0, second = 10, length = 5
sum 10
first = 10, second = 10, length = 4
sum 20
first = 10, second = 20, length = 3
sum 30
first = 20, second = 30, length = 2
sum 50
first = 30, second = 50, length = 1
sum 80
first = 50, second = 80, length = 0

task:
calculate sum of digits of a number using recursion
code:
#include <stdio.h>

int sum;

int sum_digits_of_number(int number)
{	
	printf("-> number = %d, sum = %d \n", number, sum);

	sum += number % 10;
	
	if(number > 0)
	{
		sum_digits_of_number( number / 10 );
	}
	
	printf("return sum = %d, number = %d \n", sum, number);
	return sum;
}

int main()
{			
	printf("sum of digits of a number = %d \n",sum_digits_of_number(57));
	
	return 0;
}
output:
-> number = 57, sum = 0
-> number = 5, sum = 7
-> number = 0, sum = 12
return sum = 12, number = 0
return sum = 12, number = 5
return sum = 12, number = 57
sum of digits of a number = 12

task:
check if the string is a palindrome using recursion
code:
#include <stdio.h>

int isPalindrome(char array[], int begin, int end);

int main()
{			
	char string[] = "foof";
	
	printf("%s \n", string);
	
	
	if(isPalindrome(string, 0, 3))
	{
		printf("%s is palindrome", string);
	}
	else
	{
		printf("%s is not palindrome", string);
	}
	
	return 0;
}

int isPalindrome(char array[], int begin, int end)
{
	printf("begin = %d, end = %d \n", begin, end);
	
	if(begin >= end)
	{
		return 1;
	}
	
	if(array[begin] == array[end])
	{
		printf("%c == %c \n", array[begin], array[end]);
		
		isPalindrome(array, begin + 1, end - 1);
	}
	else
	{
		return 0;
	}
}
output:
foof
begin = 0, end = 3
f == f
begin = 1, end = 2
o == o
begin = 2, end = 1
foof is palindrome

task:
check if the number is a palindrome using recursion
code:
#include <stdio.h>

int reverse(int number);

int main()
{		
	int num;
	
	printf("--->"); scanf("%d", &num);

	if(reverse(num) == num)
	{
		printf("%d is polindrome", num);
	}
	else
	{
		printf("%d is not polindrome", num);
	}
	
	return 0;
}

int sum = 0;

int reverse(int number)
{
	int residue = 0;
	
	printf("\t number = %d \n", number);
	
	if(number != 0)
	{
		printf("residue = %d \n", number % 10);
		residue = number % 10;
		
		printf("sum %d = sum %d * 10 \n", sum * 10, sum);
		sum = sum * 10;
		
		printf("sum %d = sum %d + residue %d \n", sum + residue, sum, residue);
		sum = sum + residue;
		
		reverse( number / 10 );
	}
	else
	{
		return sum;
	}
}
output:
--->515
         number = 515
residue = 5
sum 0 = sum 0 * 10
sum 5 = sum 0 + residue 5
         number = 51
residue = 1
sum 50 = sum 5 * 10
sum 51 = sum 50 + residue 1
         number = 5
residue = 5
sum 510 = sum 51 * 10
sum 515 = sum 510 + residue 5
         number = 0
515 is polindrome
output:

task:
raise a number to a power using recursion
code:
#include <stdio.h>

int exponent(int x, int y);

int main()
{		
	int first;
	int second;

	printf("x^y \n");
	
	printf("x ->"); scanf("%d", &first);
	
	printf("y ->"); scanf("%d", &second);
	
	
	printf("exponent %d^%d = %d", first, second, exponent(first, second));
	
	
	return 0;
}

int exponent(int x, int y)
{
	if(y == 0)
	{
		printf("return 1 \n");
		return 1;
	}
	
	printf("x %d * exponent(x %d, y %d - 1) \n", x, x, y);
	
	return x * exponent(x, y - 1);
}
output:
x^y
x ->8
y ->2
x 8 * exponent(x 8, y 2 - 1)
x 8 * exponent(x 8, y 1 - 1)
return 1
exponent 8^2 = 64

task:
find the maximum number in an array using recursion
code:
#include <stdio.h>
int get_max_number(int array[]);

int length;

int main()
{		
	int numbers[] = {20, 30, 10};
	
	
	length = sizeof(numbers) / sizeof(int);
	printf("length = %d \n", length);
	
	
	printf("max = %d", get_max_number(numbers));
	
	return 0;
}

int max = 0;
int i = 0;

int get_max_number(int array[])
{	
	printf("i = %d \n", i);
	
	if(length > i)
	{
		printf("array[i] %d > max %d \n", array[i], max);
		
		if(array[i] > max)
		{
			printf("max <- %d \n", array[i]);
			
			max = array[i];
		}
		
		i++;
		
		get_max_number(array);
	}
	
	printf("return max %d \n", max);
	return max;
}
output:
length = 3
i = 0
array[i] 20 > max 0
max <- 20
i = 1
array[i] 30 > max 20
max <- 30
i = 2
array[i] 10 > max 30
i = 3
return max 30
return max 30
return max 30
return max 30
max = 30

task:
check if the number is prime using recursion
code:
#include <stdio.h>

int isPrime(int number);
int isPrime_helper(int number, int i);

int main()
{		
	int num;

	printf("-->"); 
	scanf("%d", &num);
	
	if(isPrime(num))
	{
		printf("%d is prime number", num);
	}
	else
	{
		printf("%d is not prime number", num);
	}
	
	return 0;
}

int isPrime(int number)
{	
	return isPrime_helper(number, number / 2);
}

int isPrime_helper(int number, int i)
{
	printf("number = %d, i = %d \n", number, i);
	
	if(i == 1)
	{
		printf("return 1 \n");
		return 1;
	}
	else
	{
		printf("number %% i = %d \n", number % i);
		
		if(number % i == 0)
		{
			printf("return 0 \n");
			return 0;
		}
		else
		{
			isPrime_helper(number, i - 1);
		}
	}
}
output:
-->15
number = 15, i = 7
number % i = 1
number = 15, i = 6
number % i = 3
number = 15, i = 5
number % i = 0
return 0
15 is not prime number
output:
-->11
number = 11, i = 5
number % i = 1
number = 11, i = 4
number % i = 3
number = 11, i = 3
number % i = 2
number = 11, i = 2
number % i = 1
number = 11, i = 1
return 1
11 is prime number

task:
find the LCM (lowest common multiple) using recursion
code:
#include <stdio.h>
int get_LCM(int one, int two);

int main()
{		
	int first = 2;
	int second = 3;
	
	printf("LCM = %d \n", get_LCM(first, second));
	
	return 0;
}

int i = 1;

int get_LCM(int one, int two)
{
	printf("i = %d \n", i);
	printf("one = %d, two = %d \n", one, two);
	printf("i %% one = %d, i %% two = %d \n", i % one, i % two);
	
	if(i % one == 0 && i % two == 0)
	{
		printf("stop %d \n", i);
	}
	else
	{
		i++;
		get_LCM(one, two);
	}
	
	printf("return %d \n", i);
	return i;
}
output:
i = 1
one = 2, two = 3
i % one = 1, i % two = 1
i = 2
one = 2, two = 3
i % one = 0, i % two = 2
i = 3
one = 2, two = 3
i % one = 1, i % two = 0
i = 4
one = 2, two = 3
i % one = 0, i % two = 1
i = 5
one = 2, two = 3
i % one = 1, i % two = 2
i = 6
one = 2, two = 3
i % one = 0, i % two = 0
stop 6
return 6
return 6
return 6
return 6
return 6
return 6
LCM = 6

task:
calculate Sum of First N numbers using head recursion
code:
#include <stdio.h>
int head_recursion(int number);

int main()
{		
	int num = 5;
	
	printf("head recursion... \n");
	printf("%d \n", head_recursion(num));
}

int sum;

int head_recursion(int number)
{
	printf("recursion, number = %d \n", number);
	
	if(number == 1)
	{
		printf("return 1 \n");
		return 1;
	}
	else
	{
		sum = number + head_recursion(number - 1);
		
		printf("sum = number %d + head_recursion(number - 1) \n", number);
	}
	
	printf("return sum = %d \n", sum);
	return sum;
}
output:
head recursion...
recursion, number = 5
recursion, number = 4
recursion, number = 3
recursion, number = 2
recursion, number = 1
return 1
sum = number 2 + head_recursion(number - 1)
return sum = 3
sum = number 3 + head_recursion(number - 1)
return sum = 6
sum = number 4 + head_recursion(number - 1)
return sum = 10
sum = number 5 + head_recursion(number - 1)
return sum = 15
15

task:
calculate Sum of First N numbers using tail recursion
code:
#include <stdio.h>
int tail_recursion(int number, int sum);

int main()
{		
	int num = 5;
	
	printf("tail recursion... \n");
	printf("%d \n", tail_recursion(num, 0));
}

int tail_recursion(int number, int sum)
{
	printf("number = %d, sum = %d \n", number, sum);
	
	if(number == 0)
	{
		printf("return sum = %d \n", sum);
		return sum;
	}
	else
	{
		return tail_recursion(number - 1, sum + number);
	}
}
output:
tail recursion...
number = 5, sum = 0
number = 4, sum = 5
number = 3, sum = 9
number = 2, sum = 12
number = 1, sum = 14
number = 0, sum = 15
return sum = 15
15

task:
find the GCD (greatest common divisor) using tail recursion
Euclidean Algorithm Using Subtraction
code:
#include <stdio.h>

int get_GCD(int one, int two);

int main()
{		
	int first = 60;
	int second = 36;
	
	printf("GCD = %d", get_GCD(first, second));
	
	return 0;
}

int get_GCD(int one, int two)
{
	printf("one = %d, two = %d \n", one, two);
	
	if(one > two)
	{
		printf("%d - %d = %d \n", one, two, one - two);
		
		get_GCD(one - two, two);
	}
	else if(two > one)
	{
		printf("%d - %d = %d \n", two, one, two - one);
		
		get_GCD(one, two - one);
	}
	else
	{
		printf("return %d \n", one);
		return one;
	}
}
output:
one = 60, two = 36
60 - 36 = 24
one = 24, two = 36
36 - 24 = 12
one = 24, two = 12
24 - 12 = 12
one = 12, two = 12
return 12
GCD = 12

task:
reverse string using recursion and pointer
code:
#include <stdio.h>
char *reverse(char *array);

int main()
{		
	char string[100] = "abc";
	
	printf("original - %s \n", string);
	
	printf("reverse - %s \n", reverse(string));
}

char reverse_array[100];
int i = 0;

char *reverse(char *array)
{
	printf("%c \n", *array);
	
	if(*array)
	{
		reverse(array + 1);
		
		printf("reverse_array[ i %d ] <- %c \n", i, *array);
		reverse_array[i] = *array;
		
		i++;
	}
	
	printf("return \n");
	return reverse_array;
}
output:
original - abc
a
b
c

return
reverse_array[ i 0 ] <- c
return
reverse_array[ i 1 ] <- b
return
reverse_array[ i 2 ] <- a
return
reverse - cba

task:
save information about two persone using structure
code:
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[100];
	int age;
};

int main()
{		
	struct Person persone_one;
	struct Person persone_two;
	
	strcpy(persone_one.name, "First");
	persone_one.age = 11;
	
	strcpy(persone_two.name, "Second");
	persone_two.age = 22;
	
	
	printf("Name: %s \n", persone_one.name);
	printf("Age: %d \n", persone_one.age);
	
	printf("Name: %s \n", persone_two.name);
	printf("Age: %d \n", persone_two.age);
}
output:
Name: First
Age: 11
Name: Second
Age: 22

task:
enter information about two persone using structure
typedef - creates an alias data type
code:
#include <stdio.h>

typedef struct Person
{
	char name[100];
	int age;
} person;

int main()
{		
	person one;
	person two;
	
	scanf("%s", &one.name);
	scanf("%d", &one.age);
	
	scanf("%s", &two.name);
	scanf("%d", &two.age);
	
	
	printf("Name: %s \n", one.name);
	printf("Age: %d \n", one.age);
	
	printf("Name: %s \n", two.name);
	printf("Age: %d \n", two.age);
}
output:
First
11
Second
22
Name: First
Age: 11
Name: Second
Age: 22

task:
save money information of two persone using structure
code:
#include <stdio.h>

typedef struct Bank
{
	int money;
} bank;

typedef struct Person
{
	char *name;
	bank my_bank;
} person;

int main()
{		
	person one;
	person two;
	
	one.name = "First";
	two.name = "Second";
	
	one.my_bank.money = 50;
	two.my_bank.money = 10;
	
	printf("%s = $%d  \n", one.name, one.my_bank.money);
	printf("%s = $%d \n", two.name, two.my_bank.money);
}
output:
First = $50
Second = $10

task:
enter information about person using structure and pointer
code:
#include <stdio.h>
#include <string.h>

struct Person
{
	char name[100];
	char surname[100];
	int age;
};

int main()
{		
	struct Person one;
	
	struct Person *pointer;
	
	pointer = &one;
	
	strcpy(pointer->name, "First");
	scanf("%s", &pointer->surname);
	scanf("%d", &pointer->age);
	
	printf("Name: %s \n", pointer->name);
	printf("Surname: %s \n", pointer->surname);
	printf("Age: %d \n", pointer->age);
}
output:
One
11
Name: First
Surname: One
Age: 11

task:
input and output of information about a person using structure
code:
#include <stdio.h>

struct Person get_person_info();
void print_person_info(struct Person person);

struct Person
{
	char name[100];
	int age;
};

int main()
{		
	struct Person one;
	
	one = get_person_info();
	
	print_person_info(one);
}

struct Person get_person_info()
{
	struct Person temp;
	
	printf("Enter name ");
	scanf("%s", &temp.name);
	
	printf("Enter age ");
	scanf("%d", &temp.age);
	
	return temp;
}

void print_person_info(struct Person output)
{
	printf("Name: %s \n", output.name);
	printf("Age: %d \n", output.age);
}
output:
Enter name Fisrt
Enter age 11
Name: Fisrt
Age: 11

task:
enter information about person using array of structure
code:
#include <stdio.h>

struct Person
{
	char name[100];
	int age;
};

int main()
{		
	struct Person person[3];
	int i;
	
	for(i = 0; 3 > i; i++)
	{
		printf("Enter name ");
		scanf("%s", &person[i].name);
		
		printf("Enter age ");
		scanf("%d", &person[i].age);
	}
	
	for(i = 0; 3 > i; i++)
	{
		printf("Name = %s \n", person[i].name);
		printf("Age = %d \n", person[i].age);
	}
}
output:
Enter name Fisrt
Enter age 11
Enter name Second
Enter age 22
Enter name Third
Enter age 33
Name = Fisrt
Age = 11
Name = Second
Age = 22
Name = Third
Age = 33

task:
save information about person using structure and dynamic memory
code:
#include <stdio.h>
#include <stdlib.h>

struct Person
{
	char name[100];
	int age;
};

int main()
{	
	struct Person *person;
	int num_of_person;
	int i;
	
	printf("how many person add? ");
	scanf("%d", &num_of_person);
	
	printf("size name = %d \n", sizeof(person->name));
	printf("size age = %d \n", sizeof(person->age));
	
	
	printf("will take memory = %d * %d \n",  num_of_person, sizeof(struct Person));
	
	person = malloc(num_of_person * sizeof(struct Person));
	
	
	for(i = 0; num_of_person > i; i++)
	{
		printf(">>address = %d \n", person + i);
		
		printf("Enter name ");
		scanf("%s", &(person + i)->name);
		
		printf("Enter age ");
		scanf("%d", &(person + i)->age);
	}
	
	for(i = 0; num_of_person > i; i++)
	{
		printf("Name = %s \n", (person + i)->name);
		printf("Age = %d \n", (person + i)->age);
	}
}
output:
how many person add? 3
size name = 100
size age = 4
will take memory = 3 * 104
>>address = 3100000
Enter name First
Enter age 11
>>address = 3100104
Enter name Second
Enter age 22
>>address = 3100208
Enter name Third
Enter age 33
Name = First
Age = 11
Name = Second
Age = 22
Name = Third
Age = 33

task:
get a list of file names
code:
#include <stdio.h>
#include <dirent.h>

int main()
{	
	DIR *list_of_files;
	struct dirent *file;
	
	printf("get a list of files... \n");
	list_of_files = opendir(".");
	
	while(file = readdir(list_of_files))
	{	
		printf("%s \n", file->d_name);
	}
	
	closedir(list_of_files);
	
	return 0;
}
output:
get a list of files...
.
..
a.exe
main.c

task:
writing string to file
fopen("file.txt", "w") - creates file for writing
if file exists it overwritten
code:
#include <stdio.h>

int main()
{	
	FILE *file;
	char string[100];
	
	printf("creating file for writing... \n");
	
	file = fopen("my_file.txt", "w");


	printf("enter the text ->>");
	
	gets(string);
	
	
	printf("writing string to file... \n");
	
	fprintf(file, "%s", string);
	
	
	printf("successful \n");
	printf("closing the file \n");
	
	fclose(file);
	
	return 0;
}
output:
creating file for writing...
enter the text ->>ABC
writing string to file...
successful
closing the file

task:
reading file string
code:
#include <stdio.h>

int main()
{	
	FILE *file;
	char string[100];
	
	
	printf("opening file for reading.... \n");
	
	file = fopen("my_file.txt", "r");
	
	
	if(file == NULL)
	{
		printf("file not found \n");
	}
	else
	{
		printf("saving first string of file -> array string... \n");
		
		fscanf(file, "%s", &string);
		
		
		printf("close the file... \n");
		
		fclose(file);
	}
	
	
	printf("%s \n", string);
	
	
	return 0;
}
file my_file.txt:
ABC
CBA
BCA
output:
opening file for reading....
saving first string of file -> array string...
close the file...
ABC

task:
writing binary information about person to file
fwrite(address data block, size data, amount this type data, pointer to file)
code:
#include <stdio.h>

struct Person
{
	char name[10];
	int age;
};

int main()
{	
	FILE *file;
	struct Person person;
	char add_another_person = 'y';
	
	printf("creating binary file for writing... \n");
	
	file = fopen("my_file.bin", "w");
	
	
	if(file == NULL)
	{
		printf("file not found");
	}
	
	while(add_another_person == 'y')
	{
		printf("Enter name ");
		scanf("%s", &person.name);
		
		printf("Enter age ");
		scanf("%d", &person.age);
		
		fwrite(&person, sizeof(person), 1, file);
		
		printf("add another person? (y/n) ");
		scanf("%s", &add_another_person);
	}
	
	
	printf("successful \n");
	fclose(file);
	
	
	return 0;
}
output:
creating binary file for writing...
Enter name First
Enter age 11
add another person? (y/n) y
Enter name Second
Enter age 22
add another person? (y/n) n
successful

task:
reading binary file about person
fread(address data block, size data, amount this type data, pointer to file)
returns 1 if read
returns 0 if not read
code:
#include <stdio.h>

struct Person
{
	char name[10];
	int age;
};

int main()
{	
	FILE *file;
	struct Person person;
	
	printf("opening binary file for reading... \n");
	
	file = fopen("my_file.bin", "r");
	
	
	if(file == NULL)
	{
		printf("file not found \n");
	}

	
	while( fread(&person, sizeof(person), 1, file) )
	{
		printf("Name - %s \n", person.name);
		printf("Age - %d \n", person.age);
	}
	
	
	printf("close the file \n");
	fclose(file);
	
	
	return 0;
}
output:
opening binary file for reading...
Name - First
Age - 11
Name - Second
Age - 22
close the file

task:
read information about a specific person
fseek(pointer to file, moving pointer to N bytes, from what place in the file)
SEEK_SET - moves pointer from begin of file
SEEK_END - moves pointer from end of file
SEEK_CUR - moves pointer from current location
code:
#include <stdio.h>

struct Person
{
	char name[10];
	int age;
};

int main()
{	
	FILE *file;
	struct Person person;
	int ordinal_number_of_person;
	
	printf("opening binary file for reading... \n");
	file = fopen("my_file.bin", "r");
	
	if(file == NULL)
	{
		printf("file not found \n");
	}

	printf("enter the ordinal number of person you want to display? ");
	
	scanf("%d", &ordinal_number_of_person);
	
	
	printf("move the pointer %d bytes from beginning in file \n", ordinal_number_of_person * sizeof(person));
	
	fseek(file, ordinal_number_of_person * sizeof(person), SEEK_SET);
	
	
	printf("reading a file... \n");
	
	fread(&person, sizeof(person), 1, file);
	
	
	printf("Name %s \n", person.name);
	printf("Age %d \n", person.age);
	
		
	printf("close the file. \n");
	fclose(file);
	
	return 0;
}
output:
opening binary file for reading...
enter the ordinal number of person you want to display? 1
move the pointer 16 bytes from beginning in file
reading a file...
Name Second
Age 22
close the file.

task:
find the file size
fseek(pointer to file, moving pointer to N bytes, from what place in the file)
SEEK_SET - moves pointer from begin of file
SEEK_END - moves pointer from end of file
SEEK_CUR - moves pointer from current location
ftell(pointer to file)
return number current position from begin of file
code:
#include <stdio.h>

struct Person
{
	char name[10];
	int age;
};

int main()
{	
	FILE *file;
	struct Person person;
	
	printf("opening binary file for reading... \n");
	file = fopen("my_file.bin", "r");
	
	if(file == NULL)
	{
		printf("file not found... \n");
	}
	
	printf("moving pointer from begin to end of file... \n");
	
	fseek(file, SEEK_SET, SEEK_END);
	
	
	printf("file size = %d bytes \n", ftell(file));
	
	
	printf("close the file \n");
	fclose(file);
	
	return 0;
}
output:
opening binary file for reading...
moving pointer from begin to end of file...
file size = 32 bytes
close the file

task:
read the file character by character
fgetc(FILE *stream) - gets character from the file and
moves pointer to next character
EOF - End Of File is -1
code:
#include <stdio.h>

int main()
{		
	FILE *file;
	char character;

	printf("opening a file for reading... \n");
	file = fopen("my_file.txt", "r");
	
	if(file == NULL)
	{
		printf("file not found \n");
	}
	
	printf("reading file... \n");
	
	printf("End Of File = %d \n", EOF);
		
	while(1)
	{
		character = fgetc(file);
		
		printf("%c = %d \n", character, character);
		
		if(character == EOF)
		{
			break;
		}
	}
	
	printf("closing file...");
	fclose(file);
	
	return 0;
}
output:
opening a file for reading...
reading file...
End Of File = -1
A = 65
B = 66
C = 67
  = -1
closing file...

task:
reverse the text in file
code:
#include <stdio.h>
#include <string.h>

int main()
{		
	FILE *file;
	char character;
	char array[100];
	int i = 0;
	
	printf("opening a file for reading and writing... \n");
	file = fopen("my_file.txt", "r+");
	
	if(file == NULL)
	{
		printf("file not found \n");
	}
		
	printf("saving characters of file to array... \n");
	
	while( ( character = fgetc(file) ) != EOF )
	{		
		printf("%c = %d \n", character, character);
		
		array[i] = character;
		
		i++;
	}
	
	printf("array = %s \n", array);
	
	printf("reverse array... \n");
	strrev(array);
	
	
	printf("moving pointer to 0 byte from begin of file... \n");
	
	fseek(file, 0, SEEK_SET);
	
	
	printf("overwriting info in file... \n");
	
	fprintf(file, "%s", array);
	
	
	printf("close file... \n");
	fclose(file);
	
	return 0;
}
output:
opening a file for reading and writing...
saving characters of file to array...
A = 65
B = 66
C = 67
array = ABC
reverse array...
moving pointer to 0 byte from begin of file...
overwriting info in file...
close file...
my_file.txt:
CBA

task:
my_file.txt contains ABC display CBA
code:
#include <stdio.h>

int main()
{		
	FILE *file;
	char character;

	printf("opening a file for reading... \n");
	file = fopen("my_file.txt", "r");
	
	if(file == NULL)
	{
		printf("file not found \n");
	}
	
	printf("moving pointer to 0 byte from end of file... \n");
	fseek(file, 0, SEEK_END);
	character = fgetc(file);
	printf("%c = %d \n", character, character);
	
	printf("moving pointer to 1 byte from end of file... \n");
	fseek(file, -1, SEEK_END);
	character = fgetc(file);
	printf("%c = %d \n", character, character);
	
	printf("moving pointer to 2 byte from end of file... \n");
	fseek(file, -2, SEEK_END);
	character = fgetc(file);
	printf("%c = %d \n", character, character);
	
	printf("moving pointer to 3 byte from end of file... \n");
	fseek(file, -3, SEEK_END);
	character = fgetc(file);
	printf("%c = %d \n", character, character);
	
	
	printf("closing files...");
	fclose(file);
	
	return 0;
}
my_file.txt:
ABC
output:
opening a file for reading...
moving pointer to 0 byte from end of file...
  = -1
moving pointer to 1 byte from end of file...
C = 67
moving pointer to 2 byte from end of file...
B = 66
moving pointer to 3 byte from end of file...
A = 65
closing files...

task:
save reverse text to another file
fput(character, file) - writes a character to file
code:
#include <stdio.h>

int main()
{		
	FILE *file;
	FILE *reverse_file;
	char character;
	int length;
	int i = 0;

	printf("opening a file for reading... \n");
	file = fopen("my_file.txt", "r");
	
	if(file == NULL)
	{
		printf("file not found \n");
	}
	
	printf("creating a file for writing reverse text... \n");
	reverse_file = fopen("reverse_my_file.txt", "w");
	
	
	printf("moving pointer to 0 byte from end of file... \n");
	fseek(file, 0, SEEK_END);
	
	printf("get number position of pointer from begin of file... \n");
	length = ftell(file);
	
	
	printf("file length = %d \n", length);
	
	while(length > i)
	{		
		i++;
		
		
		printf("moving pointer to %d byte from end of file \n", i);
		
		fseek(file, -i, SEEK_END);
		
		
		printf("get character = ");
		
		character = fgetc(file);
		
		printf("%c \n", character);
		
		
		printf("writing a character to reverse file \n");
		
		fputc(character, reverse_file);
	}
	
	
	printf("closing files...");
	fclose(file);
	fclose(reverse_file);
	
	return 0;
}
my_file.txt:
ABC
output:
opening a file for reading...
creating a file for writing reverse text...
moving pointer to 0 byte from end of file...
get number position of pointer from begin of file...
file length = 3
moving pointer to 1 byte from end of file
get character = C
writing a character to reverse file
moving pointer to 2 byte from end of file
get character = B
writing a character to reverse file
moving pointer to 3 byte from end of file
get character = A
writing a character to reverse file
closing files...
reverse_my_file.txt:
CBA

task:
copy text of file to another file
code:
#include <stdio.h>

int get_file_length(FILE *file)
{
	int length;
	
	printf(" move pointer to end of file \n");
	fseek(file, 0, SEEK_END);
	
	printf(" get number current position of pointer (counts from begin of file) \n");
	length = ftell(file); 
	
	printf(" length = %d \n", length);
	
	printf(" move pointer to begin of file \n");
	fseek(file, 0, SEEK_SET);
	
	return length;
}

int main()
{		
	FILE *file;
	FILE *copy_file;
	char character;
	int length;
	
	printf("open file for reading... \n");
	file = fopen("my_file.txt", "r");
	
	if(file == NULL)
	{
		printf("file not found \n");
	}
	
	printf("create a file for writing... \n");
	copy_file = fopen("copy_file.txt", "w");
	
	
	printf("get file length... \n");
	length = get_file_length(file);
	
	while(length)
	{
		printf("get character = ");
		
		character = fgetc(file);
		
		printf("%c \n", character);
		
		
		printf("writing character to copy of file... \n");
		
		fputc(character, copy_file);
		
		
		length--;
	}
	
	
	printf("closing files... \n");
	fclose(file);
	fclose(copy_file);
	
	return 0;
}
output:
open file for reading...
create a file for writing...
get file length...
 move pointer to end of file
 get number current position of pointer (counts from begin of file)
 length = 3
 move pointer to begin of file
get character = A
writing character to copy of file...
get character = B
writing character to copy of file...
get character = C
writing character to copy of file...
closing files...

task:
code:


---
task:
factorial calculation using recursion
code:
#include <stdio.h>

int fact(int num)
{
	printf("\t \t \t \t -> fact(int num) \n");
	
	printf("num = %d \n", num);
	
	
	if(num >= 1)
	{
		printf("return num * fact( num - 1 ) \n");
		
		return num * fact( num - 1 );
	}
	else
	{
		printf("\t \t \t \t <- return 1 \n");
		
		return 1;
	}
}

int main()
{		
	int number = 5;
	int factorial;
	
	
	printf("calculating factorial... \n");
	
	factorial = fact(number);
	
	
	printf("factorial %d = %d \n", number, factorial);
	
	return 0;
}
output:
calculating factorial...
                                 -> fact(int num)
num = 5
return num * fact( num - 1 )
                                 -> fact(int num)
num = 4
return num * fact( num - 1 )
                                 -> fact(int num)
num = 3
return num * fact( num - 1 )
                                 -> fact(int num)
num = 2
return num * fact( num - 1 )
                                 -> fact(int num)
num = 1
return num * fact( num - 1 )
                                 -> fact(int num)
num = 0
                                 <- return 1
factorial 5 = 120

task:
sum of two numbers using recursion
code:
#include <stdio.h>

int sum;

int sum_two_numbers(int one, int two)
{
	int temp = 0;
	
	printf("		recursion \n");
	printf("one = %d, two = %d \n", one, two);
	
	if(two == 0)
	{		
		printf("stop recursion \n");
		printf("return one = %d \n", one);
		return one;
	}
	
	
	printf("temp = sum_two_numbers(%d, %d - 1) \n", one, two);
	temp = sum_two_numbers(one, two - 1);
	
	
	printf("sum = (temp=%d) + 1    two = %d \n", temp, two);
	sum = temp + 1;
	
	
	printf("return sum = %d \n", sum);
	
	return sum;
}

int main()
{		
	printf("%d \n", sum_two_numbers(10, 2));
	
	return 0;
}
output:
                recursion
one = 10, two = 2
temp = sum_two_numbers(10, 2 - 1)
                recursion
one = 10, two = 1
temp = sum_two_numbers(10, 1 - 1)
                recursion
one = 10, two = 0
stop recursion
return one = 10
sum = (temp=10) + 1    two = 1
return sum = 11
sum = (temp=11) + 1    two = 2
return sum = 12
12

---
task:
output words from an array
code:
#include <stdio.h>
#include <stdlib.h>

int main()
{	
	char *words[2];
	
	
	words[0] = "first";
	words[1] = "second";
	
	
	printf("%s \n", words[0]);
	printf("%s \n", words[1]);
	
	
	return 0;
}
output:
first
second

---
task:
swap the numbers in the array
temp <- 0-11
0-11 <- 1-22
1-22 <- temp
temp <- 0-11 <- 1-22 <- temp
code:
#include <stdio.h>

int main()
{	
	int array[100];
	int temporary;
	
	array[0] = 11;
	array[1] = 22;
	
	temporary = array[0];
	
	array[0] = array[1];
	
	array[1] = temporary;
	
	
	printf("array[0] = %d, array[1] = %d \n", array[0], array[1]);
	
	return 0;
}
output:
array[0] = 22, array[1] = 11

task:
sort numbers in an array
code:
#include <stdio.h>

	int array[100];
	int elements;
	int temp;
	int i;
	int u;
	int y;
	
void displayArray()
{	
	for(y = 0; elements > y; y++)
	{
		printf("%d ", array[y]);
	}
	
	printf("\n");
}

int main()
{	
	printf("how many elements to add to the array? ");
	scanf("%d", &elements);
	
	
	printf("enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	printf("array sorting... \n");
	displayArray();
	
	for(i = 0; elements-1 > i; i++)
	{
		for(u = 0; elements-1 > u; u++)
		{
			printf("%d > %d \n", array[u], array[u+1]);
			
			if(array[u] > array[u+1])
			{
				temp = array[u];
				
				array[u] = array[u+1];
				
				array[u+1] = temp;
			}
			
			displayArray();
		}
	}
	
	return 0;
}
output:
how many elements to add to the array? 3
enter 3 elements
33
22
11
array sorting...
33 22 11
33 > 22
22 33 11
33 > 11
22 11 33
22 > 11
11 22 33
22 > 33
11 22 33

task:
sort numbers in an array
33>22 11
22 33>11 swapped = 1(true - check again) 
22>11 33
11 22>33 swapped = 1(true - check again)
11>22 33
11 22>33 swapped = 0(false - stop)
code:
#include <stdio.h>

	int array[100];
	int elements;
	int swapped = 1;
	int temp;
	int i;
	int u;
	
void displayArray()
{	
	for(u = 0; elements > u; u++)
	{
		printf("%d ", array[u]);
	}
	
	printf("\n");
}

int main()
{	
	printf("how many elements to add to the array? ");
	scanf("%d", &elements);
	
	
	printf("enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	printf("array sorting... \n");
	
	
	while(swapped)
	{
		swapped = 0;
		i = 0;
		
		while(elements-1 > i)
		{
			displayArray();
			printf(" | %d > %d | ", array[i], array[i+1]);
			
			if(array[i] > array[i+1])
			{
				temp = array[i];
				
				array[i] = array[i+1];
				
				array[i+1] = temp;

				swapped = 1;
			}
			
			displayArray();
			i++;
		}
	}
	
	return 0;
}
output:
how many elements to add to the array? 3
enter 3 elements
33
22
11
array sorting...
33 22 11
 | 33 > 22 | 22 33 11
22 33 11
 | 33 > 11 | 22 11 33
22 11 33
 | 22 > 11 | 11 22 33
11 22 33
 | 22 > 33 | 11 22 33
11 22 33
 | 11 > 22 | 11 22 33
11 22 33
 | 22 > 33 | 11 22 33

---
task:
remove duplicate numbers in an array
code:
#include <stdio.h>

int main()
{	
	int array[100];
	int noDupl[100];
	int elements;
	int find;
	int i;
	int u;
	
	printf("how many elements to add to the array? ");
	scanf("%d", &elements);
	
	
	printf("enter %d elements \n", elements);
	
	for(i = 0; elements > i; i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	printf("removing duplicates in an array ... \n");
	
	find = 0;
	
	for(i = 0; elements > i; i++)
	{
		printf("i=%d \n", i);
		printf("find=%d > u=0 \n", find);
		
		for(u = 0; find > u; u++)
		{
			printf("array[i=%d]=%d == noDupl[u=%d]=%d \n", i, array[i], u, noDupl[u]);
			
			if(array[i] == noDupl[u])
			{
				printf("break \n");
				
				break;
			}
		}
		
		printf("u=%d == find=%d \n", u, find);
		
		if(u == find)
		{
			printf("noDupl[u=%d]=%d <- array[i=%d]=%d \n", u, noDupl[u], i, array[i]);
			
			noDupl[u] = array[i];
			
			find++;
		}
	}
	
	
	printf("array contains ");
	
	for(i = 0; find > i; i++)
	{
		printf("%d ", noDupl[i]);
	}
	
	
	return 0;
}
output:
how many elements to add to the array? 4
enter 4 elements
11
66
11
44
removing duplicates in an array ...
i=0
find=0 > u=0
u=0 == find=0
noDupl[u=0]=0 <- array[i=0]=11
i=1
find=1 > u=0
array[i=1]=66 == noDupl[u=0]=11
u=1 == find=1
noDupl[u=1]=0 <- array[i=1]=66
i=2
find=2 > u=0
array[i=2]=11 == noDupl[u=0]=11
break
u=0 == find=2
i=3
find=2 > u=0
array[i=3]=44 == noDupl[u=0]=11
array[i=3]=44 == noDupl[u=1]=66
u=2 == find=2
noDupl[u=2]=0 <- array[i=3]=44
array contains 11 66 44
---
task:
transfer number from decimal to binary
4 / 2 = 2 remainder 0
2 / 2 = 1 remainder 0
1 / 2 = 0 remainder 1
binary number is written from bottom to top
4 decimal = 100 binary
code:
#include <stdio.h>

void DecimalToBinary(int number);

int main()
{	
	DecimalToBinary(4);

	return 0;
}

void DecimalToBinary(int number)
{
	printf("DecimalToBinary(int %d) \n", number);
	
	if(number > 1)
	{
		DecimalToBinary(number / 2);
		
		printf("number = %d \n", number);
	}
	
	printf("binary = %d \n\n", number % 2);
}
output:
DecimalToBinary(int 4)
DecimalToBinary(int 2)
DecimalToBinary(int 1)
binary = 1

number = 2
binary = 0

number = 4
binary = 0
