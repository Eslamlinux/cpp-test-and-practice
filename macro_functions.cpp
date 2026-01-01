#include <iostream>

#define make_func(name) \
void func_##name() { \
std::cout<< "func: " << "wellcome from " #name << std::endl;\
}

#define make_vall(v) int vall_##v
#define vnum(i) vall_##i

make_func(func1);

int main()
{

    func_func1();
    make_vall(count);

    vall_count = 10;
    std::cout << vall_count << std::endl;




}