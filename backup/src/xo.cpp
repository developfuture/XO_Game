//#include "windows.h"
/*TODO delete*/ #include <iostream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
//using std::cout;

//#include "loger/CLoger.cpp"
//#include "screen/CScreen.hpp"
#include "xofield/CXOfield.hpp"
#include "game/CGame.hpp"
#include "judge/CJudge.hpp"

//using namespace xo::loger;
//using namespace xo::screen;

//using namespace xo::player;
//using namespace xo::xofield;
//using namespace xo::judge;

//const char* logPrefix = "main";

using xo::xofield::CXOfield;
using xo::game::CGame;
using xo::judge::CJudge;

int main()
{
   cout<<"START";
   //xo::loger::CLoger PRINT;
   //xo::screen::CScreen* screen;
   //PRINT.setScreen(screen);
   //PRINT("--START PROGRAMM--\n");


   xo::xofield::CXOfield* XOField = new CXOfield;
   xo::game::CGame* Game = new CGame(XOField);

   // TODO Judge should get XOField from Game
   xo::judge::CJudge* Judge = new CJudge(*Game, XOField);

   Game->init(Judge);
   Game->startGame();








   //PRINT("--FINISH PROGRAMM--\n");
   int a; cin>>a;
}


//} //namespace xo



