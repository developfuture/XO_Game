#ifndef xo_judge_hpp
#define xo_judge_hpp

#include "../game/CGame.hpp"


namespace xo {
namespace judge {


class CJudge
{
public:

   CJudge( xo::game::CGame* game, xo::xofield::CXOfield* field );
   ~CJudge();

   void nextMove();

private:

   bool isSomeoneWon() const;
   bool isFieldCompleted() const;

   xo::game::CGame* mpGame;
   xo::xofield::CXOfield* mpField;
   const char* mpCurrentPlayer;

};


} // namespace judge
} // namespace xo

#endif // xo_judge_hpp
