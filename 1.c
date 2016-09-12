#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ptr,str1[10001],str2[10001];
    int small[26]={0},caps[26]={0},digit[10]={0},t,i=0;
        scanf("%d",&t);
    //printf("\n%d..",t);

while(t--)
{
    fflush(stdin);
    scanf("%s",str1);
    scanf("%s",str2);

    //gets(str1);
    //gets(str2);
     // puts(str1);
     // puts(str2);


    ptr=str1;
    while(*ptr !='\0')
    {

        if((*ptr>='a')&&(*ptr<='z'))
        small[*ptr-'a']++;
        else if((*ptr>='A')&& (*ptr<='Z'))
         caps[*ptr-'A']++;
        else
         digit[*ptr-'0']++;

         ++ptr;
    }
    ptr=str2;
    while(*ptr !='\0')
    {

        if((*ptr>='a') && (*ptr<='z') &&   (small[*ptr-'a']))
          {
              ++i;
              //printf("%c found \n ", *ptr);
                small[*ptr-'a']-- ;
          }
else if((*ptr>='A') && (*ptr<='Z') && (caps[*ptr-'A']))
         {  ++i;
             caps[*ptr-'A']-- ;
             //printf("%c found \n ", *ptr);

         }
        else if((*ptr>='0') && (*ptr<='9')&& (digit[*ptr-'0']))
        {
            ++i;
             digit[*ptr-'0']--;
            // printf("%c found \n ", *ptr);
        }
         else ;

 ++ptr;
    }
         printf("%d\n",i);

          for(i=0;i<26;++i)
         {
          caps[i]=0;
          small[i]=0;
         }
          for(i=0;i<10;++i)
          digit[i]=0;

          i=0;
    }

return 0;
}

