#include<stdio.h>
int main(){
     int n=7;
     int loop1,loop3;
     int i=1;
    if(n==3){
     loop1 = n-1;
     loop3 = n-1;
    }else{
        loop1 = n-2;
        loop3 = n-2;
    }

    while(loop1--){
        int at = i;
        while(at--){
        printf("@");
        }
        int space1 = loop1+1;
        while(space1--){
            printf(" ");
        }

        int space2 = n+2;
        while(space2--){
            printf(" ");
        }

        int space_at = n;
        while(space_at--){
            if(loop1 == n-3 && n!=3){
                printf(" ");
            }else if(loop1 == n-2 && n==3){
                printf(" ");
            }else{
                printf("@");
            }
        }
        printf("\n");
        i++;
    }


    int loop2 = 1;
    while(loop2--){
        int at;
        if(n==3){
            at = 3;
        }
        else{
            at = n-1;
        }
        while(at--){
            printf("@");
        }

        int star = n+2;
        while(star--){
            printf("*");
        }
        int at2 = n;
        while(at2--){
            printf("@");
        }
        printf("\n");
    }

    int j=1;
    while (loop3--)
    {
        int at = loop3+1;
        while(at--){
            printf("@");
        }

        int space1 = j;
        while (space1--)
        {
            printf(" ");
        }
        j++;


        int space2 = n+2;
        while (space2--)
        {
            printf(" ");
        }
        
        int at_space = n;

        while(at_space--){
           if(loop3 == 0){
                printf(" ");
            }
            else{
                printf("@");
            }
        }
        
        printf("\n");
    }
    
    return 0;
}