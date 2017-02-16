#ifndef xo_game_hpp
#define xo_game_hpp

//using namespace std;

#include "../player/CPlayer.hpp"
#include "../xofield/CXOfield.hpp"
#include "../judge/CJudge.hpp"

//TODO delete #include "../player/CPlayer.hpp"

namespace xo {

namespace judge {
class CJudge;
}

namespace player {
class CPlayer;
}

namespace game {


class CGame
{
public:

   CGame( xo::xofield::CXOfield* field );
   ~CGame();

   void doNextMove(char playerSimbol) const;
   void doNextPlayerMove() const;
   void printField() const;
   void init( xo::judge::CJudge* judge );
   void startGame();

   // xo::xofield::CXOfield* getXOField(); - for Judge

private:
   //char mOunSimbol;

   xo::xofield::CXOfield* mpField;
	//char nNextPlayer;  // TODO move to Judger

	xo::player::CPlayer* mpPlayerX;
	xo::player::CPlayer* mpPlayer0;
   xo::judge::CJudge*   mpJudge;
};


} // namespace player
} // namespace xo

#endif // xo_game_hpp
