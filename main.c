#include <stdio.h>
#include <math.h>


float ave(float n,float b[]){
    float s=0;
    float d =0;
    for (int i =0;i<n;i++){
        if (b[i]>0){
            s+= b[i];
            d+=1;

        }
    }
    float kq = (float)s/d;
    if (d>0){
        return kq;

    }else{
        return -1;
    }
    

    

}


float main(){

    float a[100];
    int n;
    printf("ban muon nhap bao nhieu phan tu");
    scanf("%d",&n);

    // prfloatf("\n n la %d",n);
    for (int i =0;i<n;i++){
        printf("\n nhap a[%d]",i);
        scanf("%f",&a[i]);


    }
    float kq = ave(n,a);
   if (kq>0){
       printf("ket qua la %.2f",ave(n,a));
   }else{
       printf("mang khong co so duong");
   }
    


    

    
    

    

}