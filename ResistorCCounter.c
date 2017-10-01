#include <stdio.h>
int fourband(int band1, int band2, float multiplier, float tolerance){
float total;
printf("Good. now tell me the color of the first stripe.\n");
printf("Enter the number that matches to the according color.\n");
printf("1 for Black\n");
printf("2 for Brown\n");
printf("3 for Red\n");
printf("4 for Orange\n");
printf("5 for Yellow\n");
printf("6 for Green\n");
printf("7 for Blue\n");
printf("8 for Purple\n");
printf("9 for Gray\n");
printf("10 for White\n");
printf("11 for Gold\n");
printf("12 for silver\n");

    do{
        scanf("%d", &band1);
        if(band1!=1 && band1!=2 && band1!=3 && band1!=4 && band1!=5 && band1!=6 && band1!=7 && band1!=8 && band1!=9 && band1!=10 && band1!=11 && band1!=12){
            printf("There is no such option. Please choose a valid one. ");
        }
    }while (band1!=1 && band1!=2 && band1!=3 && band1!=4 && band1!=5 && band1!=6 && band1!=7 && band1!=8 && band1!=9 && band1!=10 && band1!=11 && band1!=12);

printf("\n------------------------------------------------------------------------------\n\n");
printf("Now tell me the color of the second stripe.\n");
printf("Enter the number that matches to the according color.\n");
printf("1 for Black\n");
printf("2 for Brown\n");
printf("3 for Red\n");
printf("4 for Orange\n");
printf("5 for Yellow\n");
printf("6 for Green\n");
printf("7 for Blue\n");
printf("8 for Purple\n");
printf("9 for Gray\n");
printf("10 for White\n");
printf("11 for Gold\n");
printf("12 for silver\n");


    do{
        scanf("%d", &band2);
        if(band2!=1 && band2!=2 && band2!=3 && band2!=4 && band2!=5 && band2!=6 && band2!=7 && band2!=8 && band2!=9 && band2!=10 && band2!=11 && band2!=12){
            printf("There is no such option. Please choose a valid one. ");
        }
    }while (band2!=1 && band2!=2 && band2!=3 && band2!=4 && band2!=5 && band2!=6 && band2!=7 && band2!=8 && band2!=9 && band2!=10 && band2!=11 && band2!=12);

printf("\n------------------------------------------------------------------------------\n\n");
printf("Now tell me the color of the third stripe.\n");
printf("Enter the number that matches to the according color.\n");
printf("1 for Black\n");
printf("2 for Brown\n");
printf("3 for Red\n");
printf("4 for Orange\n");
printf("5 for Yellow\n");
printf("6 for Green\n");
printf("7 for Blue\n");
printf("8 for Purple\n");
printf("9 for Gray\n");
printf("10 for White\n");
printf("11 for Gold\n");
printf("12 for silver\n");

    do{
        scanf("%f", &multiplier);
        if(multiplier!=1 && multiplier!=2 && multiplier!=3 && multiplier!=4 && multiplier!=5 && multiplier!=6 && multiplier!=7 && multiplier!=8 && multiplier!=9 && multiplier!=10 && multiplier!=11 && multiplier!=12){
            printf("There is no such option. Please choose a valid one. ");
        }

   } while (multiplier!=1 && multiplier!=2 && multiplier!=3 && multiplier!=4 && multiplier!=5 && multiplier!=6 && multiplier!=7 && multiplier!=8 && multiplier!=9 && multiplier!=10 && multiplier!=11 && multiplier!=12);

printf("\n------------------------------------------------------------------------------\n\n");
printf("Now tell me the color of the fourth stripe.\n");
printf("Enter the number that matches to the according color.\n");
printf("1 for Black\n");
printf("2 for Brown\n");
printf("3 for Red\n");
printf("4 for Orange\n");
printf("5 for Yellow\n");
printf("6 for Green\n");
printf("7 for Blue\n");
printf("8 for Purple\n");
printf("9 for Gray\n");
printf("10 for White\n");
printf("11 for Gold\n");
printf("12 for silver\n");
printf("13 for no color\n");

    do{
        scanf("%f", &tolerance);
        if(tolerance!=1 && tolerance!=2 && tolerance!=3 && tolerance!=4 && tolerance!=5 && tolerance!=6 && tolerance!=7 && tolerance!=8 && tolerance!=9 && tolerance!=10 && tolerance!=11 && tolerance!=12 && tolerance!=13){
            printf("There is no such option. Please choose a valid one. ");
        }

   } while (tolerance!=1 && tolerance!=2 && tolerance!=3 && tolerance!=4 && tolerance!=5 && tolerance!=6 && tolerance!=7 && tolerance!=8 && tolerance!=9 && tolerance!=10 && tolerance!=11 && tolerance!=12 && tolerance!=13);

if (band1==1){band1=0;}
if (band1==2){band1=1;}
if (band1==3){band1=2;}
if (band1==4){band1=3;}
if (band1==5){band1=4;}
if (band1==6){band1=5;}
if (band1==7){band1=6;}
if (band1==8){band1=7;}
if (band1==9){band1=8;}
if (band1==10){band1=9;}

if (band2==1){band2=0;}
if (band2==2){band2=1;}
if (band2==3){band2=2;}
if (band2==4){band2=3;}
if (band2==5){band2=4;}
if (band2==6){band2=5;}
if (band2==7){band2=6;}
if (band2==8){band2=7;}
if (band2==9){band2=8;}
if (band2==10){band2=9;}

if (multiplier==1){multiplier=1;}
if (multiplier==2){multiplier=10;}
if (multiplier==3){multiplier=100;}
if (multiplier==4){multiplier=1000;}
if (multiplier==5){multiplier=10000;}
if (multiplier==6){multiplier=100000;}
if (multiplier==7){multiplier=1000000;}
if (multiplier==8){multiplier=10000000;}
if (multiplier==11){multiplier=0.1;}
if (multiplier==12){multiplier=0.01;}

if (tolerance==2){tolerance=1;}
if (tolerance==3){tolerance=2;}
if (tolerance==6){tolerance=0.5;}
if (tolerance==7){tolerance=0.25;}
if (tolerance==8){tolerance=0.1;}
if (tolerance==9){tolerance=0.05;}
if (tolerance==11){tolerance=5;}
if (tolerance==12){tolerance=10;}
if (tolerance==13){tolerance=20;}

total= ((band1*10)+band2) * multiplier;
printf("\n------------------------------------------------------------------------------\n");
printf("\nResistor power: %.2f Ohm, +-%.2f tolerance",total, tolerance);
     printf("\n\nUse my calculating powers anytime!\n");
printf("------------------------------------------------------------------------------\n\n");
printf("Press ENTER to dismiss me\n\n");
printf("------------------------------------------------------------------------------\n");
printf("GitHub: creatorpanda\n");
printf("creation of 2017\n");
getch();
return 0;
}



