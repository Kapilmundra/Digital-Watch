#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void day1(int,int,int);
void main()
{
       int h,m,s,d,mt,y,day,mo,n;
       
       printf("\nWelcome to digital watch");
       printf("\nCurrent Date(Day,Month,Year)=");
       scanf("%d",&day);
       scanf("%d",&mo);
       scanf("%d",&y);
       printf("Current Time(Hour,minute,sec)=");
       scanf("%d",&h);
       scanf("%d",&m);
       scanf("%d",&s);
   
  for(y=y;;y++)
    {
     for(mo=mo;mo<=12;mo++)
      {  if(mt==1||mt==3||mt==5||mt==7||mt==8||mt==10||mt==12)
            {
               n=31;
            }
         else if(mt==4||mt==6||mt==9||mt==11)
            {
               n=30;
            }
         else
            { 
                if((y%4==0&&y%100!=0)||(y%400==0))
                  {
                      n=29;
                  }
                else
                  {
                      n=28;
                  }
                
            }
        for(day=day;day<=n;day++)
           { 
 
          for(h=h;h<24;h++)
            {
             for(m=m;m<60;m++)
               {
                for(s=s;s<60;s++)
                  { clrscr();
                    printf("\nDate=%d:%d:%d",day,mo,y);
                    printf("\nTime=%d:%d:%d",h,m,s);
                    day1(day,mo,y);
                    sleep(1);
                  }
                s=0;
               }
              m=0;
             }
           h=0;
         }
        day=1;
       }
      mo=1;
     }
}
void day1(int day,int mo,int y)
{
   int count=0,i,sum,mt;
   for(i=1;i<y;i++)
    {
      if((i%4==0&&i%100!=0)||(i%400==0))
         {
                  count++;
         }    
    }
sum=(y-1)+count;
for(mt=1;mt<mo;mt++)
{
  if(mt==1||mt==3||mt==5||mt==7||mt==8||mt==10||mt==12)
          {
            sum=sum+31;
          }
         else if(mt==4||mt==6||mt==9||mt==11)
           {
             sum=sum+30;
           }
         else
           {
             if((i%4==0&&i%100!=0)||(i%400==0))
               {
                 sum=sum+29;
               }
           else
             {
                sum=sum+28;
              }
           }
 }  sum =sum+day;  
  sum=sum%7;
  
   switch(sum)
    {
      case 0:printf("\nDAY=Sunday");
      break;
      case 1:printf("\nDAY=Monday");
      break;
      case 2:printf("\nDAY=Tuesday");
      break;
      case 3:printf("\nDAY=Wednesday");
      break;
      case 4:printf("\nDAY=Thursday");
      break;
      case 5:printf("\nDAY=friday");
      break;
      case 6:printf("\nDAY=Saturday");
      break;
     
   
    }
    
}


