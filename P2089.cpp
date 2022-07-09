#include<iostream>
using namespace std;

int ans[100000][10];
int main(){
    int n;
    cin >> n;
    int m = 0;
    int a, b, c, d, e, f, g, h, i, j;
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            for(c=1;c<=3;c++){
                for(d=1;d<=3;d++){
                    for(e=1;e<=3;e++){
                        for(f=1;f<=3;f++){
                            for(g=1;g<=3;g++){
                                for(h=1;h<=3;h++){
                                    for(i=1;i<=3;i++){
                                        for(j=1;j<=3;j++){
                                            if(a+b+c+d+e+f+g+h+i+j==n){
                                                m++;
                                                ans[m][0] = a;
                                                ans[m][1] = b;
                                                ans[m][2] = c;
                                                ans[m][3] = d;
                                                ans[m][4] = e;
                                                ans[m][5] = f;
                                                ans[m][6] = g;
                                                ans[m][7] = h;
                                                ans[m][8] = i;
                                                ans[m][9] = j;
                                                //printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << m << endl;
    for(int i=1;i<=m;i++){
        printf("%d %d %d %d %d %d %d %d %d %d\n",ans[i][0],ans[i][1],ans[i][2],ans[i][3],ans[i][4],ans[i][5],ans[i][6],ans[i][7],ans[i][8],ans[i][9]);
    }
    return 0;
}