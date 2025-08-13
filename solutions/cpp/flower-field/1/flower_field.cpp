#include "flower_field.h"

namespace flower_field {

std::vector<std::string> annotate( std::vector<std::string> board){
    std::string padding;
    if (board.empty()){
        return {};
    }
    for(std::string & s:board){
        s.push_back(' ');
        s.insert(s.begin(),' ');
    }
    for(std::size_t i=0;i<board[0].size();i++){
        padding.push_back(' ');
    }
    board.push_back(padding);
    board.insert(board.begin(),padding);
    std::vector<std::string> returns;
    for(std::size_t i=1;i<board.size()-1;i++){
        std::string add;
        for(std::size_t j=1;j<board[i].size()-1;j++){
            int sum=0;
            if(board[i][j]=='*'){add.push_back('*');continue;}
            if(board[i-1][j-1]=='*'){
                sum++;
            }
            if(board[i-1][j]=='*'){
                sum++;
            }
            if(board[i-1][j+1]=='*'){
                sum++;
            }
            if(board[i][j-1]=='*'){
                sum++;
            }
            if(board[i][j+1]=='*'){
                sum++;
            }
            if(board[i+1][j-1]=='*'){
                sum++;
            }
            if(board[i+1][j]=='*'){
                sum++;
            }
            if(board[i+1][j+1]=='*'){
                sum++;
            }
            if(sum==0){
                add.push_back(' ');
            }
            else{add.push_back(static_cast<char>('0' + sum));}
             
        }
        returns.push_back(add);
         
    }
    return returns;
}

}  // namespace flower_field
