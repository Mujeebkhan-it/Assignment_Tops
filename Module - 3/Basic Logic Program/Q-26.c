//.Convert temperature Fahrenheit to Celsius

#include<stdio.h>
int main()
{
	float faren,celcius;
	printf("Enter the temperature in Farenheit : ");
	scanf("%f",&faren);
	
	celcius = (faren - 32.0) * 0.56;
	
	printf("Farentheit : %f to Celcius is %f",faren,celcius);
	return 0;
}
