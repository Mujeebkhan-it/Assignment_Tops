//WAP to accept the height of a person in centimeters and categorize the
//person according to their height.

#include<stdio.h>
int main()
{
	float height;
	printf("Enter your height in centimeter : ");
	scanf("%f",&height);
	
	if(height < 150){
		printf("Short");
	}
	else if(height >= 150 && height < 170 ){
		printf("Average");
	}
	else if(height >= 170 && height < 190 ){
		printf("Tall");
	}
	else{
		printf("Very Tall");
	}
	
	return 0;
}
