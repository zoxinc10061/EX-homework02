    
#include <stdio.h>
#include <stdlib.h>
void reverse(char str[]);
int main(int argc, char *argv[])
{

  char str[999];
  
  printf("�п�J�@�Ӧr��: "); 
  gets(str);
  reverse(str);
  
  
  system("PAUSE");	 
  return 0;
}
void reverse(char str[999])
{
	int i=0,j=0;
	while(str[i]='\0')
	{
		i++;
	}
	printf("�ഫ�᪺�r��: ");
	for(j=i-1;j>=0;j--)
	{
		printf("%c",str[j]);
	}
	printf("\n");
}    
