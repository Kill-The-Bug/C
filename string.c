#include<stdio.h>
int strlenfunc(char*ptr);
void strcatfunc(char *,char *);
main()
 {
 int i=0,j,n=0,m,count1=0,count2=0,flag=0,menu,stringlen;
 char string1[10],string2[10];
 printf("Enter the number of letters in the first string.\n"); 
 scanf("%d",&n);
 printf("Enter the first string\n");
  scanf("%s",string1);

printf("Enter the number of letters in the second string .\n");
scanf("%d",&m);
printf("Enter the second string\n");
scanf("%s",string2);

printf("WHICH OPERATION DO YOU WANT TO CHOOSE?");
printf("\n MENU\n");
printf("1-STRING LENGTH\n2-STRING CONCATENTION\n3-STRING SEARCH");
scanf("%d",&menu);
switch(menu)
{
case 1:
printf("To find the length of string1");
stringlen =strlenfunc(string1);
printf("\nThe string1 has a length of %d",stringlen); 
stringlen =strlenfunc(string2);
printf("\nThe string2 has a length of %d\n",stringlen);
break;

case 2:
printf("To concatenate the given strings\n");
strcatfunc(string1,string2);
printf("The concatenated string is :%s\n",string1);
break;


case 3:
printf("The main STRING is %s\n",string1);
printf("The substring to CHECK is %s\n",string2);
while(string1[count1]!='\0')
	count1++;
while (string2[count2]!='\0')
	count2++;
for(i=0;i<=(count1-count2);i++)
 {
		for(j=i;j<(i+count2);j++)
		{
			flag=1;
			if(string1[j]!=string2[j-i])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			break;
 }
if(flag==1)
 printf("\nTHE STRING IS FOUND TO BE THE SUBSTRING...\n");
else
 printf("THE GIVEN STRING IS NOT A SUBSTRING...");

}

}



int strlenfunc(char *ptr)
{
int count=0;
while(*ptr !='\0')
{
 count++;
 ptr++;
}
return count;
}




 void strcatfunc(char *string1,char *string2)
{
while(*string1 !='\0')
{
 *string1++;
}
while(*string2 !='\0')
{
 *string1 = *string2;
 string1++;
 string2++;
}
*string1='\0';
}



