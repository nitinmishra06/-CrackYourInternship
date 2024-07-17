/*Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

*/


//Runtime 0ms beats 100% using 7.80MB beats 5.49%


int strStr(char* haystack, char* needle) {
int track1=0;
int result=-1;
int haystackLen=strlen(haystack);
int needleLen=strlen(needle);
for(int i=0;i<haystackLen;i++){
      if(haystack[i]==needle[track1]){
        if(track1==0){
            result=i;
        }
      
        track1++;
      }
     else {
            if (track1 > 0) {
                i = result; 
            }
            track1 = 0;
            result = -1;
        }

     if(track1==needleLen)
        {
            break;
        }
    


}
if (track1 != needleLen) {
        result = -1;
    }


return result;
    
}