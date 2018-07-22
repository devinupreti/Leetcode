class Solution(object):
    
    def twoSum(self, nums, target):
        dict1 = {}
        for i in range(len(nums)):
            if nums[i] in dict1.keys() :
                return [dict1.get(nums[i]) ,i]  
            else:
                dict1[target - nums[i]] = i