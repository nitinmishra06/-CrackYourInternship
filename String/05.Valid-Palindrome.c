/*Given a string s, return true if the s can be palindrome after deleting at most one character from it.*/

//Runtime 7ms beating 97.28% and memory using 11.30 MB i.e beats 11.96%;

bool ispalindrome(char* s,int left,int right){
     while (left < right) {
        if(s[left]==s[right]){
            left++;
            right--;
        }
        else 
        {
            return false;
        }

     }
     return true;
}




bool validPalindrome(char* s) {
       int slen = strlen(s);
    int left = 0;
    int right = slen - 1;
    int result = 0;

    while (left < right) {
        if(s[left]==s[right]){
            left++;
            right--;
        }
        else
        {
            return ispalindrome(s,left+1,right)||ispalindrome(s,left,right-1);
        }
        

    }
    return true;
}

    