class Solution
{
public:
  int getValue(char s)
  {
    switch (s)
    {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
    }
    return 0;
  }
  bool isForMinus(char currentChar, char nextChar)
  {
    if (getValue(currentChar) < getValue(nextChar))
      return true;
    return false;
  }
  int romanToInt(string s)
  {
    int iter = s.length();
    int res = 0;
    int toMinus = 0;
    for (int i = 0; i < iter; i++)
    {
      if (toMinus != 0)
      {
        res += getValue(s[i]);
        res -= toMinus;
        toMinus = 0;
        continue;
      }
      if (isForMinus(s[i], s[i + 1]))
        toMinus = getValue(s[i]);
      else
        res += getValue(s[i]);
    }
    return res;
  }
};