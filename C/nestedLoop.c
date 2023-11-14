//  odd Even Sum using simple loop
//***************************************************************88
#include <stdio.h>
int main(){
  int i,j,sumOdd=0,SumEv=0;
  printf("Enter a number");
  scanf("%d",&j);
  for(i=1;i<=j;i++){
    if(i%2==0){
        SumEv+=i;
    //   continue;
    }
    else{
      sumOdd+=i;
    }
  }
  printf("Sum Of Even Number = %d\n",SumEv);
  printf("Sum Of Odd Number = %d\n",sumOdd);
  return 0;
}

//***********************************************************************************//
// star hollow pattern printing using for loop taking user input
// * * * *
// *     *
// *     *
// * * * *

#include <stdio.h>
int main()
{
    int i, j, k, l;
    printf("Enter first number for pattern : ");
    scanf("%d", &i);
    printf("Enter second number for pattern : ");
    scanf("%d", &j);
    for (k = 0; k < i; k++)
    {
        for (l = 0; l < j; l++)
        {
            if (k == 0 || k == i-1)
            {
                printf("* ");
            }
            else
            {
                if (l == 0 || l == j - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}

//    ****************************************** Right Triangle ******************************

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

#include <stdio.h>
int main()
{
    int i, j, l;
    printf("Enter first number for pattern : ");
    scanf("%d", &j);
    for (i = 0; i < j; i++)
    {
        for (l = 0; l < i + 1; l++)
        {

            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

//    ****************************************** Left Right angle Triangle ******************************

//           *
//         * *
//       * * *
//     * * * *
//   * * * * *
// * * * * * *

#include <stdio.h>
int main()
{
    int i, j, l;
    printf("Enter first number for pattern : ");
    scanf("%d", &j);
    for (i = 0; i < j; i++)
    {
        for (l = 0; l < j; l++)
        {
            if (l < j - i-1)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}