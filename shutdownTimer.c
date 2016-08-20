#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void delay(int s)
     {
      clock_t a;
      a=clock()+s*CLK_TCK;
      while(clock()<a)
      {}
     }
int main()
     {
      int i=0,e,m,s;
      float t;
      printf("Enter Time in minutes for shutdown : ");
      scanf("%f",&t);
      m=int(t);
      s=(t-m)*60;
      e=t*60;
      while(1)
          {
           delay(1);
           i++;
           if(s==0&&m!=0)
              {
                s=60;
                m--;
              }
           s--;
           system("cls");
           printf("Time remaining : %d:%d",m,s);
           if(i==e)
              break;
          }
      system("cls");
      system("shutdown /s /t 2");
      exit(0);
      return(0);
     }
