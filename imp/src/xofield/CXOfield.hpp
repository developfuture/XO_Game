#ifndef xo_xofield_hpp
#define xo_xofield_hpp

namespace xo {
namespace xofield {
	
	
class CXOfield
{
public:
    
    CXOfield(/*CGame game, CBrain brain, Name, Simbol {"X" "O"} */);
    ~CXOfield();
    
	class CRow {
         friend class CXOfield;
     public:
         char& operator[](int col)
         {
			cout<<"CRow  row= "<<parent->mRow-1<<" col= "<<col-1<<"\n";
			
			if(col > 0 && col < 4)
			{
			   return parent->fild[ (parent->mRow)-1 ][col-1];
			}
			else
			{
			   cout<<"\nERROR col = "<<col<<"\n";		
			}
         }

         CRow(CXOfield* parent_)
             :parent(parent_)
			 {}

         CXOfield* parent;
		 
        
     };
	 
	 
    void printField();
	
	CRow operator[](int col);
	// TODO bool isCompleted();
	
 
private:
   int mRow;
   vector<vector<char> > fild;
   CRow* mpRow;   
   

	
};


} // namespace xofield
} // namespace xo

#endif // xo_xofield_hpp