class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        queue<int> q;
        int remainingStudents = students.size(); // Track remaining students

        // Push all students into the queue
        for (int student : students) {
            q.push(student);
        }

        // Process each sandwich
        for (int sandwich : sandwiches) {
            if (q.empty()) {
                break; // No more students to process
            }

            bool foundSandwich = false;

            // Process students in the queue until we find the matching sandwich or reach the end
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                int student = q.front();
                q.pop();

                if (student == sandwich) {
                    foundSandwich = true;
                    remainingStudents--; // Decrement count of remaining students
                    break; // Found the matching sandwich
                } else {
                    q.push(student); // Put the student back in the queue
                }
            }

            if (!foundSandwich) {
                break; // If sandwich not found, stop processing
            }
        }

        return remainingStudents; 
    }
};