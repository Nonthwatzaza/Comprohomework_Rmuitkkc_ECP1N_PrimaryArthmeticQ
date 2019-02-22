#include <stdio.h>
#include <stdlib.h>

// by Nonthwat zaza @ECP1N Rmuit kkc 20-22/2/2019
// PrimaryArthmeticQ(carry op) Homework code
// 99.98% code final ver
// Thank to Flilpe goncalves for logic ^^
// terminated process by [X] only! wait for fix

unsigned long int main()
{
    unsigned long int st,nd,tem_st,tem_nd,N=0,aws,carry=0;
    printf("In put 1st and 2nd number! : ");
        while((scanf("%lu %lu",&st,&nd))==2) // ออกจาก ลูปเมื่อ input =0 หรือ ไม่ใช่ตัวเลข
    {
        if(st== 0 && nd == 0) // ถ้า เท่ากับ 0
        {
            return 0; // จบ
        }

        if (st > 999999999 || nd > 999999999) //ถ้าเกิน
        {
            return 0;
        }

        while(st!=0 || nd!=0) // ถ้าไม่เท่า 0
        {
            tem_st=st%10; // เอาหลักหน่วยตัวตั้ง
            tem_nd=nd%10; // เอาหลักหน่วยตัวบวก
                if(N==1) //ถ้า N==1
                {
                    tem_st++; //บวกตัวตั้ง
                }
            aws = tem_st + tem_nd; //บวกกัน
            N = 0; //ให้ N=0
                if(aws>=10) // ถ้าคำตอบมากกว่า 10
                {
                    carry++; // นับจำนวนตัวทด+1
                    N++; // เพิ่มค่า N
                }
            st=st/10; // ลดหลักของ ตัวตั้ง
            nd=nd/10; // ลดหลักของ ตัวบวก
        } // สุดลูป
        N=0; // ให้ N=0

        if(carry==0) // ไม่มีตัวทด
        {
            printf("No carry operation \n");
        }
        else //  มีตัวทด
        {
            printf("%lu carry operation \n",carry);
        }
    }
    return 0; // จบ
}
