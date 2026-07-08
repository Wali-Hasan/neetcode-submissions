class MinStack {
public:
    vector<int> min;
    vector<int> s;
    MinStack() {
   
    }
    
    void push(int val) {
        s.push_back(val);
        if (min.empty()) {
            min.push_back(val);
        } else {
            min.push_back(std::min(val, min.back()));
        }
        
    }
    
    void pop() {
        int val = s.back();
        min.pop_back();
        s.pop_back();
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        return min.back(); 
    }
};
