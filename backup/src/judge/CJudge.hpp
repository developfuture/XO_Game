#ifndef xo_judge_hpp
#define xo_judge_hpp

#include "../xofield/CXOfield.hpp"
#include "../game/CGame.hpp"

//using std::cout;

//class xo::game::CGame;  // TODO delete?

namespace xo {

namespace game {
class CGame;
}

namespace judge {


class CJudge
{
public:

   CJudge( xo::game::CGame& game, xo::xofield::CXOfield* field );
   ~CJudge();

   // TODO addGame(xo::game::CGame* mGame);
   void nextMove();
   void doNextPlayerMove(); //const

private:

   bool isSomeoneWon() const;
   bool isFieldCompleted() const;

   xo::game::CGame& mGame;
   xo::xofield::CXOfield* mpField;
   char mpCurrentPlayer;
   //vector< xo::game::CGame* > * mpGames;
};


} // namespace judge
} // namespace xo

#endif // xo_judge_hpp
