/*4: 第4题 请编写一个函数void fun(char *tt,int pp[]),统计在tt字符中"a"到"z"26各字母各自出现的次数，并依次放在pp所指的数组中。*/ #include<stdio.h>
#include<string.h>
int main()
{
void  fum(char *tt,int pp[]);
char a[10]="abcdefg";
int pp[26]={0};
fum(a,pp);
     for(int i=0;i<26;i++)
        printf("%d\n",pp[i]);
}
void  fum(char *tt,int pp[])
{
    int i;
    while(*tt)
    {
        i=*tt-'a';
        pp[i]++;
        tt++;
    }
}
/*void fun(char *tt, int pp[])
{
int i;
for (i=0;i＜26;i++)
pp[i]=0;
while (*tt)
{
switch (*tt)
{
case ‘a’: pp[0]++;break;
case ‘b’: pp[1]++;break;
case ‘c’: pp[2]++;break;
case ‘d’: pp[3]++;break;
case ‘e’: pp[4]++;break;
case ‘f’: pp[5]++;break;
case ‘g’: pp[6]++;break;
case ‘h’: pp[7]++;break;
case ‘i’: pp[8]++;break;
case ‘j’: pp[9]++;break;
case ‘k’: pp[10]++;break;
case ‘l’: pp[11]++;break;
case ‘m’: pp[12]++;break;
case ‘n’: pp[12]++;break;
case ‘o’: pp[14]++;break;
case ‘p’: pp[15]++;break;
case ‘q’: pp[16]++;break;
case ‘r’: pp[17]++;break;
case ‘s’: pp[18]++;break;
case ‘t’: pp[19]++;break;
case ‘u’: pp[20]++;break;
case ‘v’: pp[21]++;break;
case ‘w’: pp[22]++;break;
case ‘x’: pp[23]++;break;
case ‘y’: pp[24]++;break;
case ‘z’: pp[25]++;break;
}
tt++;
}
}*/