int fiveband(int band1, int band2, int band3, float multiplier, float tolerance){
float total;
printf("Good. now tell me the color of the first stripe.\n");
printf("Enter the number that matches to the according color.\n");
printf("1 for Black\n");
printf("2 for Brown\n");
printf("3 for Red\n");
printf("4 for Orange\n");
printf("5 for Yellow\n");
printf("6 for Green\n");
printf("7 for Blue\n");
printf("8 for Purple\n");
printf("9 for Gray\n");
printf("10 for White\n");
printf("11 for Gold\n");
printf("12 for silver\n");

    do{
        scanf("%d", &band1);
        if(band1!=1 && band1!=2 && band1!=3 && band1!=4 && band1!=5 && band1!=6 && band1!=7 && band1!=8 && band1!=9 && band1!=10 && band1!=11 && band1!=12){
            printf("There is no such option. Please choose a valid one. ");
        }
    }while (band1!=1 && band1!=2 && band1!=3 && band1!=4 && band1!=5 && band1!=6 && band1!=7 && band1!=8 && band1!=9 && band1!=10 && band1!=11 && band1!=12);

printf("\n------------------------------------------------------------------------------\n\n");
printf("Now tell me the color of the second stripe.\n");
printf("Enter the number that matches to the according color.\n");
printf("1 for Black\n");
printf("2 for Brown\n");
printf("3 for Red\n");
printf("4 for Orange\n");
printf("5 for Yellow\n");
printf("6 for Green\n");
printf("7 for Blue\n");
printf("8 for Purple\n");
printf("9 for Gray\n");
printf("10 for White\n");
printf("11 for Gold\n");
printf("12 for silver\n");

    do{
        scanf("%d", &band2);
        if(band2!=1 && band2!=2 && band2!=3 && band2!=4 && band2!=5 && band2!=6 && band2!=7 && band2!=8 && band2!=9 && band2!=10 && band2!=11 && band2!=12){
            printf("There is no such option. Please choose a valid one. ");
        }
    }while (band2!=1 && band2!=2 && band2!=3 && band2!=4 && band2!=5 && band2!=6 && band2!=7 && band2!=8 && band2!=9 && band2!=10 && band2!=11 && band2!=12);

printf("\n------------------------------------------------------------------------------\n\n");
printf("Now tell me the color of the third stripe.\n");
printf("Enter the number that matches to the according color.\n");
printf("1 for Black\n");
printf("2 for Brown\n");
printf("3 for Red\n");
printf("4 for Orange\n");
printf("5 for Yellow\n");
printf("6 for Green\n");
printf("7 for Blue\n");
printf("8 for Purple\n");
printf("9 for Gray\n");
printf("10 for White\n");
printf("11 for Gold\n");
printf("12 for silver\n");

    do{
        scanf("%d", &band3);
        if(band3!=1 && band3!=2 && band3!=3 && band3!=4 && band3!=5 && band3!=6 && band3!=7 && band3!=8 && band3!=9 && band3!=10 && band3!=11 && band3!=12){
            printf("There is no such option. Please choose a valid one. ");
        }
    }while (band3!=1 && band3!=2 && band3!=3 && band3!=4 && band3!=5 && band3!=6 && band3!=7 && band3!=8 && band3!=9 && band3!=10 && band3!=11 && band3!=12);

printf("\n------------------------------------------------------------------------------\n\n");
printf("Now tell me the color of the fourth stripe.\n");
printf("Enter the number that matches to the according color.\n");
printf("1 for Black\n");
printf("2 for Brown\n");
printf("3 for Red\n");
printf("4 for Orange\n");
printf("5 for Yellow\n");
printf("6 for Green\n");
printf("7 for Blue\n");
printf("8 for Purple\n");
printf("9 for Gray\n");
printf("10 for White\n");
printf("11 for Gold\n");
printf("12 for silver\n");

    do{
        scanf("%f", &multiplier);
        if(multiplier!=1 && multiplier!=2 && multiplier!=3 && multiplier!=4 && multiplier!=5 && multiplier!=6 && multiplier!=7 && multiplier!=8 && multiplier!=9 && multiplier!=10 && multiplier!=11 && multiplier!=12){
            printf("There is no such option. Please choose a valid one. ");
        }

   } while (multiplier!=1 && multiplier!=2 && multiplier!=3 && multiplier!=4 && multiplier!=5 && multiplier!=6 && multiplier!=7 && multiplier!=8 && multiplier!=9 && multiplier!=10 && multiplier!=11 && multiplier!=12);

printf("\n------------------------------------------------------------------------------\n\n");
printf("Now tell me the color of the fifth stripe.\n");
printf("Enter the number that matches to the according color.\n");
printf("1 for Black\n");
printf("2 for Brown\n");
printf("3 for Red\n");
printf("4 for Orange\n");
printf("5 for Yellow\n");
printf("6 for Green\n");
printf("7 for Blue\n");
printf("8 for Purple\n");
printf("9 for Gray\n");
printf("10 for White\n");
printf("11 for Gold\n");
printf("12 for silver\n");
printf("13 for no color\n");

    do{
        scanf("%f", &tolerance);
        if(tolerance!=1 && tolerance!=2 && tolerance!=3 && tolerance!=4 && tolerance!=5 && tolerance!=6 && tolerance!=7 && tolerance!=8 && tolerance!=9 && tolerance!=10 && tolerance!=11 && tolerance!=12 && tolerance!=13){
            printf("There is no such option. Please choose a valid one. ");
        }

   } while (tolerance!=1 && tolerance!=2 && tolerance!=3 && tolerance!=4 && tolerance!=5 && tolerance!=6 && tolerance!=7 && tolerance!=8 && tolerance!=9 && tolerance!=10 && tolerance!=11 && tolerance!=12 && tolerance!=13);

if (band1==1){band1=0;}
if (band1==2){band1=1;}
if (band1==3){band1=2;}
if (band1==4){band1=3;}
if (band1==5){band1=4;}
if (band1==6){band1=5;}
if (band1==7){band1=6;}
if (band1==8){band1=7;}
if (band1==9){band1=8;}
if (band1==10){band1=9;}

if (band2==1){band2=0;}
if (band2==2){band2=1;}
if (band2==3){band2=2;}
if (band2==4){band2=3;}
if (band2==5){band2=4;}
if (band2==6){band2=5;}
if (band2==7){band2=6;}
if (band2==8){band2=7;}
if (band2==9){band2=8;}
if (band2==10){band2=9;}

if (band3==1){band3=0;}
if (band3==2){band3=1;}
if (band3==3){band3=2;}
if (band3==4){band3=3;}
if (band3==5){band3=4;}
if (band3==6){band3=5;}
if (band3==7){band3=6;}
if (band3==8){band3=7;}
if (band3==9){band3=8;}
if (band3==10){band3=9;}

if (multiplier==1){multiplier=1;}
if (multiplier==2){multiplier=10;}
if (multiplier==3){multiplier=100;}
if (multiplier==4){multiplier=1000;}
if (multiplier==5){multiplier=10000;}
if (multiplier==6){multiplier=100000;}
if (multiplier==7){multiplier=1000000;}
if (multiplier==8){multiplier=10000000;}
if (multiplier==11){multiplier=0.1;}
if (multiplier==12){multiplier=0.01;}


if (tolerance==2){tolerance=1;}
if (tolerance==3){tolerance=2;}
if (tolerance==6){tolerance=0.5;}
if (tolerance==7){tolerance=0.25;}
if (tolerance==8){tolerance=0.1;}
if (tolerance==9){tolerance=0.05;}
if (tolerance==11){tolerance=5;}
if (tolerance==12){tolerance=10;}
if (tolerance==13){tolerance=20;}

total= ((band1*100)+(band2*10) +band3) * multiplier;
printf("\n------------------------------------------------------------------------------\n");
printf("\nResistor power: %.2f Ohm, +-%.2f tolerance",total, tolerance);
     printf("\n\nUse my calculating powers anytime!\n");
printf("------------------------------------------------------------------------------\n\n");
printf("Press ENTER to dismiss me\n\n");
printf("------------------------------------------------------------------------------\n");
printf("GitHub: creatorpanda\n");
printf("creation of 2017\n");
getch();
return 0;
}



int main()
{
    int colorcounter;
    int band1;
    int band2;
    int band3;
    float multiplier;
    float tolerance;

printf("Hello human. I will help you count your resistor's power.\n");
printf("This program can support 4-band and 5-band resistors.\n");
printf("How many colors does your resistor have?\n");
do{
scanf("%d", &colorcounter);
if (colorcounter!=4 && colorcounter!=5) {printf("I cannot support such a resistor! Please choose one of the available types.");}
} while (colorcounter!=4 && colorcounter!=5);
printf("\n------------------------------------------------------------------------------\n\n");
if (colorcounter==4){fourband(band1, band2, multiplier, tolerance);}
    if (colorcounter==5){fiveband(band1, band2, band3, multiplier, tolerance);}
return (0);
}
