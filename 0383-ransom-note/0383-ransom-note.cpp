class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int found = ransomNote.find_first_of(magazine.back());
        while (magazine.size() > 0) {
            if (found != string::npos) {
                ransomNote.erase(found, 1);
            }
            magazine.pop_back();
            if (magazine.size() > 0) { found = ransomNote.find_first_of(magazine.back()); }
            if (ransomNote.size() == 0) {return true;}
        }
        return false;
    }
};