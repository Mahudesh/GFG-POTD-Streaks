class Solution {
  public:
    int countSubstring(string &s)
    {
        // code here
        // int cnt=0;
        // for(int i=0;i<s.length();i++)
        // {
        //     string sub="";
        //     for(int j=i;j<s.length();j++)
        //     {
        //         sub+=s[j];
        //         if(sub[0] == sub[sub.length()-1])
        //         cnt++;
        //     }
        // }
        // return cnt;
        
        unordered_map<char,int>Map;
        for(auto it : s)
        Map[it]++;
        
        int cnt=0;
        for(auto it : Map)
        {
            int f=it.second;
            cnt=cnt+(f*(f+1))/2;
        }
        return cnt;
    }
};
