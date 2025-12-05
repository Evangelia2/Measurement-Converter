#include <stdio.h>
#include <stdlib.h>
 int main(){

    int option2,res;
    float temperature1,temperature2,currency1,currency2,mass1,mass2;
    char option1;

    printf("Welcome!\n");
    printf("Please choose one of the following options:\n");
    printf("Temperature(T)\nCurrency(C)\nMass(M)\n");
    scanf("%c",&option1);
    while((option1!='T')&&(option1!='C')&&(option1!='M')){
        printf("Failed to read an option.Try again!\n");
        while (getchar()!='\n');
        scanf("%c",&option1);
    }



    if (option1=='T'){
        printf("Please choose one of the following options:\n");
        printf("(1)Celcius to Fahrenheit\n(2)Fahrenheit to Celcius\n");
        scanf("%d",&option2);
        while ((option2!=1)&&(option2!=2)){
            printf("Failed to read an option.Try again!\n");
            while (getchar()!='\n');
            scanf("%d",&option2);
        }


        if (option2==1){
            printf("Please input the temperature you want to convert from Celcius to Fahrenheit:\n");
            while (scanf("%f",&temperature1)!=1){
                printf("Failed to read a temperature!\n");
                while (getchar()!='\n');
            }
            temperature2 = 32 + 1.8*temperature1;
            printf("Temperature in Celcius:%f\n",temperature1);
            printf("Temperature in Fahrenheit:%f\n",temperature2);


        }else{
            printf("Please input the temperature you want to convert from Fahrenheit to Celcius:\n");
            while (scanf("%f",&temperature1)!=1){
                printf("Failed to read a temperature!\n");
                while (getchar()!='\n');
            }
            temperature2 = ((temperature1-32)*5)/9;
            printf("Temperature in Celcius:%f\n",temperature1);
            printf("Temperature in Fahrenheit:%f\n",temperature2);
        }



    }else if (option1=='C'){
        printf("Please choose one of the following options:\n");
        printf("(1)EUR to USD\n(2)EUR to GBP\n(3)EUR to CNY\n");
        scanf("%d",&option2);
        while ((option2!=1)&&(option2!=2)&&(option2!=3)){
            printf("Failed to read an option.Try again!\n");
            while (getchar()!='\n');
            scanf("%d",&option2);
        }


        if (option2==1){
            printf("Please input the amount of money you want to convert from EUR to USD:\n");
            while ((scanf("%f",&currency1)!=1)||(currency1<0)){
                printf("Failed to read an amount!\n");
                while (getchar()!='\n');
            }
            currency2 = currency1 * 1.05336;
            printf("Currency in EUR:%f\n",currency1);
            printf("Currency in USD:%f\n",currency2);


        }else if (option2==2){
            printf("Please input the amount of money you want to convert from EUR to GBP:\n");
            while ((scanf("%f",&currency1)!=1)||(currency1<0)){
                printf("Failed to read an amount!\n");
                while (getchar()!='\n');
            }
            currency2 = currency1 * 1.16748;
            printf("Currency in EUR:%f\n",currency1);
            printf("Currency in GBP:%f\n",currency2);


        }else{
            printf("Please input the amount of money you want to convert from EUR to CNY:\n");
            while ((scanf("%f",&currency1)!=1)||(currency1<0)){
                printf("Failed to read an amount!\n");
                while (getchar()!='\n');
            }
            currency2 = currency1 * 7.4049488;
            printf("Currency in EUR:%f\n",currency1);
            printf("Currency in CNY:%f\n",currency2);
        }



    }else {
        printf("Please choose one of the following options:\n");
        printf("(1)Kg to lb\n(2)Gr to oz\n");
        scanf("%d",&option2);
        while ((option2!=1)&&(option2!=2)){
            printf("Failed to read an option.Try again!\n");
            while (getchar()!='\n');
            scanf("%d",&option2);
        }


        if (option2==1){
            printf("Please input the weight you want to convert from Kg to lb:\n");
            while ((scanf("%f",&mass1)!=1)||(mass1<0)){
                printf("Failed to read a mass!\n");
                while (getchar()!='\n');
            }
            mass2 = mass1 * 2.20462262;
            printf("Mass in Kg:%f\n",mass1);
            printf("Mass in lb:%f\n",mass2);


        }else{
            printf("Please input the weight you want to convert from Gr to oz:\n");
            while ((scanf("%f",&mass1)!=1)||(mass1<0)){
                printf("Failed to read a mass!\n");
                while (getchar()!='\n');
            }
            mass2 = mass1/437.5;
            printf("Mass in Gr:%f\n",mass1);
            printf("Mass in oz:%f\n",mass2);
        }
    }
    printf("The end!");
    return 0;
 }