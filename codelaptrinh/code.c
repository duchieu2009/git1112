#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[100],b[100],c[100];
    int dem=0;
    
    
    
    int so_gia=n;
    while(so_gia>0){
        so_gia=so_gia/10;
        dem++;
    }

    printf("Day so la:");
    for(int i= 0; i<dem; i++){
        a[dem -1-i]=n % 10;
        n= n/10;
    }
    for(int i= 0; i<dem; i++){
         printf(" %d",a[i]);
    }

    

    int j=0,k=0;
    for(int i = 0; i<dem;i++){
        if(a[i] %2==0){
            b[j]=a[i];
            j++;
        }
        if(a[i] %2 ==1){
            c[k]=a[i];
            k++;
        }
    }
    printf("\nSo chan: ");
    for(int i=0;i<j;i++){
        printf(" %d,",b[i]);
    }



    printf("\nSo le: ");
    for(int i=0;i<k;i++){
        printf(" %d,",c[i]);
    }
    return 0;
}