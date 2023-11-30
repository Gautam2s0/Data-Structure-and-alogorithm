//This storage class is used to declare static variables which are popularly used while writing programs in C language. 
//Static variables have the property of preserving their value even after they are out of their scope! 
//Hence, static variables preserve the value of their last use in their scope. 
//So we can say that they are initialized only once and exist till the termination of the program. 
//Thus, no new memory is allocated because they are not re-declared.

//Their scope is local to the function to which they were defined. 
//Global static variables can be accessed anywhere in the program. 
//By default, they are assigned the value 0 by the compiler. 



#include <stdio.h>
int x=1;
int staticStorageClass(void);
void main(){
    for(int i=0;i<5;i++){
        printf("%d\n",staticStorageClass());
    }
}
int staticStorageClass(){
    static i=2;
    return i+=i%2==0?3:5;

}