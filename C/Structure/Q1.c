// #include<stdio.h>
// int main() 
// { 
// 	struct bitfields
// 	{
// 		int bits_1: 2;
// 		int bits_2: 4;
// 		int bits_3: 2;
// 		int bits_4: 3;
// 	}bit = {2, 3, 8, 7};
// 	printf("%d %d %d %d", bit.bits_1, bit.bits_2, bit.bits_3, bit.bits_4);
// }


// Explanation
// The above structure declaration shows that we declare four variables as int(whenever you declare int you get a signed int).
// Signed integers needs the left most bit for +/- sign.
// int bits_1: 2; // assigns two bits to the variable bits_1
// int bits_2: 4; //assigns four bits to the variable bits_2
// int bits_3: 4; //assigns four bits to the variable bits_3
// int bits_4: 1; //assigns one bit to the variable bits_4

// 2 bits - 00
// 4 bits - 0000
// 1 bit - 0

// we assign values 2, 3, 8, 1 for the variables bits_1, bits_2, bits_3 and bits_4 respectively.

// when we assign 2 in 2 bit field:
// value bit
// 2 - 10

// here the left most bit is 1. so, the compiler treat the value as negative.
// To handle negative values the system will use the 2's complement method.

// 1's complement of 2(10) - 01
// 2's complement of 2(10) - 10

// Finally the value is -2.

// when we assign 3 in 4 bit field:

// value bit
// 3 - 0011

// here the left most bit is 0. so, the compiler treat the value as positive.

// There is no need of 2's complement. The compiler will displays 3.

// when we assign 8 in 4-bit field:
// value bit
// 8 - 1000

// here the left most bit is 1. so, the compiler treat the value as negative.
// To handle negative values the system will use the 2's complement method.

// 1's complement of 8(1000) - 0111
// 2's complement of 8(1000) - 1000

// Finally the value is -8.

// when we assign 7 in 3-bit field:
// value bit
// 7 - 111

// here the left most bit is 1. so, the compiler treat the value as negative.
// To handle negative values the system will use the 2's complement method.

// 1's complement of 7(111) - 000
// 2's complement of 7(111) - 001

// Finally the value is -1.



#include<stdio.h>
void fun(char *);
int main()
{
	char *string = "function in c";
	fun(string);
	printf("%s", string);
	return 0;
}
void fun(char *a)
{
	while(*a)
{
	*a += 1;
	a++;
}
}