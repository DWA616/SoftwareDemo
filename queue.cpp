#include <stack>
#include <string>

class Queue{
    public:
        Queue();
        ~Queue();
        void push(std::string s);
        void pop();
        std::string front() const;
        bool empty() const;
        int size() const;

    private:
        int count;
        std::stack<std::string> s1;
        std::stack<std::string> s2;
};