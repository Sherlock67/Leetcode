class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0)
          return false;
      long long int num,rev = 0,rem = 0;
      num = x;
      while (x != 0) {
        rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
    if(num  == rev)
        return true;
    else
        return false;
    }
};
