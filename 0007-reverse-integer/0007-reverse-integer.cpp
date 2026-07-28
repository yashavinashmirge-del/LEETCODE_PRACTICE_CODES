class Solution {
public:
    int reverse(int x)
    {
        int iNum = x;
        int iDigit = 0;
        int iRev = 0;
        
        while (iNum != 0)
        {
            iDigit = iNum % 10;
            iNum = iNum / 10;

            
            if (iRev > INT_MAX / 10 || (iRev == INT_MAX / 10 && iDigit > 7))
            {
                return 0;
            }
            if (iRev < INT_MIN / 10 || (iRev == INT_MIN / 10 && iDigit < -8))
            {
                return 0;
            }

            iRev = iRev * 10 + iDigit;
        }
        
        return iRev;
    }
};