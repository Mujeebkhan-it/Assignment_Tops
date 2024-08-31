//Write a C program to read temperature in centigrade and display a suitable
//message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot

#include<stdio.h>
int main()
{
	int tem;
	printf("Enter current temperature in centigrade : ");
	scanf("%d",&tem);

	if(tem < 0){
		printf("Freezing Weather");
	}
	else if(tem >= 0 && tem < 10){
		printf("Very Cold Weather");
	}
	else if(tem >= 10 && tem < 20){
		printf("Cold Weather");
	}  
	else if(tem >= 20 && tem < 30){
		printf("Normal in Temp");
	} 
	else if(tem >= 30 && tem < 40){
		printf("Its Hot");
	} 
	else if(tem >= 40){
		printf("Its Very Hot");
	} 
	else{
		printf("Invalid");
	}
	
	return 0;
}
