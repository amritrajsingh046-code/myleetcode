class Solution {
public:
    bool checkString(string s) {
        string temp=s;
        sort(temp.begin(),temp.end());
        if(s!=temp){
            return false;
        }
        return true;
    }
};