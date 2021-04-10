class Solution
{
public:
  bool isValid(string s)
  {
    vector<char> v;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
      if (s[i] == 40 || s[i] == 91 || s[i] == 123)
        v.push_back(s[i]);
      else
      {
        if (v.size() > 0)
        {
          if (s[i] - 1 == v.back() || s[i] - 2 == v.back())
            v.pop_back();
          else
            return false;
        }
        else
          return false;
      }
    }
    if (!v.empty())
      return false;
    return true;
  }
};