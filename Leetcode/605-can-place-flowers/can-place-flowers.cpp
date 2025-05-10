class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int ans = 0;
        int size = arr.size();
        if (size == 1) {
            if (arr[0] == 0) ans++;
            return ans >= n;
        }

        for (int i = 0; i < size; i++) {
            if (arr[i] == 0) {
                bool leftEmpty = (i == 0 || arr[i - 1] == 0);
                bool rightEmpty = (i == size - 1 || arr[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
                    arr[i] = 1;
                    ans++;
                    i++; 
                }
               
            }
        }
        return ans >= n;
    }
};
