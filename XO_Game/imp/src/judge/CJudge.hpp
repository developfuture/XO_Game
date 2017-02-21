#ifndef xo_judge_hpp
#define xo_judge_hpp

#include <queue>

#include "../xofield/CXOfield.hpp"
#include "../game/CGame.hpp"
//#include "./CState.hpp"


namespace xo {

namespace game {
class CGame;
}

namespace judge {


class CJudge
{
public:

   CJudge();
   ~CJudge();

   // TODO addGame(xo::game::CGame* mGame);
   void nextMove();
   void doNextPlayerMove( xo::game::CGame* game );

private:

   bool isSomeoneWon() const;
   bool isFieldCompleted() const;

   xo::game::CGame* mpCurrentGame;
   //xo::xofield::CXOfield* mpField;
   //char mpCurrentPlayerSimbol;
   //CState* mpCurrntState;

   queue< xo::game::CGame* > & mGames;

};


} // namespace judge
} // namespace xo

#endif // xo_judge_hpp
