#include<stdio.h>
void primenumber(int a,int b){
    for(int i=a;i<b;i++){
        if(i<=1)
        return 0;
        for(int j=2;j<i;j++){
            if(i/j==0)
            return 0;
            
             else
        printf("the prime number is");
    
        }
       
    }
    
    }

int main(){
    int x,y;
   printf("enter the range of interval");
    scanf("%d %d",&x,&y);
    primenumber(x,y);
    return 0;}