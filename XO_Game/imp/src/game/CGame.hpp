#ifndef xo_game_hpp
#define xo_game_hpp

#include "../player/CPlayer.hpp"

namespace xo {
namespace game {


class CGame
{
public:

   CGame( /* IJudgerForGame* Jud, const char fileNameForXOField,   */ );
   ~CGame();

   void doNextMove();

   //void doNextMove(/* char next_player_simb */xo::xofield::CXOfield* field);

private:
   char mOunSimbol;

   xo::xofield::CXOfield* mpField;
	char nNextPlayer;  // TODO move to Judger

	xo::player::CPlayer* mpPlayerX;
	xo::player::CPlayer* mpPlayer0;
};


} // namespace player
} // namespace xo

#endif // xo_game_hpp
