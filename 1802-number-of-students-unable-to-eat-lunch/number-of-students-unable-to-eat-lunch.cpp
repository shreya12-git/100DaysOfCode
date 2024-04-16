class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        // queue<int> q;
        // int remainingStudents = students.size(); // Track remaining students

        // // Push all students into the queue
        // for (int student : students) {
        //     q.push(student);
        // }

        // // Process each sandwich
        // for (int sandwich : sandwiches) {
        //     if (q.empty()) {
        //         break; // No more students to process
        //     }

        //     bool foundSandwich = false;

        //     // Process students in the queue until we find the matching sandwich or reach the end
        //     int size = q.size();
        //     for (int i = 0; i < size; ++i) {
        //         int student = q.front();
        //         q.pop();

        //         if (student == sandwich) {
        //             foundSandwich = true;
        //             remainingStudents--; // Decrement count of remaining students
        //             break; // Found the matching sandwich
        //         } else {
        //             q.push(student); // Put the student back in the queue
        //         }
        //     }

        //     if (!foundSandwich) {
        //         break; // If sandwich not found, stop processing
        //     }
        // }

        // return remainingStudents; 
       int count0=0;
       int count1=0;
        for(auto it:students){
            if(it==0){
                count0++;
            }
            if(it==1){
                count1++;
            }
        }
        for(int i=0;i<sandwiches.size();i++){
            if(sandwiches[i]==0){
                count0--;
            }
            if(sandwiches[i]==1){
                count1--;
            }
            if(count0==-1||count1==-1){
                return sandwiches.size()-i;
            }
        }
        return 0;
    }
};