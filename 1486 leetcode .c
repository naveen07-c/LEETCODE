#include<stdio.h>
#include<stdlib.h>
int xor1(int n,int start){
int *nums=malloc(n*sizeof(int));
for(int i=0;i<n;i++){
nums[i]= start+ 2*i;

}
int a=nums[0];
for(int i=1;i<n;i++){
 a=a^nums[i];
}
return a;


}
int main()
{   
    int n=4,start=3;
    int *arr=malloc(n*sizeof(int));
   printf("%d", xor1(n,start));
    

    return 0;
}