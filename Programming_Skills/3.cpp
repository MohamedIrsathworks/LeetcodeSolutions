class Solution {
public:
    int strStr(string s, string t) {
        int len1=s.length();
        int len2=t.length();
        int flag=0,count=0;
        for(int i=0;i<len1;i++){
            for(int j=i;j<len2;j++)
            {
                if(s[i]==t[j]){
                    count++;
                    flag=i;
                }
            }
        }
        if(count==len2)
        {
            return flag;
        }
        return 0;
    }
};