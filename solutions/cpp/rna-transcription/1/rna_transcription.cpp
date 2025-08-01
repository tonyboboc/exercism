#include "rna_transcription.h"

namespace rna_transcription {
std::string to_rna(std::string s){
        for(std::string::iterator i=s.begin();i!=s.end();i++){
            if(*i=='G'){
                *i='C';
            }
            else if(*i=='C'){
                *i='G';
            }
            else if(*i=='T'){
                *i='A';
            }
            else if(*i=='A'){
                *i='U';
            }
        }
        return s;
    }
char to_rna(char s){
        
             if(s=='G'){
               s='C';
            }
            else if(s=='C'){
                s='G';
            }
            else if(s=='T'){
                s='A';
            }
            else if(s=='A'){
                s='U';
            }
        
        return s;
    }
}
  // namespace rna_transcription
