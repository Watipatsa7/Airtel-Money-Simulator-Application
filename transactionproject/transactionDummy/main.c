#include <stdio.h>
char money()
{
    printf("1.Airtime\n");
    printf("2.Airtel Money\n");
    printf("0 for previous menu\n");
    printf("00 main menu\n");
}
double buyairtimebundle()
{
    int select,pos,pos2,pos3,pos4;
    char money1,money2,money3;

    printf("\nPlease Select:\n");
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
            printf("\nEnter AIRTIME amount:\n\n");
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
            "\nBuy Bundles\n",
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
                "\nPaNet Bundles\n",
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
                    "\n1.PaNet Mofaya Daily\n",
                    "2.PaNet Mofaya Weekly\n",
                    "3.PaNet Mofaya Monthly\n",
                    "0 for previous menu\n",
                    "00 main menu\n",
                };
                for(int index3=0; index3<5; index3++)
                {
                    printf("%s",mofaya[index3]);
                }
            }
            scanf("%d",&pos4);

                if(pos4==1)
                {
                    start:
                   char mofayadaily[6][50]=
                   {
                    "\nPaNet MoFaya Daily\n",
                    "1.2GB,24Hrs,K1,000\n",
                    "2.800MB,24Hrs,K600\n",
                    "3.80MB,24Hrs,K200\n",
                    "0 for previous menu\n",
                    "00 main menu\n",
                   };
                   for(int index4=0; index4<6; index4++)
                   {
                    printf("%s",mofayadaily[index4]);
                   }
                   scanf("%d",&money1);
                   if (money1==1 || money1==2 || money1==3 )
                   {
                        money();
                   }
                   else
                   {
                    printf("\nInvalid Input Please retry");
                    goto start;
                   }
                }
                if(pos4==2)
                {
                    char mofayaweekly[6][50]=
                   {
                    "\nPaNet MoFaya Weekly\n",
                    "1.20GB,7 Days,K7,500\n",
                    "2.8GB,7 Days,K4,000\n",
                    "3.2.5GB,7 Days,K1,500\n",
                    "0 for previous menu\n",
                    "00 main menu\n",
                   };
                   for(int index=0; index<5; index++)
                   {
                    printf("%s",mofayaweekly[index]);
                   }
                   scanf("%d",&money2);
                   if (money2==1 || money2==2 || money2==3 )
                   {
                        money();
                   }
                   else
                   {
                    printf("\nInvalid Input Please retry");
                    goto start;
                   }
                }
                if(pos4==3)
                {
                    char mofayamonthly[5][50]=
                   {
                    "\n1.PaNet MoFaya 65GB K24000\n",
                    "2.PaNet MoFaya 25.5GB K12000\n",
                    "3.1.PaNet MoFaya 3.2GB K6000\n",
                    "0 for previous menu\n",
                    "00 main menu\n",
                   };
                   for(int index=0; index<5; index++)
                   {
                    printf("%s",mofayamonthly[index]);
                   }
                }
    }
}

int main ()
{
    int ind,option;
    char firstdisplay[7][20]=
    {
        "Buy Airtime/Bundle",
        "Send Money",
        "Make Payments",
        "Withdraw Money",
        "Financial Services",
        "Bank",
        "Account/PIN",
    };
    for( ind = 0; ind < 7; ind++)
    {
        printf("%d.%s\n",ind+1,firstdisplay[ind]);
    }
    printf("Select your option:");
    scanf("%d",&option);

    if(option=1)
    {
        buyairtimebundle();
    }
}
