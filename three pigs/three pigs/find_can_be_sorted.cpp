#include "find_can_be_sorted.h"
int getBits(int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    return count;
}

void swap(vector<int>& arr, int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

//bool canSortArray(vector<int>& nums) {
//    if (nums.size() <= 1) {
//        return true;
//    }
//    vector<int> bits;
//    for (int num : nums) {
//        bits.push_back(getBits(num));
//    }
//    // bubble sort
//    for (int i = 1; i < nums.size(); ++i) {
//        int curr = i;
//        while (curr > 0 && nums[curr] < nums[curr - 1]) {
//            if (bits[curr] != bits[curr - 1]) {
//                return false;
//            }
//            swap(nums, curr, curr - 1);
//            swap(bits, curr, curr - 1);
//            curr--;
//        }
//    }
//    return true;
//}

bool canSortArray(vector<int>& nums) {
    if (nums.size() <= 1) {
        return true;
    }

    vector<pair<int, int>> bitGroups;  // Stores ranges for each set-bit count group
    bitGroups.push_back({ nums[0], nums[0] });

    for (size_t i = 1; i < nums.size(); i++) {
        int currentBits = std::popcount(static_cast<unsigned int>(nums[i]));
        int previousBits = std::popcount(static_cast<unsigned int>(nums[i - 1]));

        // Start a new group if the set-bit count changes
        if (currentBits != previousBits) {
            bitGroups.push_back({ nums[i], nums[i] });
        }

        // Update the current group’s range with min and max
        bitGroups.back().first = min(bitGroups.back().first, nums[i]);
        bitGroups.back().second = max(bitGroups.back().second, nums[i]);
    }

    // Check for overlapping ranges between groups
    for (size_t i = 1; i < bitGroups.size(); i++) {
        if (bitGroups[i - 1].second > bitGroups[i].first) {
            return false;
        }
    }
    return true;
}