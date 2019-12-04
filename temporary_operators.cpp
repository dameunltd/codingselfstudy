#include <iostream>
#include <string>

#include <stdio.h>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
  if (s_Level > 5)
    s_Speed = 10;
  else
    s_Speed = 5;

  s_Speed = s_Level > 5 ? 10 : 5;

  std::string rank = s_Level > 10 ? "Master" : "Beginner"; // assigning "master" if s_Level is 10 or more. "Beginner" if false

  std::string otherRank;
  if (s_Level > 10) // same as above example in 'rank' string, just uses more line of code
    otherRank = "Master";
  else
    otherRank = "Beginner";

  std::cin.get();
}
