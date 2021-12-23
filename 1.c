#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char plain[20],cipher[20];
	int key,i,length,result;
	printf("enter the plain text\n");
	scanf("%[^\n]s",plain);
	printf("enter the key value\n");
	scanf("%d",&key);
	printf("plain text is %s\n",plain);
	printf("encrypted text\n");
	length=strlen(plain);
	for(i=0;i<length;i++)
	{
		cipher[i]=plain[i]+key;
		if(isupper(plain[i])&&(cipher[i]<'A'))
			cipher[i]=cipher[i]-26;
		if(islower(plain[i])&&(cipher[i]<'a'))
			cipher[i]=cipher[i]-26;
		printf("%c",cipher [i]);
	}
	printf("\n");
	printf("after decryption \n");
	for(i=0;i<length;i++)
	{
		plain[i]=cipher[i]-key;
		if(isupper(cipher[i])&&(plain[i]<'A'))
			plain[i]=plain[    i]+26;
		if(islower(cipher[i])&&(plain[i]<'a'))
			plain[i]=plain[i]+26;
		printf("%c",plain[i]);
	}
	printf("\n");
}

