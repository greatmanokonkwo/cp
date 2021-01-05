#include<bits/c++.h>
using namespace std;

class Solution{
	public:
		void sortColors(vector<int>& nums){
			int ends[3] = {0,0,0};
		
			for (int i=0;i<nums.size();i++)
				ends[nums[i]]++;

			ends[2] = ends[1];
			ends[1] = ends[0];
			ends[0] = 0;

			for (int i=0;i<nums.size();i=i){
				if (ends[nums[i]] == i){
					i++;
				} else {
					int temp = nums[ends[nums[i]]];
					nums[ends[nums[i]]] = nums[i];
					nums[i] = temp;
					ends[nums[i]]++;
				}
			}	
		}
};
