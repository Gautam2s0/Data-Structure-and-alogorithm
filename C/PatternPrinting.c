// Hollow Ringht angle Trinagle tringle
// *
// * *
// *   *
// *     *
// *       *
// *         *
// * * * * * * *

// #include <stdio.h>
// void  main(){
//     int i,j,k,l;
//     printf("Enter a number of pattern length : ");
//     scanf("%d",&k);
//     for(i=0;i<k;i++){
//         for(j=0;j<i+1;j++){
//             if(i<k-1){
//                 if(j!=0 && j!=i){
//                     printf("  ");
//                 }
//                 else{
//                     printf("* ");
//                 }
//             }
//             else{
//                 printf("* ");
//             }

//         }
//         printf("\n");
//     }
// }

// Hollow Mirrored Right Angle Triangle star pattern

//           *
//         * *
//       *   *
//     *     *
//   *       *
// * * * * * *

#include <stdio.h>
void  main(){
    int i,j,k,l,space;
    printf("Enter a number of pattern length : ");
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
            if(i==k-1){
                printf(" *");
            }
            else if(j==k-1){
                printf(" *");
            }
            else if(i==0 && j==k-1){
                printf(" *");

            }
            else if(i==0 && j!=k-1){
                printf("  ");

            }
            else if(i+j==k-1){
                printf(" *");
            }
            else {
                printf("  ");
            }

        }
        printf("\n");
    }
}

// ******************************* pyramid *******************************************

// * * * * * * *
//   * * * * * 
//     * * *
//       *


// #include <stdio.h>
// void main()
// {
//     int i, j, k, l;
//     printf("Enter a number of pattern length : ");
//     scanf("%d", &k);
//     for (i = 0; i < k; i += 2)
//     {
//         for (j = 0; j < k; j++)
//         {
//             if (i == 0)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 if (j < i / 2)
//                 {
//                     printf("  ");
//                 }
//                 else if (j >= k - i / 2)
//                 {
//                     printf("  ");
//                 }
//                 else
//                 {
//                     printf("* ");
//                 }
//             }
//         }
//         printf("\n");
//     }
// }



// ****************  Hollow Pyramid  *************************************** 

#include <stdio.h>
void main()
{
    int i, j, k, l;
    printf("Enter a number of pattern length : ");
    scanf("%d", &k);
    for (i = 0; i < k; i += 2)
    {
        for (j = 0; j < k; j++)
        {
            if (i == 0)
            {
                printf("* ");
            }
            else
            {
                if (j < i / 2)
                {
                    printf("  ");
                }
                else if (j >= k - i / 2)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
        }
        printf("\n");
    }
}
