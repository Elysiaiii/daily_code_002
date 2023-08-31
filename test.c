

int removeElement(int* nums, int numsSize, int val) {
    int left = 0;
    int right = numsSize - 1;
    while (left <= right)
    {
        if (nums[right] == val)
        {
            right--;
        }
        else if (nums[left] == val)
        {
            nums[left] = nums[right];
            left++;
            right--;
        }
        else
        {
            left++;
        }
    }
    return left;
}