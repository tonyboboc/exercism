#include <string>
#include <vector>

namespace election {

// The election result struct is already created for you:

struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};
    
};
int vote_count(ElectionResult &xyz){
    return xyz.votes;
}
void increment_vote_count(ElectionResult &xyz, int x){
    xyz.votes=xyz.votes+x;
}
ElectionResult& determine_result(std::vector<ElectionResult>& xyz){
    int size=xyz.size();
    int j=0;
     ElectionResult x=xyz[0];
    for(int i=1;i<size;i++){
        ElectionResult y=xyz[i];
        if(x.votes<y.votes){
            x=y;
            j=i;
        }
    }
    xyz[j].name="President "+xyz[j].name;
    return xyz[j];
    
}

// TODO: Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.


// TODO: Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.


// TODO: Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.


}  // namespace election