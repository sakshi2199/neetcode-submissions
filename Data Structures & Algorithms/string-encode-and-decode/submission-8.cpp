class Solution {
public:

    string encode(vector<string>& strs) {
        string eString;
        for (int i=0; i<strs.size(); i++) {
            eString = eString + to_string(strs[i].size()) + "#" + strs[i];
        }
        return eString;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string temp;
        int i = 0;
        while (i < s.size()) {
            int pos = s.find("#", i);
            int len = stoi(s.substr(i, pos-i));
            temp = s.substr(pos+1, len);
            result.push_back(temp);
            i = pos + len + 1;
        }
        return result;
    }
};
