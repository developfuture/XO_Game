#ifndef xo_loger_hpp
#define xo_loger_hpp

#include "../screen/CScreen.hpp"

//using std::cout;

namespace xo {
namespace loger {


class CLoger
{
public:

    CLoger();
    ~CLoger();

    void operator()(const char* str);
	void setScreen(xo::screen::CScreen* scr);
	//Print()

private:

   // TODO
   xo::screen::CScreen* mpScreen;
   // CLogFile* logFile;
};


} // namespace loger
} // namespace xo


#endif // xo_loger_hpp
