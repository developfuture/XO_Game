#ifndef xo_screen_hpp
#define xo_screen_hpp

#include <iostream>
//#include "../loger/CLoger.hpp"

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