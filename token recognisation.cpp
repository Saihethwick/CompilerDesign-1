#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(){
char a[100];
printf("enter the string");
scanf("%s",&a);
int l=strlen(a);
for(int i=0;i<l;i++){
	if(isalpha(a[i]))
	{
		printf("%c is identifier\n",a[i]);
	}
	else if(isdigit(a[i]))
	{
		printf("%c is digit\n",a[i]);
	}
	else
	{
		printf("%c is operator\n",a[i]);
	}
}
}

o/p
	enter the stringY=x*z
symbol  value   address  token
Y       8        6487456         identifier
=                6487457          operator
x       10       6487458          identifier
*                6487459          operator
z       5        6487460         identifier
