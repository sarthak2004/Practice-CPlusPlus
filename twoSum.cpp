#include<iostream>
using namespace std;

int binary_search(vector<int> &nums, int subtarget, int start, int end) {
        if (start <= end) {
            int mid = (start+end)/2;
            if (nums[mid] == subtarget) {
                return mid;
            }
            if (subtarget < nums[mid]) {
               if (binary_search(nums, subtarget, start, mid - 1) != -1) {
                   return mid;
               }
               return -1;
            }
            if (binary_search(nums, subtarget, mid + 1, end) != -1) {
                return mid;
            }
            return -1;
        }
        return -1;
    }

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> nums2 = nums;
    sort(nums2.begin(), nums2.end());
    vector<int> answer;
    for (int i = 0; i < nums.size(); i++) {
        int ans = binary_search(nums, (target - nums[i]), i, nums.size() - 1);
        if (ans != -1 && (ans != i)) {
            answer.push_back(nums[i]);
            answer.push_back(nums[ans]);
            break;
        }
    }
    cout << answer[0] << " " << answer[1];
    answer[0] = binary_search(nums2, answer[0], 0, nums2.size() - 1);
    answer[1] = binary_search(nums2, answer[1], 0, nums2.size() - 1);
    return answer;
}