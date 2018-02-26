/*北航09年第三题
字符串的查找删除
给定文件filein.txt 按要求输出fileout.txt。
输入: 无空格的字符串
输出: 将filein.txt删除输入的字符串(不区分大小写),输出至fileout.txt
sample
输入:in
输出:将filein.txt 中的In、IN、iN、in删除,每行中的空格全部提前至行首,输出至fileout.tx
#include <stdio.h>
t
filein.txt中的值为:
int main()
{
printf(" Hi ");
}
输出的fileout.txt为
#clude<stdio.h>
tma()
{
prtf("Hi");
}
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE * fp1, * fp2;
    char a [100];
    fp1 = fopen("filein.txt","r");
    fp2 = fopen("fileout.txt","w");
    if(!fp1)
    {
        printf("open filein error!\n");
        exit(0);
    }

    if(!fp2)
    {
        printf("open fileout error!\n");
        exit(0);
    }
    scanf("%s",a);
    int n = strlen(a);

    char c;
    c = fgetc(fp1);
    int i = 0;
    int j;
    while(c)
    {
        if(tolower(c)==tolower(a[i]))
            {
                i++;
                if(i>=n)
                    i=0;
            }
            else
            {
                if(i==0)
                {
                    if(c!=' ') fputc(c,fp2);
                }
                else
                    {
                        for(j=0;j<i;j++)
                           fputc(a[j],fp2);

                        i=0;
                        if(c!=' ')
                            fputc(c,fp2);

                    }
            }


    }


    return 0;
}
