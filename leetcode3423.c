#include<stdio.h>
#include<stdlib.h>
int maxdiff(int *nums,int numsSize){
    int max=abs(nums[0]-nums[numsSize-1]),current=0;
    //the initial.max value is the edge case of the problem as it is a circular arrys
    for(int i=0;i<numsSize-1;i++){
    current=abs(nums[i]-nums[i+1]);
    if(current>max){
    max=current;
       }
    
    }
    
    return max;

}
int main()
{
    int *nums=malloc(sizeof(int)*3);
    int numsSize=sizeof(nums)/sizeof(nums[0]);
    nums[0]=-2;
    nums[1]=1;
    nums[2]=-5;
    printf("%d",maxdiff(nums,3));
    
    
    
    return 0;
}