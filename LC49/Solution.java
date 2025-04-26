import java.util.*;

class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, List<String>> map = new HashMap<>();
        for (String str : strs) {
            String key = toKey(str);
            map.putIfAbsent(key, new ArrayList<>()); //
            map.get(key).add(str);
        }
        return new ArrayList<>(map.values());
    }

    public String toKey(String str) {
        int[] count = new int[26];
        for (char c : str.toCharArray()) {
            count[c - 'a']++;
        }
        
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < 26; i++) {
            sb.append('#').append(count[i]);
        }
        return sb.toString();
    }
    
}