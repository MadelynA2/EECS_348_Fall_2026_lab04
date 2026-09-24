#include <stdio.h>

int main()
    {
        int new_temp;
        int temp;
        printf("Enter a temperature to find the conversion of:");
        scanf("%d", &temp);

        char og_scale;
        printf("Enter temperature scale of input (Fahrenheit, Celsius, or Kelvin) enter F, C, or K");
        scanf("%s",og_scale);

        char new_scale; 
        printf("Enter temperature scale you want value converted to (Fahrenheit, Celsius, or Kelvin) enter F, C, or K");
        scanf("%s",new_scale);

        int celsius_val;

        if (new_scale=="f" || new_scale=="F")
        {
        
            
                new_temp=temp*1.8+32
            }
            else if (og_scale=="K" || og_scale=="k"){

            }

        }

    }