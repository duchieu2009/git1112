#include<stdio.h>
int timUCLN(int a,int b){

    while(a!=b){
        if(a>b) a= a-b;
        if(a<b) b=b-a;
    }
    printf("UCLN la: %d",a);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    timUCLN(a,b);
    return 0;
}