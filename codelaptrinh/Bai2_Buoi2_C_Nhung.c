#include<stdio.h>
void daysochan(int n){
    int j=0; int i;
    int b[100];
    while(n>0){
        if((n%10)%2==0){
            b[j]= n%10;
            j++;
        }
        n=n/10;
    }
    for(int k=0; k<=8;k=k+2){
         int flag=0;
        for(i=0;i<j;i++){
           
            if(b[i]==k){
                flag=1;
            }
        }
        if(flag==1){
            printf(" %d",k);
        }
    }
}
void daysole(int n){
    int j=0;
    int i;
    int b[100];
    while(n>0){
        if((n%10)%2==1){
            b[j]= n%10;
            j++;
        }
        n=n/10;
    }
    for(int k=1; k<=9;k=k+2){
         int flag=0;
        for(i=0;i<j;i++){
           
            if(b[i]==k){
                flag=1;
            }
        }
        if(flag==1){
            printf(" %d",k);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("So chan:");
    daysochan(n);
    printf("\nSo le:");
    daysole(n);
    return 0;
}