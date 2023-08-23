#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	printf("Vigenere Cipher substitution technique");
	int i,j,v;
	char x,y,de[30]="",en[30]="",input[50],key[10];
	printf("\n\nEnter Plain Text: ");
	scanf("%s",input);
	printf("Enter Key Value: ");
	scanf("%s",key);
	for(i=0,j=0;i<strlen(input);i++,j++)
	{
		if(j>=strlen(key))
		{ 
			j=0;
		}
		x=toupper(input[i]);
		y=toupper(key[j]);
		en[i]=65+(((x-65)+(y-65))%26);
	}
	printf("\nEncrypted value= %s",en);
	for(i=0,j=0;i<strlen(en);i++,j++)
	{
		if(j>=strlen(key))
		{ 
			j=0;
		}
		x=toupper(en[i]);
		y=toupper(key[j]);
		v=(x-64)-(y-64);
		if(v<0)
		{
			v=26+v;
		}
		de[i]=65+(v%26);
	}
	printf("\nDecrypted value= %s",de);
	return 0;
}
