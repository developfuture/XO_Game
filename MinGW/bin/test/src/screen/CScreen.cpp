#include "CScreen.hpp"

namespace xo {
namespace screen {
	
const char* logPrefix = "CScreen"; 

CScreen::CScreen()
{
	cout<<"CScreen is created\n";
	// TODO screen->print_msg() 
	
}

CScreen::~CScreen()
{
	
}

void CScreen::log(const char* str)
{
   cout<<"CScreen::log ***********************************************\n";	
   cout<<str<<"\n";
}


} // namespace screen
} // namespace xo