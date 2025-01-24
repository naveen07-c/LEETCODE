#include<stdio.h>
 int minarr(int *nums,int n){
 
 int min=nums[0];
 for(int i=0;i<n;i++)
 {
 if(nums[i]<min)
 {
 min =nums[i];
 }
 }
 return min;
 }
 int maxarr(int *nums,int n){
 
 int max=nums[0];
 for(int i=0;i<n;i++)
 {
 if(nums[i]>max)
 {
 max =nums[i];
 }
 }
 return max;
 }
int main()
{  
  int numsSize,max,min,avg;
  printf("enter the array size");
  scanf("%d",&numsSize);
int *nums=malloc(numsSize*sizeof(int));
double *averages=malloc(numsSize*sizeof(double));
for(int i=0;i<=n/2;i++){
  max=maxarr(nums
}
}