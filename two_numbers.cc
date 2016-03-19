#include<stdio.h>
#include<vector>
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> res;
        for (int i=0;i<numbers.size()-1;i++){
            for (int j=i+1;j<numbers.size();j++){
                if (numbers[i]+numbers[j]==target){
                    res.push_back(i+1);
                    res.push_back(j+1);
                    return res;
                }
            }    
        }
        return res;
    }
};

int main()
{
	Solution a;
	vector<int> numbers = {2,7,11,15};
	int target=9;
	a.twoSum(numbers,target)
	 
return 0;	
}	
