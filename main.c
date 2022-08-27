#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void show(char p1[20] , char p2[20])
{
    printf("Pleyar 1 is :- %s \n",p1);
    printf("Pleyar 2 is :- %s",p2); 
}
int randyp()
{
 int x;
 l1:
srand(time(NULL));
 x=rand();
 x=x%10;
    if(x>0 && x<7)
        return x;
    else
    goto l1; 
}
int main()
{
    int i,a1=0,a2=0;
    int ch,x,x1,x2,y=1;
    char p1[20] , p2[20];
    printf(" -------- ##  WellCome Snake & Ladders ## --------\n");
    printf("Enter Frist Pleyar Name :- ");
    scanf("%s",p1);
    printf("Enter Second Pleyar Name :- ");
    scanf("%s",p2);
    show(p1,p2);
    printf("\n-------------------------------------\n");
    printf("%s Ponit is = %d\n",p1,a1);
    printf("%s Ponit is = %d\n",p2,a2);
    printf("\n-------------------------------------\n");
do
{  if(y%2==1)
   {
       y++;
       printf("Exit To Press 0 :- \n");
       printf("Now %s is Turn To Press 1 :- ",p1);
       scanf("%d",&ch);
   }
   else if(y%2==0)
   {
       y++;
       printf("Exit To Press 0 :- \n");
       printf("Now %s is Turn To Press 2 :- ",p2);
       scanf("%d",&ch);
   }
    switch(ch)
    {
        case 1:
            x1=randyp();
            a1=a1+x1;
            if(a1>100)
            a1=a1-x1;
            printf("%s Gat Value = %d\n",p1,x1);
            printf("%s Ponit is = %d\n",p1,a1);
            printf("\n-------------------------------------\n");
            break;
        case 2:
            x2=randyp();
            a2=a2+x2;
            if(a2>100)
            a2=a2-x2;
            printf("%s Gat Value = %d\n",p2,x2);
            printf("%s Ponit is = %d\n",p2,a2);
            printf("\n-------------------------------------\n");
            break;
        case 0:
            goto end;
            break;
        default:
            printf(" Wrong Choice ");
            goto end;
    }
}while(a1<100 && a2<100); 
if(a1>=100)
{
    printf("\n-------------------------------------\n");
    printf("%s is Wenner",p1);
    printf("\n-------------------------------------\n");
}
else if(a2>=100)
{
    printf("\n-------------------------------------\n");
    printf("%s is Wenner",p2);
    printf("\n-------------------------------------\n");
}
end:
return 0;    
}



