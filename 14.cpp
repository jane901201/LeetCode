class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.empty()) return "";

        int length = strs[0].length();
        string output = "";

        for(int i = 0; i < strs.size(); i++)
        {
            if(strs[i].length() < length)
            {
                length = strs[i].length();
            }
        }

        for(int j = 0; j < length; j++)
        {
            for(int k = 1; k < strs.size(); k++)
            {
                if(strs[k-1][j] != strs[k][j])
                {
                    return output;
                }
            }

            output += strs[0][j];
        }

        return output;
    }
};