#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char s[10],s2[10],s3[10],s4[10],s5[10];
	gets(s);
    strcpy(s2, "ascii -d");
    strcpy(s3, "ascii -o");
    strcpy(s4, "ascii -x");
    strcpy(s5, "ascii -b");
    if (strcmp(s,s2)==0)
    {
    	char a[150];
		strcpy(a,"NULSOHSTXETXEOTENQACKBELBS HT LF VT FF CR SO SI DLEDC1DC2DC3DC4NAKSYNETBCANEM SUBESCFS GS RS US ");
		int i1 = -1;
		while (i1++,i1<32)
	{
		putchar(a[3*i1]);
		putchar(a[3*i1+1]);
		putchar(a[3*i1+2]);
		printf(" %3i   ",i1);
	}
        int i = 31;
        while(i++, i<127)
        {
            printf("%c   %3d   ",i,i);
        }
        printf("DEL 127   ");
        return 0;
    }
    else if (strcmp(s,s3)==0)
    {
    	char a[150];
		strcpy(a,"NULSOHSTXETXEOTENQACKBELBS HT LF VT FF CR SO SI DLEDC1DC2DC3DC4NAKSYNETBCANEM SUBESCFS GS RS US ");
		int i1 = -1;
		while (i1++,i1<32)
	{
		putchar(a[3*i1]);
		putchar(a[3*i1+1]);
		putchar(a[3*i1+2]);
		printf(" %3o   ",i1);
	}
        int i = 31;
        while(i++, i<127)
        {
            printf("%c   %3o   ",i,i);
        }
        printf("DEL 177   ");
        return 0;
    }
    else if (strcmp(s,s4)==0)
    {
    	char a[150];
		strcpy(a,"NULSOHSTXETXEOTENQACKBELBS HT LF VT FF CR SO SI DLEDC1DC2DC3DC4NAKSYNETBCANEM SUBESCFS GS RS US ");
		int i1 = -1;
		while (i1++,i1<32)
	{
		putchar(a[3*i1]);
		putchar(a[3*i1+1]);
		putchar(a[3*i1+2]);
		printf(" %3x   ",i1);
	}
       int i = 31;
        while(i++, i<127)
        {
            printf("%c   %3x   ",i,i);
        }
        printf("DEL 7f   ");
    	return 0;
    }
    else if (strcmp(s,s5)==0)
    {
    	char a[150];
		strcpy(a,"NULSOHSTXETXEOTENQACKBELBS HT LF VT FF CR SO SI DLEDC1DC2DC3DC4NAKSYNETBCANEM SUBESCFS GS RS US ");
		int i1 = -1;
		while (i1++,i1<32)
	{
		int b = i1;
		char str[10];
		itoa(b,str,2);
		putchar(a[3*i1]);
		putchar(a[3*i1+1]);
		putchar(a[3*i1+2]);
		printf(" %7s ",str);
	}
        int i = 31;
        while(i++, i<127)
        {
            int a = i;
        	char str[10];
        	itoa(a, str, 2);
            printf("%c   %7s ",i,str);
            
        }
        printf("DEL 1111111");
        return 0;
    }
    else
    {
        printf("something happened\n");
    }
} 
