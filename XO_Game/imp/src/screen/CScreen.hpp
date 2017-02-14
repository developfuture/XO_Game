#ifndef xo_screen_hpp
#define xo_screen_hpp

// TODO it should be only in CScreen
#include <iostream>


namespace xo {
namespace screen {


class CScreen
{
public:

    CScreen();
    ~CScreen();

    void log(const char* str);

};


} // namespace screen
} // namespace xo

#endif // xo_screen_hpp
