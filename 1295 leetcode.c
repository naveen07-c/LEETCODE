#include<stdio.h>
#include<stdlib.h>
int even(int *arr,int size){
int c=0,j=0;

for(int i=0;i<numsSize;i++){
   while(nums[i]!=0){
       c++;
       nums[i]/=10;
   }
    if(c%2==0){
    j++;
    }
    c=0;
}

return j;
}

int main()
{
    int *arr=malloc(sizeof(int)*5);
    arr[0]=555;
    arr[1]=901;
    arr[2]=10;
    arr[3]=6;
    arr[4]=7896;
    printf("%d",even(arr,5));
    return 0;
}