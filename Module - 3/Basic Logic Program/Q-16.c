//Convert country’s name in abbreviate form
#include<stdio.h>
#include<string.h>
int main()
{
	char cntname[200],abr[10];
	char i,j=0;
	printf("\nEnter the Country name = ");
	gets(cntname);
	
	int length = strlen(cntname);
	
	if(cntname[length-1] == '\n')
	{
		cntname[length-1] = '\0';
	}
	
	i=0;
	
	while(cntname[i]!='\0')
	{
		if((i==0 || cntname[i-1] ==' ') && cntname[i]!=' ')
		{
			abr[j] = toupper (cntname[i]);
			j++;
		}
		i++;
	}
	
	printf("\nOriginal School Name = %s",cntname);
	printf("\nAbbriviated School Name = %s",abr);
	
	return 0;
}
