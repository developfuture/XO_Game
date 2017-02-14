
#include "CXOfield.hpp"

namespace xo {
namespace xofield {
	
const char* logPrefix = "CXOfield"; 	
	
CXOfield::CXOfield()
:mpRow(0)
{
	cout<<"CXOfieldis created\n";
	
	mpRow = new CRow(this); 
	
	//TODO initialization
	vector<char> r1; //  = {'q','w','e'};
	r1.push_back('1'); r1.push_back('2'); r1.push_back('3');
	fild.push_back(r1);
	
	vector<char> r2; 
	r2.push_back('4'); r2.push_back('5'); r2.push_back('6');
	fild.push_back(r2);
	
	vector<char> r3; 
	r3.push_back('7'); r3.push_back('8'); r3.push_back('9');
	fild.push_back(r3);
	
}

CXOfield::~CXOfield()
{
	
}
    
void CXOfield::printField()
{
	
}

CXOfield::CRow CXOfield::operator[](int row)
{
	cout<<"CXOfield::operator[] row = "<<row<<"\n";
	
	if(row > 0 && row < 4)
	{
	   cout<<"CXOfield: returning mpRow";
	   mRow = row;
	   return *mpRow;
	}
	else
	{
       cout<<"\nERROR row = "<<row<<"\n";
		
	}

}

// vector<char>& CXOfield::operator[](int row)
// {
	// cout<<"CXOfield::operator[]\n";
	
	// if(row > 0 && row < 3)
	// {
	   // cout<<"row = "<<row<<"process "<<row-1<<" row \n";
	   // return 	fild[row-1];
	
	// }
	// else
	// {
       // cout<<"\nERROR row = "<<row<<"\n";
		
	// }
	

// }



} // namespace xofield
} // namespace xo