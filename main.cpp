/*����09�������
�ַ����Ĳ���ɾ��
�����ļ�filein.txt ��Ҫ�����fileout.txt��
����: �޿ո���ַ���
���: ��filein.txtɾ��������ַ���(�����ִ�Сд),�����fileout.txt
sample
����:in
���:��filein.txt �е�In��IN��iN��inɾ��,ÿ���еĿո�ȫ����ǰ������,�����fileout.tx
#include <stdio.h>
t
filein.txt�е�ֵΪ:
int main()
{
printf(" Hi ");
}
�����fileout.txtΪ
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
