/*Given two binary strings a and b, return their sum as a binary string.*/

//Runtime 0ms beats 100% and using 8.19MB beats 5.59%

char* addBinary(char* a, char* b) {
       int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = lenA > lenB ? lenA : lenB;
    int len = maxLen + 2;
    char* result = (char*)malloc(len * sizeof(char));
    result[len - 1] = '\0'; 

    int carry = 0;
    int i = lenA - 1, j = lenB - 1, k = len - 2;

    while (i >= 0 || j >= 0 || carry) {
        int digitA = (i >= 0) ? a[i--] - '0' : 0;
        int digitB = (j >= 0) ? b[j--] - '0' : 0;
        int sum = digitA + digitB + carry;
        result[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }


    if (carry) {
        result[k] = '1';
        return result + k;
    } else {
        return result + k + 1;
    }

}