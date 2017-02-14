#include "CGame.hpp"
//#include "../player/CPlayer.hpp"
//#include "../xofield/CXOfield.cpp"
//#include "../player/CPlayer.cpp"

namespace xo {
namespace game {



CGame::CGame( /*xo::xofield::CXOfield field*, CDjudger judjer*/ )
:mpField(0)
,nNextPlayer('X')
,mpPlayerX(0)
,mpPlayer0(0)
{
	cout<<"CGame is created\n";
	// TODO screen->print_msg()

	mpField = new xo::xofield::CXOfield;

	mpPlayerX = new xo::player::CPlayer(this, mpField, 'X');
   mpPlayer0 = new xo::player::CPlayer(this, mpField, '0');


}

CGame::~CGame()
{

}




} // namespace game
} // namespace xo
