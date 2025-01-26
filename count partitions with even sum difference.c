int countPartitions(int* nums, int numsSize) {
     int count = 0, l_sum = 0, r_sum = 0;
    int t_sum=0;
    for(int i=0;i<numsSize;i++){
        t_sum+=nums[i];
    }
    for (int i = 0; i < numsSize-1; i++) {
        l_sum = 0;//left sum
        r_sum = 0;// right sum

        for (int x = 0; x <= i; x++) {
            l_sum += nums[x];
        }
       
    for (int j = i+1; j <numsSize; j++) {
            r_sum += nums[j];
        }
        if ((l_sum - r_sum) % 2 == 0) {
            count++;
        }
    }

    return count;
}