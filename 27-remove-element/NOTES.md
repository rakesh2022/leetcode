use  2 pointers;
one slow and one fast;
int slow=0,fast=0;
while(fast<n){
if(nums[fast]!=val){nums[slow]=nums[fast];
slow++;
fast++;
}}
return slow;
​