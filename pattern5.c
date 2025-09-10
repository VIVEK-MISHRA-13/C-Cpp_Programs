// * * * * * * * * * * * * * * * * *
//   * * * * * * *   * * * * * * *
//     * * * * *       * * * * *
//       * * *           * * *
//         * * * * * * * * *
//           * * * * * * *
//             * * * * *
//               * * *
//                 *


#include<stdio.h>

int main(){

    int n = 5;
    int loop1 = n-1;
    int i=1;
    while (loop1--)
    {
        int space1 = i-1;
        while (space1--)
        {
            printf(" ");
        }
        int star1 = loop1+2;
        while (star1--)
        {
            printf("*");
        }
        int star2 = loop1+1;
        while (star2--)
        {
            printf("*");
        }

        int space2 = i-1;
        while(space2--)
        {
            printf(" ");
        }
        int space3 = i-1;
        while(space3--)
        {
            printf(" ");
        }
        
        int star = 2*loop1 + 3;
        while (star--)
        {
            printf("*");
        }
        
        
        printf("\n");
        i++;
        
    }

    int loop2 = n;
    int j=1;

    while (loop2--)
    {
        int space = n;
        while (space--)
        {
            printf(" ");
        }

        int space2 = j-1;
        while (space2--)
        {
            printf(" ");
        }


        int star = 2*loop2+1;
        while (star--)
        {
            printf("*");
        }
        
        j++;
        

        printf("\n");
        
    }
    
    


    return 0;
}