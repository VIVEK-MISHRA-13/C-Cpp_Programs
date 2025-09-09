#include<stdio.h>

int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int loop1 = n/2;

    while (loop1--)
    {
        int at = 1;
        while (at--)
        {
            printf("@");
        }
        int space = n*n - (n-1) + 1;
        while (space--)
        {
            printf(" ");
        }
        
        at=1;
        printf("\n");
        
    }
    

    int loop2 = n;

    int track= n*n-(n-1);
    while (loop2)
    {
        int firstIndex = 1;
        if(firstIndex && loop2>=((n/2))){
            printf("@");
            firstIndex--;
        }
        else{
            printf(" ");
            firstIndex--;
        }
        
        int space = n*n -(n-1);
        
        int star=n;
        while (space)
        {
            if(star && (space == track)){
                printf("*");
                star--;
                track--;
            }
            else{
                printf(" ");
            }
            space--;
        }
        track++;

        int lastIndex = 1;
        if(lastIndex && loop2>(n-((n/2)-1))){
            printf(" ");
            lastIndex--;
        }
        else{
            printf("@");
            lastIndex--;
        }
        printf("\n");
        loop2--;
    }
    

    int loop3 = n/2;
    while (loop3--)
    {
         int space = n*n - (n-1) + 1;
        while (space--)
        {
            printf(" ");
        }

        int at = 1;
        while (at--)
        {
            printf("@");
        }
        printf("\n");
        
    }
    
    return 0;
}
