class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int found = ransomNote.find_first_of(magazine.back());
        int x = 0;
        while (magazine.size() > 0) {
            if (found != string::npos) {
                ransomNote[found] = '*';
                x++;
            }
            magazine.pop_back();
            if (magazine.size() > 0) { found = ransomNote.find_first_of(magazine.back()); }
            if (x == ransomNote.size()) {return true;}
        }
        return false;
    }
};