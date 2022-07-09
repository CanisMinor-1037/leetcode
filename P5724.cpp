#include<stdio.h>
const int maxn = 101;
int a[maxn];
int main(){
    int min = 1001;
    int max = -1;
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(min>a[i]){
            min = a[i];
        }
        if(max<a[i]){
            max = a[i];
        }
    }
    printf("%d\n",max-min);
    return 0;
}