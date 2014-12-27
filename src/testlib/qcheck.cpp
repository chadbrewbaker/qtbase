
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <sstream>
using namespace std;


auto mtest = [](auto a, auto b, auto line){
    std::stringstream s1;
    std::stringstream s2;
    s1 << a;
    s2 << b;
    std::string s1s = s1.str();
    std::string s2s = s2.str();
    if(s1s.compare(s2s) != 0)
    {
        std::cout << "line:" << line << " " << s1s << " != " << s2s << endl;
    }
    return;
};


auto gen_elements = [](auto list){};
auto gen_one_of = [](auto gens){};
auto gen_such_that = [](auto predicate, auto gen, auto max=100) {};
auto gen_sample = [] (auto gen, auto max_len=100) {};
auto seven_eleven = [] (){ return (rand()%2) == 0 ? 7: 11;};
auto gen_tuple = [] (auto g1, auto g2){};
auto gen_frequency = [] (auto pairs){};
auto gen_pos_int = [] () { return rand()%100;};
auto gen_fmap = [](auto f, auto gen){ return f(gen);};
auto gen_bind = [](auto gen, auto f ){  };
auto gen_choose = [](auto low, auto high){ return rand()%(high-low+1) + low;};

auto gen_return = [](auto x){return x;};

int main()
{
   
   std::cout << gen_choose(3,7) << endl;
   mtest( gen_choose(3,7), 8, __LINE__);
   auto x = seven_eleven();
   
   mtest(  x == 11 || x == 7 , true, __LINE__); 
}
