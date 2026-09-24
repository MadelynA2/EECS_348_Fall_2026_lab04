/*
 * Name: Madelyn Armitage
 * KUID: 3190813
 * Lab Session: Thursday 11 am
 * Lab Assignment: Lab 3 - Task 2
 * Program Description:
 *     This program allows the user to enter a temperature in Fahrenheit,
 *     Celsius, or Kelvin and convert it to another temperature scale.
 *     The program displays the converted temperature and categorizes it
 *     into a predefined temperature range to provide an appropriate
 *     weather advisory.
 */


#include <stdio.h>

int main()
{
    float new_temp;
    float temp;

    printf("Enter a temperature to find the conversion of: ");

    while (scanf("%f", &temp) != 1)
    {
        printf("Invalid input. Please enter a number: ");

        while (getchar() != '\n')
        {
        }
    }

    char og_scale;

    printf("Enter temperature scale of input (Fahrenheit, Celsius, or Kelvin) enter F, C, or K: ");
    scanf(" %c", &og_scale);

    while (og_scale != 'f' && og_scale != 'F' &&
           og_scale != 'c' && og_scale != 'C' &&
           og_scale != 'k' && og_scale != 'K')
    {
        printf("Invalid scale. Enter F, C, or K: ");
        scanf(" %c", &og_scale);
    }

    float C_val;

    // Convert original temperature to Celsius
    if (og_scale == 'f' || og_scale == 'F')
    {
        C_val = (temp - 32) / 1.8;
    }
    else if (og_scale == 'k' || og_scale == 'K')
    {
        C_val = temp - 273.15;
    }
    else
    {
        C_val = temp;
    }

    // Check for below absolute zero
    while (C_val < -273.15)
    {
        printf("Invalid temperature. Temperature cannot be below absolute zero.\n");
        printf("Enter a new temperature: ");

        while (scanf("%f", &temp) != 1)
        {
            printf("Invalid input. Please enter a number: ");

            while (getchar() != '\n')
            {
            }
        }

        // Recalculate Celsius value
        if (og_scale == 'f' || og_scale == 'F')
        {
            C_val = (temp - 32) / 1.8;
        }
        else if (og_scale == 'k' || og_scale == 'K')
        {
            C_val = temp - 273.15;
        }
        else
        {
            C_val = temp;
        }
    }

    char new_scale;

    printf("Enter temperature scale you want value converted to "
           "(Fahrenheit, Celsius, or Kelvin) enter F, C, or K: ");
    scanf(" %c", &new_scale);

    while (new_scale != 'f' && new_scale != 'F' &&
           new_scale != 'c' && new_scale != 'C' &&
           new_scale != 'k' && new_scale != 'K')
    {
        printf("Invalid scale. Enter F, C, or K: ");
        scanf(" %c", &new_scale);
    }

    if (new_scale == 'f' || new_scale == 'F')
    {
        new_temp = 1.8 * C_val + 32;
    }
    else if (new_scale == 'k' || new_scale == 'K')
    {
        new_temp = C_val + 273.15;
    }
    else
    {
        new_temp = C_val;
    }

    printf("Converted temperature: %.2f %c\n", new_temp, new_scale);

    if (C_val < 0)
    {
        printf("Temperature Category: Freezing\n");
        printf("Weather Advisory: Bundle up\n");
    }
    else if (C_val < 10)
    {
        printf("Temperature Category: Cold\n");
        printf("Weather Advisory: Wear a coat\n");
    }
    else if (C_val < 25)
    {
        printf("Temperature Category: Comfortable\n");
        printf("Weather Advisory: Enjoy the nice day\n");
    }
    else if (C_val < 35)
    {
        printf("Temperature Category: Hot\n");
        printf("Weather Advisory: Bring water\n");
    }
    else
    {
        printf("Temperature Category: Extreme Heat\n");
        printf("Weather Advisory: Stay indoors\n");
    }

    return 0;
}