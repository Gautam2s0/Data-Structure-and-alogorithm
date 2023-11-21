// FUNCTION CLASSIFICATION
// 1. NO AGRUMEN WITHOUT RETURN TYPE 
// 2. NO ARGUMENT WITH RETURN TYPE 
// 3. WITH ARGUMENT WITHOUT RETURN TYPE 
// 4. WITH ARGUMENT WITH RETURN TYPE 

//  *******************    NO AGRUMEN WITHOUT RETURN TYPE  ********************** 


//  #include <stdio.h>

// void func(void);
// void main(){
//     func();
// }
// void func(){
//     printf("Gautam Sonkar");
// }

// *******************  NO ARGUMENT WITH RETURN TYPE  *************************


#include <stdio.h>


void main(){
    int p;
    p=func();
    printf("p=%d",p);
}
void func(){
    int x=68;
   return x;
}