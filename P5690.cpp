#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int maxday[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int month, day;
    scanf("%d-%d",&month,&day);
    getchar();
    if(day==0||day>31){
        if(month>0&&month<13){
            printf("1\n");
        }
        else{
            printf("2\n");
        }
    }
    else if(day==31){
        if(month>0&&month<13){
            if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
                printf("0\n");
            }
            else{
                printf("1\n");
            }
        }
        else{
            int month1=month/10;
            int month0=month%10;
            if(month1==1){
                printf("1\n");
            }
            else{
                if(month0==1||month0==3||month0==5||month0==7||month0==8||month0==0||month0==2){
                    printf("1\n");
                }
                else{
                    printf("2\n");
                }
            }
        }
    }
    else if(day==30||day==29){
        if(month==2||month==0||month>12){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    else{
        if(month>0&&month<13){
            printf("0\n");
        }
        else{
            printf("1\n");
        }
    }
}