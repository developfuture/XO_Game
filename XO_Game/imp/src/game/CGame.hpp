#ifndef xo_game_hpp
#define xo_game_hpp

#include "../player/CPlayer.hpp"

namespace xo {
namespace game {


class CGame
{
public:

   CGame( xo::xofield::CXOfield* field );
   ~CGame();

   void doNextMove(const char playerSimbol) const;
   void doNextPlayerMove() const;
   void printField() const;
   void init( xo::judge::CDjudge* judge );

private:
   char mOunSimbol;

   xo::xofield::CXOfield* mpField;
	char nNextPlayer;  // TODO move to Judger

	xo::player::CPlayer* mpPlayerX;
	xo::player::CPlayer* mpPlayer0;
   xo::judge::CJudge*   mpJudge;
};


} // namespace player
} // namespace xo

#endif // xo_game_hpp
