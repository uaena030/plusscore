#include <stdio.h>
 
int main()
{
    int year;
    while(scanf("%d",&year)!=EOF){
        if(year%4 == 0)
        {
            if( year%100 == 0)
            {
                if ( year%400 == 0)
                    printf("Bissextile Year\n");
                else
                    printf("Common Year\n");
            }
            else
                printf("Bissextile Year\n");
        }
        else
            printf("Common Year\n");
    }
        return 0;
}
 