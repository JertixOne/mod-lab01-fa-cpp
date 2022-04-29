// Copyright 2022 UNN-IASR
#include "fun.h"

unsigned int faStr1(const char *str) {
    int i = 0;
	int count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{	
			count += 1;
			while (str[i] != ' ' && str[i]!='\0')
			{
				if (isdigit(str[i]) == 0)
				{
					i++;
				}
				else {
					count -= 1;
					while (str[i] != ' ' && str[i] != '\0')
					{
						i++;
					}
					break;
				}
			}
		}
		else i++;	
	}
    return count;
}

unsigned int faStr2(const char *str) {
    int i = 0;
	int count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				i++;
				count += 1;
				while (str[i] != '\0' && str[i] != ' ')
				{
					if (isdigit(str[i]) == 0)
					{
						i++;
						
					}
					else {
						count -= 1;
						break;
					}
					
				}
				
			}
			else { while (str[i] != ' '&& str[i]!='\0') { i++; } }
		}
		else i++;
		
	}
    return count;
}

unsigned int faStr3(const char *str) {
   int i = 0;
	int count = 0;
	int countLiteres = 0;
	string str = "Hel5lo dm1t7ri a am Yo4u Fat2her bi241ch1";
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count += 1;
			while (str[i] != ' ' && str[i] != '\0')
			{
				countLiteres++;
				i++;
			}
		}
		else i++;	
	}
    return countLiteres/count;
}
