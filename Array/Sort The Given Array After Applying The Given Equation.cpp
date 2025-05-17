class Solution {
  public:
    vector<int> sortArray(vector<int> &arr, int A, int B, int C)
    {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int ele=arr[i];
            ele=(A*(ele*ele)+(B*ele)+C);
            arr[i]=ele;
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};
