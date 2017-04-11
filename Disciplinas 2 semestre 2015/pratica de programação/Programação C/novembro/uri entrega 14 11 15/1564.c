#include<stdio.h>
int main(){
    int a,b[1000],c=0;
    while(scanf("%d",&a)!=EOF){
        if (a==0)
            b[c]=0;
        else
            b[c]=1;
        c++;
    }
    for (a=0;a<c;a++){
        if(b[a]==0)
            printf("vai ter copa!\n");
        else
            printf("vai ter duas!\n");
    }
}
