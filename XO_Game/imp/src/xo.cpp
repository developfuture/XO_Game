#include "windows.h"
/*TODO delete*/ #include <iostream>
#include <string>
#include <vector>

using namespace std;


//#include "loger/CLoger.cpp"
//#include "screen/CScreen.hpp"
#include "xofield/CXOfield.hpp"
#include "player/CPlayer.hpp"
#include "game/CGame.hpp"
#include "judge/CJudge.hpp"

//using namespace xo::screen;
using namespace xo::player;
using namespace xo::xofield;
using namespace xo::loger;
using namespace xo::judge;


//TODO  namespace xo {

const char* logPrefix = "main";


int main()
{
   xo::loger::CLoger PRINT;
   //xo::screen::CScreen* screen;
   //PRINT.setScreen(screen);

   //PRINT("--START PROGRAMM--\n");

   xo::xofield::CXOfield XOField new CXOfield;
   xo::game::CGame* Game = new CGame(XOField);

   xo::judge::CJudge Judge = new CJudge(*Game);

   Game->init(Judge);








   //PRINT("--FINISH PROGRAMM--\n");
   int a; cin>>a;
}


//} //namespace xo



