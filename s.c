#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("finding smallest and largest names from a given set of names\n");
    int i,count;
    char str[25][25],smallest[25],largest[25];
    printf("enter the number of student names to be entered\n");
    scanf("%d",&count);
    printf("enter the student names one by one\n");
    for(i=0;i<=count;i++)
        gets(str[i]);
    int j=0;
    int k=0;
    for(i=0;i<=count;i++)
    {
        if(strlen(str[j])<strlen(str[i+1]))
        {
            j=i+1;
            strcpy(largest,str[j]);
        }
        if (strlen(str[k])>strlen(str[i+1])&&i!=count)
        {
            k=i+1;
            strcpy(smallest,str[k]);
        }
    }
    printf("largest name - \n");
    puts(largest);
    printf("smallest name - \n");
    puts(smallest);
    return 0;
}