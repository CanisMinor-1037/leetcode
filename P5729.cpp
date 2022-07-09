#include<stdio.h>
int a[7];//a[i]:i等奖中奖数 
int b[7];//中奖号码
int c[7];//填写号码
bool inB(int x){
    for(int i=0;i<7;i++){
        if(x == b[i]){
            return true;
        }
    }
    return false;
}

int cal(){
    int ans = 0;
    for(int i=0;i<7;i++){
        if(inB(c[i])==true){
            ans++;
        }
    }
    return ans;
}

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    for(int j=0;j<7;j++){
        scanf("%d",&b[j]);
    }
    int ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            scanf("%d",&c[j]);
        }
        ans = cal();
        switch(ans){
            case 7: a[0]++; break;
            case 6: a[1]++; break;
            case 5: a[2]++; break;
            case 4: a[3]++; break;
            case 3: a[4]++; break;
            case 2: a[5]++; break;
            case 1: a[6]++; break;
            default:        break;
        }
    }
    for(int i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    printf("%d\n",a[6]);
    return 0;
    
}