#include<stdio.h>
#include<string.h>
char decryptchar(int c,int a,int b)
{
	return((a*(c-b))%26+26)%26+'A';
}
int main()
{
	char ciphertext[1000];
	printf("enter the ciphertext:");
	scanf("%s",ciphertext);

	int mostfrequent=ciphertext[0];
	int secondmostfrequent=ciphertext[1];

	printf("finding possible keys...\n");
	for(int a=1;a<26;a++)
	{
		for(int b=0;b<26;b++)
		{
			if(decryptchar(mostfrequent,a,b)==mostfrequent&&
			   decryptchar(secondmostfrequent,a,b)==secondmostfrequent)
			   {
			   	printf("possible key found:a=%d,b=%d\n",a,b);
			   }
		}
	}
	return 0;
}
