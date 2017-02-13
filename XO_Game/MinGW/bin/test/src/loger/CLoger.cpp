#include "CLoger.hpp"

namespace xo {
namespace loger {
	
const char* logPrefix = "CLoger"; 

CLoger::CLoger()
:mpScreen(0)
//,logFile(0)
{
	cout<<"CLoger is created\n";
	// TODO screen->print_msg() 
	
}

CLoger::~CLoger()
{
	// TODO
	//delete screen;
	//screen = 0;
	//delete logFile;
	//logFile = 0;
}

void CLoger::operator()(const char* str /* TODO ...*/ )
{
	// TODO
	// make outputStr
	cout<<"CLoger::operator()\n";
	const char* outputStr = str;
	
	if(mpScreen )
	{
	   mpScreen->log(outputStr);
    }
	else
	{
		cout<<"ERROR mpScreen = 0\n";
	}
	
	//if(logFile)
	//{
	//logFile->log(outputStr);
	//}
	
   //cout<<logPrefix<<": "<<str;
}

void CLoger::setScreen(xo::screen::CScreen* scr)
{
	mpScreen = scr;
}

} // namespace loger
} // namespace xo