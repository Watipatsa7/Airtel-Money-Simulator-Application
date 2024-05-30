#include <stdio.h>

int main()
{   
    int select,pos,pos2,pos3,pos4;

    printf("Please Select:\n");
    printf("1.Buy AIRTIME\n");
    printf("2.Buy Bundles\n");
    scanf("%d",&select);

    if(select == 1 )
    {
        char show[5][50] = 
        {
            "Please select:\n",
            "1.For my number\n",
            "2.For another number\n",
            "3.Favorites\n\n",
            "Press 00 for main menu 0 for previous menu\n",
        };
        for(int index=0; index<5; index++)
        {
            printf("%s",show[index]);
        }
        scanf("%d",&pos);

        if (pos==1 || pos==2)
        {
            printf("Enter AIRTIME amount:\n\n");
            printf("Press 00 for main menu 0 for previous menu\n"); 
        }
        else if (pos==3)
        {
            printf("\nFavorite Doesn't exist");
        }
        else
        { 
            printf("\nplease choose the listed options");
        }
    }
    else if (select==2)
    {
        char bundle[9][50]= 
        {
            "Buy Bundles\n",
            "1.Internet Bundles\n",
            "2.Voice Bundles\n",
            "3.SMS Bundle\n",
            "4.Kutapa\n",
            "5.Download Airtel App(200MB Free)\n",
            "6.Roaming Bundles\n",
            "7.Check Balance\n",
            "8.Auto Renewal\n",
        };
        for(int index2=0; index2<9; index2++)
        {
            printf("%s",bundle[index2]);        
        }
        scanf("%d",&pos2);

        if(pos2==1)
        {
            char PaNetBundles[9][50]=
            {
                "PaNet Bundles\n",
                "1.PaNet MoFaya Bundles\n",
                "2.PaNet WhatsApp\n",
                "3.PaNet Gifts\n",
                "4.Home Broadband\n",
                "5.MiFi Bundles\n",
                "6.PaNet Office Internet\n",
                "0 for previous menu\n",
                "00 main mmenu\n", 
            };
            for (int index3=0; index3<9; index3++)
            {
                printf("%s",PaNetBundles[index3]);
            }
        }   
            scanf("%d",&pos3);

            if(pos3==1)
            {
                char mofaya[5][50]=
                {
                    "1.PaNet Mofaya Daily",
                    "2.PaNet Mofaya Weekly",
                    "3.PaNet Mofaya Monthly",
                    "0 for previous menu",
                    "00 main menu",
                };
                for(int index3=0; index3<5; index3++)
                {
                    printf("%s",mofaya[index3]);
                }
            }   
            scanf("%d",&pos4);
               
                if(pos4==1)
                {
                   char mofayadaily[6][50]=
                   {
                    "PaNet MoFaya Daily",
                    "1.2GB,24Hrs,K1,000",
                    "2.800MB,24Hrs,K600",
                    "3.80MB,24Hrs,K200",
                    "0 for previous menu",
                    "00 main menu",
                   };
                   for(int index4=0; index4<6; index4++)
                   {
                    printf("&s",mofayadaily[index4]);
                   } 
                }
        }

}