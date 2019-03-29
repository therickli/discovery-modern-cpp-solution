#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
int main()
{
    std::string x;
    int i;
    std::stringstream ss;
    std::ifstream read("matrix_market.txt");
    std::getline(read, x);
    while ((x.length() == 0 || x[0] == '%') && !read.eof())
        std::getline(read, x);
    if (x[0] == '%' || x.length() == 0)
    {
        std::cout << "!!!\n";
        return 0;
    }
    ss << x;
    if (ss >> i)
        std::cout << i << '\n';
    else
    {
        std::cout << "???\n";
        return 0;
    }
    if (ss >> i)
        std::cout << i << '\n';
    else
    {
        std::cout << "???\n";
        return 0;
    }
    if (ss >> i)
        std::cout << i << '\n';
    else
    {
        std::cout << "???\n";
        return 0;
    }
    return 0;
}