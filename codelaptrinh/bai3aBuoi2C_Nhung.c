#include<stdio.h>
int sum(int n){
    int S=0;
    for(int i=0; i<=n;i++){
        S+=i;
    }
    printf("Tong la: %d",S);
}


int main(){
    int n;
    scanf("%d",&n);
    while(n<=0){
        printf("VUI LONG NHAP LAI n\n");
        scanf("%d",&n);
    }
    sum(n);
    return 0;
}