class Solution
{
public:
  int reverse(int x)
  {
    int min = -1 * pow(2, 31);
    int max = pow(2, 31) - 1;
    long cx = x;
    string str = "";
    if (cx < 0)
    {
      str += "-";
      cx = -1 * cx;
    }
    string sx = to_string(cx);
    for (int i = sx.length(); i > 0; i--)
    {
      str += sx[i - 1];
    }
    long res = stol(str);
    if (res < min || res > max)
      return 0;
    return res;
  }
};