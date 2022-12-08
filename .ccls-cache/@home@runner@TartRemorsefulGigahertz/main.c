#include<stdio.h>
#include<string.h>
int main()
{
        char name[20],name2[20];
        int length;

        scanf("%s",&name);  //input string
        printf("%s",name);  //display string
 
        length=strlen(name);  //string length
        printf("\nLength of given string is: %d",length);  //disp

        strcpy(name2,name);  //string copy
        printf("%s\n",name2);//disp

        printf("%s\n",strcat(name2,name));  //string concate

        if(strcmp(name2,name))  //string compare
        {
           printf("Same\n");
        }
        else
        {
           printf("Different\n");
        }

        for(int i=length-1;i>=0;i--)  //reverse
        printf("%c",name[i]);


return 0;
}