#include <iostream>
#include <string>

#include <stdio.h>

static int s_Level = 1;
static int s_Speed = 2;
static int s_Speed1 = 3;

int main()
{
  if(s_Level > 5)
    s_Speed = 10;
  else
    s_Speed = 5;

  s_Speed = s_Level > 5 ? s_Level > 10 ? 15 : 10 : 5; // nested temporary operator
  s_Speed1 = s_Level > 5 ? 15 : 10
  std::cout<<s_Speed<<std::endl;

  std::cin.get();
}
