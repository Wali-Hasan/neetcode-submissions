class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> s{};

        for (const auto& str : tokens) {
            if (str == "+") {
                int sec = (s.top());
                s.pop();
                int first = s.top();
                s.pop();
                s.push(first+sec);
            } else if (str == "-") {
                int sec = s.top();
                s.pop();
                int first = s.top();
                s.pop();
                s.push(first-sec);
            } else if (str == "*") {
                int sec = (s.top());
                s.pop();
                int first = s.top();
                s.pop();
                s.push(first*sec);
            } else if (str == "/") {
                int sec = s.top();
                s.pop();
                int first = s.top();
                s.pop();
                
                s.push(first/sec);
            } else {
                s.push(stoi(str));
            }
        } 
        return s.top();
    }
};
