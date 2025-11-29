#include<stdio.h>

float C_to_F(float celcius){
    return (celcius * 9/5) + 32;
}

float F_to_C( float fahrenheit){
    return (fahrenheit - 32) * 5/9;
}

float C_to_K( float celcius){
    return celcius + 273.15;
}

float K_to_C( float kelvin){
    return kelvin + 273.15;
}

void main(){
    float cTemp1, cTemp2, fTemp3, fTemp4, kTemp5, kTemp6;

     printf("Enter 2 temperatures in Celcius: ");
    scanf("%f %f", &cTemp1, &cTemp2);

    printf("Enter 2 temperatures in Fahrenheit: ");
    scanf("%f %f", &fTemp3, &fTemp4);

    printf("Enter 2 temperatures in Kelvin: ");
    scanf("%f %f", &kTemp5, &kTemp6);

    printf("Temperature conversions are as follows: \n");
    printf("1. Celcius(%.2f) to Fahrenheit(%.2f)\n", cTemp1, C_to_F(cTemp1));
    printf("2. Celcius(%.2f) to Fahrenheit(%.2f)\n", cTemp2, C_to_F(cTemp2));

    printf("3. Fahrenheit(%.2f) to Celcius(%.2f)\n", fTemp3, F_to_C(fTemp3));
    printf("4. Fahrenheit(%.2f) to Celcius(%.2f)\n", fTemp4, F_to_C(fTemp4));

    printf("5. Celcius(%.2f) to Kelvin(%.2f)\n", cTemp1, C_to_K(cTemp1));
    printf("6. Celcius(%.2f) to Kelvin(%.2f)\n", cTemp2, C_to_K(cTemp2));

    printf("7. Kelvin(%.2f) to Celcius(%.2f)\n", kTemp5, K_to_C(kTemp5));
    printf("8. Kelvin(%.2f) to Celcius(%.2f)\n", kTemp6, K_to_C(kTemp6));
}

