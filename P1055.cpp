#include<stdio.h>
struct ISBN{
    char a1;
    char b1;
    char b2;
    char b3;
    char c1;
    char c2;
    char c3;
    char c4;
    char c5;
    char d1;
}isbn;
int main(){
    scanf("%c-%c%c%c-%c%c%c%c%c-%c",&isbn.a1,&isbn.b1,&isbn.b2,&isbn.b3,&isbn.c1,&isbn.c2,&isbn.c3,&isbn.c4,&isbn.c5,&isbn.d1);
    getchar();
    isbn.a1 -= '0';
    isbn.b1 -= '0';
    isbn.b2 -= '0';
    isbn.b3 -= '0';
    isbn.c1 -= '0';
    isbn.c2 -= '0';
    isbn.c3 -= '0';
    isbn.c4 -= '0';
    isbn.c5 -= '0';
    
    if(isbn.d1=='X'){
        isbn.d1 = 10;
    }
    else{
        isbn.d1 -= '0';
    }
    int cal = isbn.a1*1+isbn.b1*2+isbn.b2*3+isbn.b3*4+isbn.c1*5+isbn.c2*6+isbn.c3*7+isbn.c4*8+isbn.c5*9;
    cal %= 11;

    if(cal==isbn.d1){
        printf("Right\n");
        return 0;
    }
    else{
            if(cal == 10){
                isbn.d1 = 'X';
            }
            else{
                isbn.d1 = cal+'0';
            }
            isbn.a1 += '0';
            isbn.b1 += '0';
            isbn.b2 += '0';
            isbn.b3 += '0';
            isbn.c1 += '0';
            isbn.c2 += '0';
            isbn.c3 += '0';
            isbn.c4 += '0';
            isbn.c5 += '0';
            printf("%c-%c%c%c-%c%c%c%c%c-%c",isbn.a1,isbn.b1,isbn.b2,isbn.b3,isbn.c1,isbn.c2,isbn.c3,isbn.c4,isbn.c5,isbn.d1);
            
            return 0;
    }
}