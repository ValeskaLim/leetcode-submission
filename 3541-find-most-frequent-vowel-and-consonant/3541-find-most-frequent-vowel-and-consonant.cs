public class Solution {
    public int MaxFreqSum(string s) {
        Console.WriteLine(s[0]);

        char[] splittedWord;
        int vowel = 0;
        int cons = 0;
        int tempCons = 0;
        int tempVowel = 0;
        char currVowel = '\0';
        char currCons = '\0';
        bool flagCons = false;
        bool flagVowel = false;

        splittedWord = s.ToCharArray();

        Array.Sort(splittedWord);

        Console.WriteLine(splittedWord);

        for(int i = 0; i < splittedWord.Length; i++) {
            if(splittedWord[i] == 'a' || splittedWord[i] == 'i' || splittedWord[i] == 'u' || splittedWord[i] == 'e' || splittedWord[i] == 'o') {
                if(!flagVowel) {
                    currVowel = splittedWord[i];
                    flagVowel = true;
                }

                if(currVowel != splittedWord[i]) {
                    if(vowel < tempVowel)
                        vowel = tempVowel;
                    tempVowel = 0;
                    flagVowel = true;
                }

                if(vowel < tempVowel && flagVowel && currVowel != splittedWord[i]) {
                    vowel = tempVowel;
                    tempVowel = 0;
                }

                currVowel = splittedWord[i];
                tempVowel++;
            }
            else{
                if(!flagCons) {
                    currCons = splittedWord[i];
                    flagCons = true;
                }
                // Handle char changes for consonant & if old cons < new cons
                if(currCons != splittedWord[i]) {
                    if(cons < tempCons) 
                        cons = tempCons;
                    tempCons = 0;
                    flagCons = true;
                }

                if(cons < tempCons && flagCons && currCons != splittedWord[i]) {
                    cons = tempCons;
                    tempCons = 0;
                }

                currCons = splittedWord[i];
                tempCons++;
            }
        }

        if(tempCons > cons) {
            cons = tempCons;
        }

        if(tempVowel > vowel) {
            vowel = tempVowel;
        }

        return vowel + cons;
    }
}