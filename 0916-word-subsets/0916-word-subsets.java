class Solution {
    public List<String> wordSubsets(String[] words1, String[] words2) {
        int i = 0;
        int j = 0;
        int match = 0;
        ArrayList<String> output = new ArrayList<String>();
        
        for(i = 0; i < words1.length; i++) {
            for(j = 0; j < words2.length; j++) {
                if(words1[i].contains(words2[j])) {
                    match++;
                }
                else {
                    break;
                }
            }

            if(match == words2.length) {
                output.add(words1[i]);
                match = 0;
            }
            else {
                match = 0;
            }
        }

        return output;
    }
}