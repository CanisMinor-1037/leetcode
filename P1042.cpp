#include<cstdio>
const int maxn = 10000;
struct st1{
    int nP1;
    int nP2;
}t1[maxn];

struct st2{
    int nP1;
    int nP2;
}t2[maxn];

int main()
{
    char ch;
    int n1 = 0;
    int n2 = 0;
    while(1){
        ch = getchar();
        if(ch=='E'){
            break;
        }
        else if(ch=='W'){
            t1[n1].nP1++;
            if(t1[n1].nP1>=11&&t1[n1].nP1-t1[n1].nP2>=2){
                n1++;
            }

            t2[n2].nP1++;
            if(t2[n2].nP1>=21&&t2[n2].nP1-t2[n2].nP2>=2){
                n2++;
            }
        }
        else if(ch=='L'){
            t1[n1].nP2++;
            if(t1[n1].nP2>=11&&t1[n1].nP2-t1[n1].nP1>=2){
                n1++;
            }

            t2[n2].nP2++;
            if(t2[n2].nP2>=21&&t2[n2].nP2-t2[n2].nP1>=2){
                n2++;
            }
        }
    }
    for(int i1=0;i1<=n1;i1++){
        printf("%d:%d\n",t1[i1].nP1,t1[i1].nP2);
    }
    printf("\n");
    for(int i2=0;i2<=n2;i2++){
        printf("%d:%d\n",t2[i2].nP1,t2[i2].nP2);
    }
    return 0;
}