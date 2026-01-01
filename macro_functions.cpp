#include <iostream>

#define make_func(name) \
void func_##name() { \
std::cout<< "func: " << "wellcome from " #name << std::endl;\
}

make_func(func1);

int main()
{

    func_func1();


}