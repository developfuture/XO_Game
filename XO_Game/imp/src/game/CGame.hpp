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

   CGame( xo::judge::CJudge judge );
   ~CGame();

   void doNextMove() const;
   void doNextPlayerMove();
   void init(xo::xofield::CXOfield* field);
   void startGame();
   int getGameID() const;
   char getCurrentPlayerSimbol() const;
   void setCurrentPlayerSimbol(char simb);

   xo::xofield::CXOfield* getXOField() const; // - for Judge

private:
   //char mOunSimbol;
   void printField() const;

   int mGameID;
   xo::xofield::CXOfield* mpField;
	char mCurrentPlayerSimbol;  // TODO move to Judger

	xo::player::CPlayer* mpPlayerX;
	xo::player::CPlayer* mpPlayer0;
   xo::judge::CJudge&   mJudge;
};


} // namespace player
} // namespace xo

#endif // xo_game_hpp
