string s;
cin >> s;
string copy = s.substr(2, 3);
string ubah = s.substr(0, 2);
int ans = 0;
if (stoi(ubah) > 12)
{
  ans = stoi(ubah);
  ans = ans - 12;
  if (ans < 10)
  {
    cout << "0" << ans << copy << " PM" << endl;
  }
  else
    cout << ans << copy << " PM" << endl;
}
else if (s[1] == '0' && s[0] == '0')
{
  cout << "12" << copy << " AM" << endl;
}
else if (stoi(ubah) == 12)
{
  cout << s << " PM" << endl;
}
else
  cout << s << " AM" << endl;