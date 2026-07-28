class Solution {
public:
    bool isPalindrome(int x) 
    {
        

        long long original = x;   
        long long iNum = x;
        long long iRev = 0;
        int iDigit = 0;
        bool bFlag = false;

        if (x < 0) 
        {
            return bFlag;
        }

        while (iNum != 0)
        {
            iDigit = iNum % 10;
            iRev = iRev * 10 + iDigit;
            iNum = iNum / 10;
        }

        return iRev == original; 
    }
};
