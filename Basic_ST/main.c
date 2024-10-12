#include <stdio.h>
/**
 * main - Entry point
 * Description - A program that calculates the BMI score of the user and prints the Interpretation of the score. Using the FLOAT data type
 * < 18 - Underweight
 *
 * 18 - 25 - Normal Weight
 *
 * 26 - 29 - OverWeight
 *
 * >= 30 - Obesity
 *
 * 30 - 34 - Class 1 Obesity
 *
 * 35 - 39 - Class 2 Obesity
 *
 * >= 40 - Class 3 Obesity
 *
 * Return: Always (0) Success
 */

int main(void)
{
        float height;
        float weight;
        int BMI;

    printf("Enter your height\n");
    scanf("%f", &height);

    printf("Enter your weight\n");
    scanf("%f", &weight);

BMI = (int)(weight / (height * height));

        if (BMI < 18)
        {
                printf("BMI score is %d kg/m^2 and therefore Underweight\n", BMI);
        }
        else if (BMI >= 18 && BMI < 26)
        {
                printf("BMI score is %d kg/m^2 and therefore NormalWeight\n", BMI);
        }
        else if (BMI >= 26 && BMI < 30)
        {
                printf("BMI score is %d kg/m^2 and therefore OverWeight\n", BMI);
        }
        else if (BMI >= 30)
        {
                printf("BMI score is %d kg/m^2 and therefore Obese\n", BMI); 
            /*If i comment this obese's printf part out, it'll allow to print the ACTUAL CLASS and not just OBESE since even it falls under 30 (31)it'll print obese and class 1 obese */                                             
                if (BMI >= 30 && BMI < 35)
                {
                        printf("BMI score is %d kg/m^2 and therfore Class 1 Obese\n", BMI);
                }
                else if (BMI > 34 && BMI < 40)
                {
                    printf("BMI score is %dkg/m^2 and therefore Class 2 Obese\n", BMI);
                }
                else if (BMI >= 40)
                {
                    printf("BMI score is %dkg/m^2 and therefore Class 3 Obese\n", BMI);
                }

        }
        else
        {
            printf("Invalid, Re-Enter Data\n");
        }
return (0);
}
