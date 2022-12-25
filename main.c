#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <conio.h>
// Created by github.com/theriturajps | @RituRajPS <----
int main()
{
    system("color 0e");
    char category;
    int option;
    int AD;
    int ADtoVikrama;
    int VikramaToAD, Vikrama;
    int ADtoSaka;
    int SakatoAD, Saka;
    int ADtoHijri;
    int HijritoAD, Hijri;

    system("cls");
    printf("\n====  Welcome to Era Convertor  ====\n");
    printf("\n====    Created By RituRajPS    ====\n");
    printf("\n----  github.com/theriturajps   ----\n");
    printf("\nEnter Option\n\t [y] - To Start\n\t [n] - To Exit\n\n");
    printf("Enter Your Option [y] or [n] :");
    scanf("%c", &category);

    if (category == 'y')
    {
        start:
        system("cls");
        printf("\n====      Created By RituRajPS       ====\n");
        printf("\n----     github.com/theriturajps     ----\n\n");
        printf("Options -  Desciption\n");
        printf("  [1]   -  AD of Christian Era to Vikrama Era\n");
        printf("  [2]   -  Vikrama to AD of Christian Era\n");
        printf("  [3]   -  AD to Saka\n");
        printf("  [4]   -  Saka to AD\n");
        printf("  [5]   -  AD to Hijri\n");
        printf("  [6]   -  Hijri to AD\n");

        printf("Enter The Option [1],[2],[3],[4],[5],[6] : ");
        scanf("%d", &option);

        if (option == 1)
        {
            system("cls");
            printf("\n====    Convert AD to Vikrama Era    ====\n\n");
            printf("Enter the year in AD : ");
            scanf("%d", &AD);
            ADtoVikrama = AD + 57;
            printf("Your Vikrama Era is %d \n", ADtoVikrama);
            system("pause");
            goto start;
            
        }
        else if (option == 2)
        {
            system("cls");
            printf("\n====    Convert Vikrama to AD Era    ====\n\n");
            printf("Enter the year in Vikrama : ");
            scanf("%d", &Vikrama);
            VikramaToAD = Vikrama - 57;
            printf("Your AD Era is %d", VikramaToAD);
            system("pause");
            goto start;
        }
        else if (option == 3)
        {
            system("cls");
            printf("\n====     Convert AD to Saka Era      ====\n\n");
            printf("Enter the year in AD : ");
            scanf("%d", &AD);
            ADtoSaka = AD - 78;
            printf("Your Saka era is %d", ADtoSaka);
            system("pause");
            goto start;
        }
        else if (option == 4)
        {
            system("cls");
            printf("\n====     Convert Saka to AD Era      ====\n\n");
            printf("Enter the year in Saka : ");
            scanf("%d", &Saka);
            SakatoAD = Saka + 78;
            printf("Your AD era is %d", SakatoAD);
            system("pause");
            goto start;
        }
        else if (option == 5)
        {
            system("cls");
            printf("\n====     Convert AD to Hijri Era     ====\n\n");
            printf("Enter the year in AD : ");
            scanf("%d", &AD);
            ADtoHijri = (AD - 622) * 33 / 32;
            printf("Your Hijri era is %d", ADtoHijri);
            system("pause");
            goto start;
        }
        else if (option == 6)
        {
            system("cls");
            printf("\n====     Convert Hijri to AD Era     ====\n\n");
            printf("Enter the year in Hijri : ");
            scanf("%d", &Hijri);
            HijritoAD = (Hijri * 32 / 33) + 622;
            printf("Your AD era is %d", HijritoAD);
            system("pause");
            goto start;
        }
        else
            printf("Input Option Not Valid.\n\n");
            system("pause");
            goto start;
    }
    else if (category == 'n')
    {
        printf("You can't use this convertor because you didn't accept the policy.");
    }

    return 0;
    // @RituRajPS <----
}
