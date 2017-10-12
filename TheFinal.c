#include <stdio.h>
#include <string.h>

void to2(int i)//把i中的值输出为2进制形式，自定义函数to2(int i) 
{
	int x;
	for (x = 64;x>0;x=x/2)
	{
		if(i-x>=0)
		{
			printf("1");
			i=i-x;
		}
		else if(i-x<0)
		{
			printf("0");
		}
	}
	printf(" ");
}

int main(void)
{
	char s[10],s2[10],s3[10],s4[10],s5[10],a[150]; 
	gets(s);//输入获得可识别空格的字符串s 
    strcpy(s2, "ascii -d");//10进制ascii表 
    strcpy(s3, "ascii -o");//8进制ascii表 
    strcpy(s4, "ascii -x");//16进制ascii表 
    strcpy(s5, "ascii -b");//2进制ascii表
	strcpy(a,"NULSOHSTXETXEOTENQACKBELBS HT LF VT FF CR SO SI DLEDC1DC2DC3DC4NAKSYNETBCANEM SUBESCFS GS RS US ");//前32位ascii码 
    if (strcmp(s,s2)==0)//输入为ascii -d 
    {
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
    else if (strcmp(s,s3)==0)//输入为ascii -o 
    {
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
    else if (strcmp(s,s4)==0)//输入为ascii -o 
    {
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
    else if (strcmp(s,s5)==0)//输入为ascii -b 
    {
		int i1 = -1;
		while (i1++,i1<32)
	{
		putchar(a[3*i1]);
		putchar(a[3*i1+1]);
		putchar(a[3*i1+2]);
		printf(" ");
		to2(i1);
	}
        int i = 31;
        while(i++, i<127)
        {
            printf("%3c ",i);
            to2(i);
        }
        printf("DEL 1111111");
        return 0;
    }
    else
    {
        printf("something happened\n");
    }
} 
