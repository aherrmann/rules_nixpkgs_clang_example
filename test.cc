#include <iostream>
#include <string>
#include <sstream>

std::string ver_string(int a, int b, int c) {
    std::ostringstream ss;
    ss << a << '.' << b << '.' << c;
    return ss.str();
}

std::string s_compiler = 
#ifdef __clang__
    "clang";
#else
    "gcc";
#endif

std::string s_compiler_ver =
#ifdef __clang__
    ver_string(__clang_major__, __clang_minor__, __clang_patchlevel__);
#else
    ver_string(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
#endif

int main() {
    std::cout << "compiler: " << s_compiler << ", version: " << s_compiler_ver << std::endl;
    return 0;
}