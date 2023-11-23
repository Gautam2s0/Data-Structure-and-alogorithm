// The structure in C is a user-defined data type that can be used to group items of
// possibly different types into a single type. 
// The struct keyword is used to define the structure in the C programming language.
// The items in the structure are called its member and they can be of any valid data type.

// **********************************************************************************

// C Structure Declaration :

//  struct structure_name {
//     data_type member_name1;
//     data_type member_name1;
//     ....
//     ....
// };

// ********************************************************************************************

// Structure Variable Declaration after Structure Template:
//            struct structure_name variable1, variable2, .......;

// *********************************************************************

//Access Structure Members
//       structure_name.member1;
//       strcuture_name.member2;

#include <stdio.h>
 struct student
 {
    int roll_no;
    char name[50];
    float mark;
 };

 void main(){
    struct student s1={1,"Gautam",87.5};
    printf("Roll Number = %d\nName = %s\nMarks = %f",s1.roll_no,s1.name,s1.mark);
 }
 