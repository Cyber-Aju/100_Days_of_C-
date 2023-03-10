/*A C++ class called Solution, which contains a member function called romanToInt.*/
class Solution {
public:
    int romanToInt(string s) {
        /*Declaring an integer variable called ans and initializes it to zero. This
        variable will store the final integer value of the Roman numeral string.*/
        int ans=0;
        /*This block of code defines an unordered map called mp that maps each Roman
        numeral character to its corresponding integer value.*/
        unordered_map <char,int> mp{
        {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    /*This line begins a for loop that iterates through each character in the input
    strings. The loop variable i is initialized to zero, and the loop continues as long as
    i is less than the size of the string s.*/
    for(int i=0; i<s.size(); i++){ 
        if(mp[s[i]]<mp[s[i+1]]){
            /*This block of code checks if the current character has a smaller value than
            the next character. If it does, it subtracts the current value from the tot
            (ans), otherwise it adds the current value to the total. This correctly handles
            cases such as "IV", "CM", "XL", etc., where a smaller value comes before a
            larger value, indicating subtraction instead of addition. However, there is a
            problem with this code: when i is equal to the size of the string minus one, i
            e., when the loop reaches the last character of the string, the code will
            access s[i+1], which is out of bounds and may cause undefined behavior.*/
            ans=ans-mp[s[i]];
        }
        else{
            ans=ans+mp[s[i]];
        }
    }
        return ans;
    }
}; 
