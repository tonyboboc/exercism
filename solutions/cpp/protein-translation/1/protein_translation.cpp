#include "protein_translation.h"

namespace protein_translation {
      std::vector<std::string> proteins (std::string s){
     std::vector<std::string> v;
     std::string q;
     while (!s.empty()){
         q=s.substr(0,3);
         if(q=="AUG"){
             v.push_back("Methionine");
         }
         else if(q=="UUU"||q=="UUC"){
             v.push_back("Phenylalanine");
         }
         else if(q=="UUA"||q=="UUG"){
             v.push_back("Leucine");
         }
         else if(q=="UCU"||q=="UCC"||q=="UCA"||q=="UCG"){
             v.push_back("Serine");
         }
         else if(q=="UAU"||q=="UAC"){
             v.push_back("Tyrosine");
         }
         else if(q=="UGU"||q=="UGC"){
             v.push_back("Cysteine");
         }
         else if (q=="UGG"){
             v.push_back("Tryptophan");
         }
         else if(q=="UAA"||q=="UAG"||q=="UGA"){
             break;
         }
         s.erase(0,3);
     }
     return v;
     
 }
}  // namespace protein_translation
