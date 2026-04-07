class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    
    vector<int> first(26, 0);
    vector<int> second(26, 0);

   int size1 = s1.size();
   int size2 = s2.size();

    if (size1 > size2) return false;

   for (int i = 0; i < size1; i++) {
      first[s1[i] - 'a']++;
      second[s2[i] - 'a']++;
   }
   int left = 0;
   for (int i = size1; i < size2; i++) {
      if (first == second) return true;
      else {
         second[s2[i] - 'a']++;
      }
      second[s2[left] - 'a']--;

      left++;
   }
    if (first == second) return true;
    
   return false;

        
    }
};