#include "str.h"
#include <interpreter.hpp>

int main()
{
    ezcfg::Interpreter itp("ini.txt");
    Str str;
    itp.parse(str);
}