class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if (arr.size() < 3) {
            return 0;
        }
        int start = 0, end = 0, flag = 0, cmpmax = 0, cmp = 0;
        if (arr[0] < arr[1]) {
            start = 0;
            flag = 1;
        }
        for (int i = 1; i < arr.size(); i++) {
            if (i != (arr.size() - 1)) {
                if ((arr[i] <= arr[i - 1]) && (arr[i] < arr[i+1]) && (flag == 0)) {
                    start = i;
                    flag = 1;
                }
                else if (((arr[i] < arr[i - 1]) && (arr[i] <= arr[i+1]) && (flag == 1))) {
                    end = i;
                    flag = 0;
                    if (arr[i+1] < arr[i] && i == arr.size() - 2) {
                        end = i + 1;
                    }
                    cmp = end - start + 1;
                    cmpmax = max(cmpmax, cmp);
                    if (arr[i + 1] > arr[i]) {
                        flag = 1;
                        start = i;
                    }
                }
                else if ((arr[i] == arr[i + 1]) && flag == 1) {
                    start = 0;
                    end = 0;
                    flag = 0;
                }
            }
            else if ((arr[i] < arr[i - 1]) && flag == 1) {
                end = i;
                cmp = end - start + 1;
                cmpmax = max(cmpmax, cmp);
            }
        }
        return cmpmax;
    }
};