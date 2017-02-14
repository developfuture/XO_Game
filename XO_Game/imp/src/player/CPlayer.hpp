#ifndef xo_player_hpp
#define xo_player_hpp

#include "../game/CGame.hpp"

class game::CGame;

namespace xo {
namespace player {


class CPlayer
{
public:
public:

   CPlayer( xo::game::CGame* game, xo::xofield::CXOfield* field, char symbol );
   ~CPlayer();

   void make_a_move();

private:
   xo::game::CGame* mpGame;
   char mOunSimbol;
   xo::xofield::CXOfield* mpField;

};


} // namespace player
} // namespace xo

#endif // xo_player_hpp
