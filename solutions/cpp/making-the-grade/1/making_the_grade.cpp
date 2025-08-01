#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> q;
    while(!student_scores.empty()){
        q.push_back(static_cast<int>((student_scores.front())));
        student_scores.erase(student_scores.begin());
    }
    
    return q;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    
    int k=0;
    while(!student_scores.empty()){
        if(student_scores.front()<=40){
            k++;
        }
        student_scores.erase(student_scores.begin());
    }
    return k;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    std::vector<int> q;
    while(!student_scores.empty()){
        if(student_scores.front()>=threshold){
            q.push_back(student_scores.front());
        }
        student_scores.erase(student_scores.begin());
    }
    return q;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    std::array<int,4> q;
    
    int z=((highest_score-40)/4);
    q[0]=41;
    for(int i=1;i<4;i++){
        if(i==1){
            if(highest_score%4==0){
                q[4-i]=highest_score-((z-1)*i);
            }
            else{
               q[4-i]=highest_score-((z)*i); 
            }
        }
        else{
            if(highest_score%4==0){
                q[4-i]=highest_score-((z-1)*i)-(1*(i-1));
            }
            else{q[4-i]=highest_score-((z-1)*i)-(1*(i));}
            
        }
    }
    return q;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> plm;
    
    int i=1;
    
    while(!student_names.empty()){
        plm.push_back(std::to_string(i)+". "+student_names.front()+": "+std::to_string((student_scores.front())));
        
        student_scores.erase(student_scores.begin());
        student_names.erase(student_names.begin());
        i++;
    }
    return plm;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string  perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::string plm;
    
    
    
    while(!student_names.empty()){
        if(student_scores.front()==100){
            plm=((student_names.front()));
            break;
        }
        
        
        student_scores.erase(student_scores.begin());
        student_names.erase(student_names.begin());
        
    }
    if(plm.empty()){
        return "";
    }
    return plm;
    
}
