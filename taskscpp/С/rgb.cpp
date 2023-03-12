#include <iostream>
int main()
{
    unsigned int color {0x04F1A2u};
    unsigned int mask {0xFFu};          // маска для получения цветовых компонент
    unsigned red {color >> 16};
    std::cout << "Red:" << red << std::endl;
    unsigned green {(color >> 8) & mask};
    std::cout << "Green:" << green << std::endl;
    unsigned blue {color & mask};
    std::cout << "Blue:" << blue << std::endl;
    
    std::cout << "Red:"<< std::hex << red << std::endl;
    std::cout << "Green:"<< std::hex << green << std::endl;
    std::cout << "Blue:" << std::hex << blue << std::endl;
}