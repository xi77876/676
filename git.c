#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int target = rand();
    int n = 0;
    int s = 0;  
    int count = 0;
    int level = 0;
    printf("请选择游戏难度喵：");
    scanf("%d",&level);
    switch (level)
    {
    case 1:
        printf("普通模式喵\n");
        count = 12;
        target = rand()%50+1;
        break;
    case 2:
        printf("困难模式喵\n");
        count = 8;
        target = rand()%100+1;
        break;
    case 3:
        printf("赌狗模式喵\n");
        count = 4;
        target = rand()%150+1;
        break;
    default:
        printf("输入无效喵\n");
        return 0;
    }
    while(s < count){
        printf("请输入数字喵：\n");
        scanf("%d",&n);
        if(n > target){
            printf("太大了喵\n");
            s++;
        }
        else if(n < target){
            printf("太小了喵\n");
            s++;
        }
        else{
            s++;
            printf("恭喜你猜对了喵！答案是：%d\n",target);
            printf("共用了%d次数\n",s);
            break;
        }
    }
    if(target != n){
        printf("次数用光了喵，重新开始吧！");
    }
}