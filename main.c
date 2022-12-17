#include <stdio.h>
// Created by github.com/theriturajps | @RituRajPS <----
int main()
{
    char category;

    int option;
    int AD;
    int ADtoVikrama;
    int VikramaToAD, Vikrama;
    int ADtoSaka;
    int SakatoAD, Saka;
    int ADtoHijri;
    int HijritoAD, Hijri;

    printf("Enter Option\n\t y - agree\n\t n - disagree\n");
    printf("Enter Your Option y or n :");
    scanf("%c", &category);

    if (category == 'y')
    {
        printf("1 - AD of Christian Era to Vikrama Era\n");
        printf("2 - Vikrama to AD of Christian Era\n");
        printf("3 - AD to Saka\n");
        printf("4 - Saka to AD\n");
        printf("5 - AD to Hijri\n");
        printf("6 - Hijiri to AD\n");

        printf("Enter The Option 1,2,3,4,5,6 : ");
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Enter the year in AD : ");
            scanf("%d", &AD);
            ADtoVikrama = AD + 57;
            printf("Your Vikrama Era is %d", ADtoVikrama);
        }
        else if (option == 2)
        {
            printf("Enter the year in Vikrama : ");
            scanf("%d", &Vikrama);
            VikramaToAD = Vikrama - 57;
            printf("Your AD Era is %d", VikramaToAD);
        }
        else if (option == 3)
        {
            printf("Enter the year in AD : ");
            scanf("%d", &AD);
            ADtoSaka = AD - 78;
            printf("Your Saka era is %d", ADtoSaka);
        }
        else if (option == 4)
        {
            printf("Enter the year in Saka : ");
            scanf("%d", &Saka);
            SakatoAD = Saka + 78;
            printf("Your AD era is %d", SakatoAD);
        }
        else if (option == 5)
        {
            printf("Enter the year in AD : ");
            scanf("%d", &AD);
            ADtoHijri = (AD - 622) * 33 / 32;
            printf("Your Hijri era is %d", ADtoHijri);
        }
        else if (option == 6)
        {
            printf("Enter the year in Hijri : ");
            scanf("%d", &Hijri);
            HijritoAD = (Hijri * 32 / 33) + 622;
            printf("Your AD era is %d", HijritoAD);
        }
        else
            printf("Input Option Not Valid.");
    }
    else if (category == 'n')
    {
        printf("You can't use this convertor because you didn't accept the policy.");
    }

    return 0;
    // @RituRajPS <----
}
