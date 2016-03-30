
/**
 * Note: The returned array must be malloced, assume caller calls free().
verified solution 336 ms: beats 7.76 % of the submitted solutions
 */
int* twoSum(int* nums, int numsSize, int target) {
 
 int* target_sum_array;
 //int* nums= (int*)malloc(numsSize*sizeof(int));;
 int i,j; 
 target_sum_array= (int*)malloc(2*sizeof(int));
 
 for(i=0;i<numsSize;i++)
 {
   for(j=0;j<numsSize;j++)
   {
       if ((target == ( nums[i] + nums[j])) && (i!=j))
       {
        target_sum_array[0]=i;
        target_sum_array[1]=j;
        return target_sum_array;       
       }
       
   }
 }
 
}

/*
#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target) {
 
 int* target_sum_array,i,j; 
 target_sum_array= (int*)malloc(sizeof(2*sizeof(int)));
 
 for (i=0;i<numsSize;i++)
 {
   for(j=0;j<numsSize;j++)
   {
       if (target == ( i + j))
       {
        target_sum_array[0]=i;
        target_sum_array[1]=j;
        return target_sum_array;
       }
       
   }
 }
}

int main(int argc, char *argv[])
{
	
	int target= argv[1];
}*/
