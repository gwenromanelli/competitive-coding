#include <bits/stdc++.h>
using namespace std;

int main(){
        int n,m;
        cin >> n >> m;
        vector<int> nums1(n,0);
        vector<int> nums2(m,0);
        for (int i = 0; i < n; ++i){
            cin >> nums1[i];
        }
        for (int i = 0; i < m; ++i){
            cin >> nums2[i];
        }
        /////////////////////
        while(nums1.size() + nums2.size() > 4){
            int median1 = nums1.size() / 2;
            int median2 = nums2.size() / 2;
            if (nums1[median1] > nums2[median2]){
                nums1.erase(nums1.begin() + median1 + 1, nums1.end());
                nums2.erase(nums2.begin(),nums2.begin() + median2);
            }
            else{
                nums1.erase(nums1.begin(),nums1.begin() + median1);
                nums2.erase(nums2.begin() + median2 + 1, nums2.end());
            }
        }

        vector<int> nums3;
        for (int i : nums1){
            cout << i << " ";
            nums3.push_back(i);
        }
        cout << endl;
        for (int i : nums2){
            cout << i << " ";
            nums3.push_back(i);
        }
        sort(nums3.begin(),nums3.end());
        cout << endl;

        if (nums3.size() % 2 == 1){
            cout << "median: " << nums3[nums3.size()/2] << endl;
        }
        else{
            int mid = (nums3.size()-1)/2;
            cout << "mid: " << mid << endl;
            double median = nums3[mid] + nums3[mid+1];
            cout << "median: " << median/2 << endl;
        }
    return 0;
}