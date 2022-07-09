
#include<stdio.h>

char SPACE[5][2] {".",".",".",".","."};

char N[10][5][4] {
{"XXX", "X.X", "X.X", "X.X", "XXX"},
{"..X", "..X", "..X", "..X", "..X"},
{"XXX", "..X", "XXX", "X..", "XXX"},
{"XXX", "..X", "XXX", "..X", "XXX"},
{"X.X", "X.X", "XXX", "..X", "..X"},
{"XXX", "X..", "XXX", "..X", "XXX"},
{"XXX", "X..", "XXX", "X.X", "XXX"},
{"XXX", "..X", "..X", "..X", "..X"},
{"XXX", "X.X", "XXX", "X.X", "XXX"},
{"XXX", "X.X", "XXX", "..X", "XXX"}};

int main(){
    int n;
    scanf("%d",&n);
    getchar();

    char s[n+1];
    scanf("%s",s);
    getchar();

    char temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<n-1;j++){
            temp = s[j] - '0';
            printf("%s.",N[temp][i]);
        }
        temp = s[n-1] - '0';
        printf("%s\n",N[temp][i]);
    }
    return 0;
}