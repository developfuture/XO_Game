#ifndef xo_game_hpp
#define xo_game_hpp

#include "../player/CPlayer.hpp"

namespace xo {
namespace game {
	
	
class CGame
{
public:
    
   CGame( /*CGame game, CBrain brain, Name,*/ );
   ~CGame();
    
   //void make_a_move(xo::xofield::CXOfield* field);
 
private:
   char mOunSimbol;
 
    xo::xofield::CXOfield* mpField;
	char nNextPlayer;
	
	xo::player::CPlayer* mpPlayerX;
	xo::player::CPlayer* mpPlayer0;
};


} // namespace player
} // namespace xo

#endif // xo_game_hpp