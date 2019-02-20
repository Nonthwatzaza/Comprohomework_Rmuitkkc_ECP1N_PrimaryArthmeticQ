#include <stdio.h>
#include <stdlib.h>

// by Nonthwat zaza @ECP1N Rmuit kkc
// PrimaryArthmeticQ(carry op) Homework code
// 98.99% code finalver
// Thank to Flilpe goncalves for logic ^^
// terminated process by [X] only! wait for fix
// รอคำอธืบายประกอบ

unsigned long int main()
{
    unsigned long int st,nd,tem_st,tem_nd,N=0,aws,carry=0;
    printf("In put 1st and 2nd number! : ");
        while((scanf("%lu %lu",&st,&nd))==2)
    {
        if(st== 0 && nd == 0)
        {
            return 0;
        }

        if (st > 999999999 || nd > 999999999)
        {
            return 0;
        }

        while(st!=0 || nd!=0)
        {
            tem_st=st%10;
            tem_nd=nd%10;
            if(N==1)
            {
                tem_st++;
            }
            aws = tem_st + tem_nd;
            N = 0;
            if(aws>=10)
            {
                carry++;
                N++;
            }
            st=st/10;
            nd=nd/10;
        }
        N=0;

        if(carry==0)
        {
            printf("No carry operation \n");
        }
        else
        {
            printf("%lu carry operation \n",carry);
        }
    }
    return 0;
}
