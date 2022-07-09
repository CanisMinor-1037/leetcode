#include<stdio.h>
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    getchar();

    if(a>b){
        swap(a,b);
    }    
    if(b>c){
        swap(b,c);
    }
    if(a>b){
        swap(a,b);
    }

    if(a+b<=c){
        printf("Not triangle\n");
    }
    else{
        a = a*a;
        b = b*b;
        c = c*c;

        if(a+b<c){
            printf("Obtuse triangle\n");
        }
        else if(a+b==c){
            printf("Right triangle\n");
        }
        else{
            printf("Acute triangle\n");
        }

        if(a==b){
            printf("Isosceles triangle\n");
            if(b==c){
                printf("Equilateral triangle\n");
            }
        }
    }
    return 0;
}