#include<stdio.h>
#include<math.h>
int TongBinhPhuong(int x){
    int S=0;
    for(int i=0; i<=x;i++){
        S+=pow(i,2);
    }
    printf("Tong Binh Phuong la: %d",S);
}
int main(){
    int x;
    scanf("%d",&x);
    TongBinhPhuong(x);
    return 0;
}