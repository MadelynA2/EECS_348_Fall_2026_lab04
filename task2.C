#include <stdio.h>

int main()
    {
        float new_temp;
        float temp;
        printf("Enter a temperature to find the conversion of:");
        scanf("%f", &temp);

        char og_scale;
        printf("Enter temperature scale of input (Fahrenheit, Celsius, or Kelvin) enter F, C, or K: ");
        scanf(" %c",&og_scale);

        char new_scale; 
        printf("Enter temperature scale you want value converted to (Fahrenheit, Celsius, or Kelvin) enter F, C, or K: ");
        scanf(" %c",&new_scale);


        int C_val;
        if (not (og_scale=='c' || og_scale=='C')){
            if (og_scale=='f' || og_scale=='F'){
                C_val=(temp-32)/1.8;
            }
            else if (og_scale=='K' || og_scale=='k'){
                C_val=temp-273.15;
            }
        }
        else{
            C_val=temp;
        }


        if (new_scale=='f' || new_scale=='F'){
            new_temp=1.8*C_val+32;
        }
        else if (new_scale=='k' || new_scale=='K'){
            new_temp=C_val+273.15;
        }
        else if (new_scale=='c' || new_scale=='C'){
            new_temp=C_val;
        }
        
        printf("Converted temperature: %.2f %c\n",new_temp,new_scale);
        if(C_val<10){
            printf("Temperature Category: Cold\n");
            printf("Weather Advisory: Wear a coat\n");
        }
        else if(C_val<25){
            printf("Temperature Category: Comfortable\n");
            printf("Weather Advisory: Enjoy the nice day\n");
        }
        else if(C_val<35){
            printf("Temperature Category: Hot");
            printf("Weather Advisory: Bring water\n");
        }
        else{
            printf("Temperature Category: Extreme Heat");
            printf("Weather Advisory: Stay indoors\n");
        }
    }   