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
   cout<<"START\n\n";
   //xo::loger::CLoger PRINT;
   //xo::screen::CScreen* screen;
   //PRINT.setScreen(screen);
   //PRINT("--START PROGRAMM--\n");

   //xo::judge::CJudge* Judge = new CJudge();
   xo::judge::CJudge Judge; // NOT pointer

   xo::xofield::CXOfield* XOField_1 = new CXOfield;
   xo::game::CGame* Game_1 = new CGame(Judge);

   //xo::xofield::CXOfield* XOField_2 = new CXOfield;
   //xo::game::CGame* Game_2 = new CGame(Judge);

   Game_1->init(XOField_1);
   Game_1->startGame();

   //Game_2->init(XOField_2);
   //Game_2->startGame();








   //PRINT("--FINISH PROGRAMM--\n");
   int a; cin>>a;
}


//} //namespace xo



