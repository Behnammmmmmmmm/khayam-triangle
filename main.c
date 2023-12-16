#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=1,c=0,d=0,o=0,a1=0,a2=0,a3=0;

    while(1)
    {
          printf("Enter the numbers: \n");
            scanf("%d",&a);

                if(a==4||a==9)
            {   b=0;
                break;
            }



            if(a==1)
            {
                c++;
                printf("%d\n",c);
            }
            if(a==2)
            {
                d++;
                 printf("%d\n",d);
            }
            if(a==3)
            {
                o++;
                 printf("%d\n",o);
            }


             if(a==6)
            {
                a1++;
                 printf("%d\n",a1);
            }
            if(a==7)
            {
                a2++;
                 printf("%d\n",a2);
            }
            if(a==8)
            {
                a3++;
                 printf("%d\n",a3);
            }

    }

    return 0;
}
