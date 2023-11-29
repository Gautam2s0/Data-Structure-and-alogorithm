// memset() is used to fill a block of memory with a particular value.
// The syntax of memset() function is as follows :

// ptr ==> Starting address of memory to be filled
// x   ==> Value to be filled
// n   ==> Number of bytes to be filled starting 
//         from ptr to be filled
// void *memset(void *ptr, int x, size_t n);



// C program to demonstrate working of memset() 
// #include <stdio.h> 
// #include <string.h> 

// int main() 
// { 
// 	char str[50] = "I am a programmer"; 
// 	printf("\nBefore memset(): %s\n", str); 

// 	// Fill 8 characters starting from str[13] with '.' 
// 	memset(str +15, '5', 6*sizeof(char)); 

//     // starting index is 15 to 17+6 index 
//     // I am a programm555555 
//     // it will remove the character which are present right side of the starting index.
//    // I am a p r o g r a m m e r
//     //01234567891011121314151617   
//     //  index=15 ==m it will place 6times 5 after m so o/p will be:  I am a programm555555 

// 	printf("After memset(): %s", str); 
// 	return 0; 
// } 



// *****************************************************************************************************


// C program to demonstrate working of memset() 
// C program to demonstrate working of memset() 


// C program to demonstrate working of memset() 
// #include <stdio.h> 
// #include <string.h> 

// void printArray(int arr[], int n) 
// { 
// for (int i=0; i<n; i++) 
// 	printf("%d ", arr[i]); 
// } 

// int main() 
// { 
// 	int n = 10; 
// 	int arr[n]; 

// 	// Fill whole array with 0. 
// 	memset(arr, 0, n*sizeof(arr[0])); 
// 	printf("Array after memset()\n"); 
// 	printArray(arr, n); 

// 	return 0; 
// } 


// O/P  0 0 0 0 0 0 0 0 0 0

//*********************************************************************************************

// C program to demonstrate working of memset() 
#include <stdio.h> 
#include <string.h> 

void printArray(int arr[], int n) 
{ 
for (int i=0; i<n; i++) 
	printf("%d ", arr[i]); 
} 

int main() 
{ 
	int n = 10; 
	int arr[n]; 

	// Fill whole array with 100. 
	memset(arr, 10, n*sizeof(arr[0])); 
	printf("Array after memset()\n"); 
	printArray(arr, n); 

	return 0; 
} 
// O/P garbage value or address