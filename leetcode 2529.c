/*problem link
https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/
*/
#include<stdio.h>
#include<stdlib.h>
int maximumCount(int* nums, int numsSize) {
    int pos_count=0,neg_count=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<0){
            neg_count++;
        }
        else if(nums[i]>0){
            pos_count++;
        }
    }
    return (pos_count>neg_count)?pos_count:neg_count;
}
int main(){
    int *arr=malloc(sizeof(int)*5);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = -1;
    arr[4] = -4;  
      printf("%d",maximumCount(arr,5));
    
}