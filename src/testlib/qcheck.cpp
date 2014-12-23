
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
 
 
int main()
{
   auto  gen_choose = [](auto low, auto high){ return rand()%(high-low+1) + low;};
   std::cout << gen_choose(3,7); 
}
