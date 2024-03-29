#include <iostream>
using namespace std;

int hour;
string minute;

int main()
{
  cin >> hour;
  cout << ":";
  cin >> minute;

  if (hour > 12)
  {
    hour %= 12;
  }
  else if (hour == 0)
  {
    hour = 12;
  }

  if (hour < 12 && hour >= 0)
  {
    cout << "0" << hour << ":" << minute;
  }
  else
  {
    cout << hour << ":" << minute;
  }
}