//https://leetcode.com/problems/repeated-substring-pattern/?envType=study-plan-v2&envId=programming-skills
bool repeatedSubstringPattern(char s[]) {
    int len = strlen(s);
    
    for (int i = 1; i <= len / 2; i++) {
        if (len % i == 0) {
            int numRepeats = len / i;
            bool isRepeated = true;

            for (int j = i; j < len; j++) {
                if (s[j] != s[j - i]) {
                    isRepeated = false;
                    break;
                }
            }

            if (isRepeated) {
                return true;
            }
        }
    }
    
    return false;
}
