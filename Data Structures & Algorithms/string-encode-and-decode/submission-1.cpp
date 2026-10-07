class Solution {
   public:
    string eString;
    vector<string> result;
    string encode(vector<string>& strs) {
        for (int i = 0; i < strs.size(); i++) {
            eString = eString + to_string(strs[i].size()) + "#" + strs[i];
        }
        return eString;
    }
    

    vector<string> decode(string s) {
        string temp;
        int i = 0;
        while (i < eString.size()) {
            int pos = eString.find('#', i);
            int len = stoi(eString.substr(i, pos-i));
            temp = eString.substr(pos+1, len);
            result.push_back(temp);
            i = pos+len+1;
        }
        return result;
    }

    
};
