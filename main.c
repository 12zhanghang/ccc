#include <stdio.h>


struct point

{
    int x;
    int y;
};

int main(){
    int index=0;
    struct point arr[100];
    printf("jin ru zhuan chang guan li xi tong\n");
    while(1)
    {
        printf("1---tian jia che lian wei zi\n");
        printf("2---shan chu\n");
        printf("3---xian shi\n");
        printf("4---fan hui li wo zui jin de che wei\n");
        printf("5---tui chu\n");
        printf("qinshuruxiangyinggongneng\n");
        int code;
        scanf("%d",&code);
        if(code==1)
        {
        printf("qing shuru che liangde x , y zuo biao\n");
        int x;
        int y;
        scanf("%d",&x);
        scanf("%d",&y);
        arr[index].x=y;
        arr[index].y=y;
        index++;
        printf("tianjia cheggong\n");
        char xx;
        scanf("%c",&xx);
        scanf("%c",&xx);

        }
        if(code==2)
        {
           if(index>0)
           {
               index--;
               printf("shan chuchenggong\n");
               char xx;
               scanf("%c",&xx);
               scanf("%c",&xx);
           } 
           else
           {
               printf("wu che liangweizixinxi shanchushibai\n");
               char xx;
               scanf("%c",&xx);
               scanf("%c",&xx);
           }
        }
        if(code==3)
        {
            
        }
        if(code==4)
        {
            
        }
        if(code==5)
        {
           printf("tui chu\n");
           break;
        }
    }

    return 0;

}