//TODO #include <ctime>

#include "CPlayer.hpp"

namespace xo {
namespace player {



CPlayer::CPlayer(xo::game::CGame* game, xo::xofield::CXOfield* field, char symbol)
:mpGame(game)
,mOunSimbol(symbol)
,mpField(field)
{
	cout<<"CPlayer is created\n";
	// TODO screen->print_msg()
}

CPlayer::~CPlayer()
{

}


void CPlayer::make_a_move()
{
	// TODO NEED Brain

	cout<<"CPlayer::make_a_move()  mOunSimbol = "<<mOunSimbol<<"\n";
	//PRINT("CPlayer::make_a_move()");

	while(true)
	{
		//std::srand(std::time(0))
		//int randomValue = std::rand();
		//cout<<"randomValue= "<<randomValue<<"\n";

		int pos_row; // =2; // random(1,3);
		int pos_col; // =1; // random(1,3);

		cout<<"--> Insert row: "; cin>>pos_row;
		cout<<"--> Insert col: "; cin>>pos_col;

		 if(pos_row > 0 && pos_row < 4 && pos_col > 0 && pos_col< 4)
		 {
			cout<<"position is correct\n";

			if( ( (*mpField)[pos_row][pos_col] != 'X') && ( (*mpField)[pos_row][pos_col] != '0') )
			{
			   (*mpField)[pos_row][pos_row] = mOunSimbol;
				cout<<"position "<<pos_row<<" : "<<pos_col<<" was set as "<<mOunSimbol<<"\n";

            if(mpGame)
            {
				   mpGame->doNextPlayerMove();
				}
				else
				{
					cout<<"ERROR: mpGame is NULL\n";
				}

				break;
			}

			else
			{
				cout<<"position is already taken\n";
			}

		 }
		 else
		 {
			 cout<<"ERROR wrong position\n";

		 }
    }

}



} // namespace player
} // namespace xo
