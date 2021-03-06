#include "..\Header_Files\p_zl.h"
#include "..\Header_Files\p_block.h"
#include "..\Header_Files\block_unit.h"
#include "..\Header_Files\screen.h"
    
P_ZL::P_ZL(): 
    P_Block::P_Block(4, '@')
{
    p_vec.push_back(new Block_Unit(Screen::SCREEN_WIDTH/2, 0, body));
    p_vec.push_back(new Block_Unit(Screen::SCREEN_WIDTH/2, 1, body));
    p_vec.push_back(new Block_Unit(Screen::SCREEN_WIDTH/2 - 1, 0, body));
    p_vec.push_back(new Block_Unit(Screen::SCREEN_WIDTH/2 + 1, 1, body));
}

P_ZL::~P_ZL(){}
