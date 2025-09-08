#include<stdio.h>

int main(){
    int n=9;
    int loop1;
    if(n==3){
        loop1 = (n/2) + 1;
    }
    else{
        loop1 = (n/2)+1;
    }

    int i=1;
    while(loop1--){
        int space1 = n;
        while (space1--)
        {
            printf(" ");
        }

        int space2 = loop1;
        
        while (space2--)
        {
            printf(" ");
        }
        
        int star1 = i;
        while(star1--)
        {
            printf("*");
        }
        int star2 = i-1;
        while (star2--)
        {
            printf("*");
        }
        
        i++;
        
        printf("\n");
        
    }
   
   
    int loop2 =n-2;
   

    while (loop2--)
                    
    {
        int space1 = n;
        while (space1--)
        {
            printf(" ");
        }
        
        int at1 = 1;
        while (at1--)
        {
            printf("@");
        }
        
        int space2 = n-2;
        while (space2--)
        {
            printf("-");
        }

        int at2 = 1;
        while (at2--)
        {
            printf("@");
        }
        
        
        printf("\n");
        
        
    }
    
    
    int loop3 = 1;
    while (loop3--)
    {
        int star1 = n;
        while (star1--)
        {
            
            printf("*");
        }
        int at1 = 1;
        while (at1--)
        {
            printf("@");
        }

        int space2 = n-2;
        while (space2--)
        {
            printf(" ");
        }

       int at2 = 1;
        while (at2--)
        {
            printf("@");
        }

         int star2 = n;
        while (star2--)
        {
            
            printf("*");
        }
        printf("\n");
        
        
    }
   
    
    int loop4;
    if(n==3){
        loop4 = (n/2);
    }
    else{
        loop4 = (n/2);
    }
    int j=1;
    while (loop4--)
    {
        int space1 = j;
        while (space1--)
        {
            printf(" ");
        }

        int star1 = loop4+1;
        while (star1--)
        {
            printf("*");
        }

        int star2 = loop4;


        while (star2--)
        {
            printf("*");
        }


        int space2 = j;
        while (space2--)
        {
            printf(" ");
        }
        

        int space3 = n;
        while (space3--)
        {
            printf(" ");
        }

        int space4 = j;
        while (space4--)
        {
            printf(" ");
        }


         int star3 = loop4+1;
        while (star3--)
        {
            printf("*");
        }

        int star4 = loop4;


        while (star4--)
        {
            printf("*");
        }


        int space5 = j;
        while (space5--)
        {
            printf(" ");
        }
        
        
        printf("\n");
        
        j++;
        
    }
    
    return 0;


}