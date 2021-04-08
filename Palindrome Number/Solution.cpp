class Solution
{
public:
  bool isPalindrome(int x)
  {
    if (x < 0)
      return false;
    if (x < 10)
      return true;
    string s;
    s = to_string(x);
    int i, j, iter;
    i = 0;
    j = s.length() - 1;
    iter = s.length() / 2;
    for (int n = 0; n < iter; n++)
    {
      if (s[i] == s[j])
      {
        i++;
        j--;
      }
      else
        return false;
    }
    return true;
  }
};