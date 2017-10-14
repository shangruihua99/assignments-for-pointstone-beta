#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char num[50]; 
	int ops,ips,ni10; 
	printf("The system of output:") ;
	scanf("%i",&ops);
	printf("The system of input:");
	scanf("%i",&ips);
	printf("The number you want to transform(only 0 to z):");
	scanf("%s",num);
	int l = strlen(num);
	int i;
	for (i=0;i<l;i++)
	{
		switch(num[i])		
		{
			case '0':ni10=ni10*ips+0;break;
			case '1':ni10=ni10*ips+1;break;
			case '2':ni10=ni10*ips+2;break;
			case '3':ni10=ni10*ips+3;break;
			case '4':ni10=ni10*ips+4;break;
			case '5':ni10=ni10*ips+5;break;
			case '6':ni10=ni10*ips+6;break;
			case '7':ni10=ni10*ips+7;break;
			case '8':ni10=ni10*ips+8;break;
			case '9':ni10=ni10*ips+9;break;
			case 'a':ni10=ni10*ips+10;break;
			case 'b':ni10=ni10*ips+11;break;
			case 'c':ni10=ni10*ips+12;break;
			case 'd':ni10=ni10*ips+13;break;
			case 'e':ni10=ni10*ips+14;break;
			case 'f':ni10=ni10*ips+15;break;
			case 'g':ni10=ni10*ips+16;break;
			case 'h':ni10=ni10*ips+17;break;
			case 'i':ni10=ni10*ips+18;break;
			case 'j':ni10=ni10*ips+19;break;
			case 'k':ni10=ni10*ips+20;break;
			case 'l':ni10=ni10*ips+21;break;
			case 'm':ni10=ni10*ips+22;break;
			case 'n':ni10=ni10*ips+23;break;
			case 'o':ni10=ni10*ips+24;break;
			case 'p':ni10=ni10*ips+25;break;
			case 'q':ni10=ni10*ips+26;break;
			case 'r':ni10=ni10*ips+27;break;
			case 's':ni10=ni10*ips+28;break;
			case 't':ni10=ni10*ips+29;break;
			case 'u':ni10=ni10*ips+30;break;
			case 'v':ni10=ni10*ips+31;break;
			case 'w':ni10=ni10*ips+32;break;
			case 'x':ni10=ni10*ips+33;break;
			case 'y':ni10=ni10*ips+34;break;
			case 'z':ni10=ni10*ips+35;break;
		}
	}
	i = 0;
	int remainder;
	char opn[50];
	while (ni10>0) 
	{
		remainder = ni10%ops;
		ni10= ni10/ops;
		switch(remainder)
		{
			case 0:opn[i]='0';break;
			case 1:opn[i]='1';break;
			case 2:opn[i]='2';break;
			case 3:opn[i]='3';break;
			case 4:opn[i]='4';break;
			case 5:opn[i]='5';break;
			case 6:opn[i]='6';break;
			case 7:opn[i]='7';break;
			case 8:opn[i]='8';break;
			case 9:opn[i]='9';break;
			case 10:opn[i]='a';break;
			case 11:opn[i]='b';break;
			case 12:opn[i]='c';break;
			case 13:opn[i]='d';break;
			case 14:opn[i]='e';break;
			case 15:opn[i]='f';break;
			case 16:opn[i]='g';break;
			case 17:opn[i]='h';break;
			case 18:opn[i]='i';break;
			case 19:opn[i]='j';break;
			case 20:opn[i]='k';break;
			case 21:opn[i]='l';break;
			case 22:opn[i]='m';break;
			case 23:opn[i]='n';break;
			case 24:opn[i]='o';break;
			case 25:opn[i]='p';break;
			case 26:opn[i]='q';break;
			case 27:opn[i]='r';break;
			case 28:opn[i]='s';break;
			case 29:opn[i]='t';break;
			case 30:opn[i]='u';break;
			case 31:opn[i]='v';break;
			case 32:opn[i]='w';break;
			case 33:opn[i]='x';break;
			case 34:opn[i]='y';break;
			case 35:opn[i]='z';break;
		}
		i++;
	}
	while(i,i>0)
	{
		putchar(opn[i]);
		i--;
	}
}
