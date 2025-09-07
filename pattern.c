
#include<stdio.h>
int main(){
    int n;
    int i=1;
    printf("Enter the number");
    scanf("%d",&n);
    int midSpaceAdd;

    int outL=n;
    while(outL--){
        
        int space1 = outL+1;
        while(space1--){
           printf(" ");
        }

        int space2 = n-3;
        midSpaceAdd = space2;
        while(space2--){
            printf(" ");
        }
        
        int star1 = i;
        while(star1--){
            printf("@");
        }

        int star2 = i-1;
        while(star2--){
            printf("@");
        }
        i++;
        printf("\n");

    }


    int outL2=n-2;
    int j=1;
    while(outL2--){
        int space1=outL2+1;
        while(space1--){
            printf(" ");
        }
        int star1 = j;
        while(star1--){
            printf("*");
        }
        
        int midSpace = n+midSpaceAdd;
        while(midSpace--){
            printf(" ");
        }
        
        int star2 = j;
        while(star2--){
            printf("*");
        } 
        j++;

        printf("\n");
    }

    int outL3= 1;
    while(outL3--){
        int star1 = n-1;
        while(star1--){
            printf("*");
        }

        int midAT = n + midSpaceAdd;
        while(midAT--){
            printf("@");
        }

         int star2 = n-1;
        while(star2--){
            printf("*");
        }


        printf("\n");
    }
   
    int k=1;
    int outL4 = n-2;
    while(outL4--){

        int space1 = k;
        while (space1--)
        {
            printf(" ");
        }
        k++;
         
        int star1 = outL4+1;
        while (star1--)
        {
            printf("*");
        }

        int midSpace = n + midSpaceAdd;
        while (midSpace--)
        {
            printf(" ");
        }

        int star2 = outL4+1;
        while (star2--)
        {
            printf("*");
        }
        
        
        printf("\n");
        

    }
}