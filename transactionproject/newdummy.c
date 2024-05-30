#include <stdio.h>


int main()
{   
    int oh;
        printf("Please select:\n");
        printf("1.For my number\n");
        printf("2.For another number\n");
        printf("3.Favorites\n\n");
        printf("Press 00 for main menu 0 for previous menu\n");
        scanf("%d",&oh);
        
        if(oh = 1)
        {
            printf("Enter AIRTIME amount:\n\n");
            printf("Press 00 for main menu 0 for previous menu\n");
        }
        else if(oh = 3)
        {
            printf("Favorite Doesn't exist");
        }
        else if(oh = 0)
        {
            printf("lf",buyairtimebundle());
        }
        else if(oh == 00);
        {
            printf("%d",main());
        }

}