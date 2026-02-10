class Solution {
public:
void reversed(vector<char>&nums,int left,int right){
    while(left<right){
    char temp=nums[left];
    nums[left]=nums[right];
    nums[right]=temp;
    left++;
    right--;
    }
}
    void reverseString(vector<char>& s) {
        reversed(s,0,s.size()-1);
    }
};
