#include <iostream>
#include <deque>
#include <vector>
using namespace std;






int main()
{
    int N;


    deque<int> queue;
    vector<int> Stack;

    int value, index;


    while(cin >> N && N)
    {
        while(1)
        {
            queue.clear();
            stack.clear();

            cin >> value;


            if(value == 0)
                break;


            queue.push_back(value);


            for(index = 1 ; index < N ;++index)
            {
                cin >> value;
                queue.push_back(value);
            }



            for(index = 1 ; index <= N;++index)
            {
                stack.push_back(index);

                while(!stack.empty() && queue.front() == stack.back())
                {
                    queue.pop_front();
                    stack.pop_back();
                }
            }

            cout << (stack.empty() ? "Yes" : "No") << endl;
        }

        cout << endl;
    }
    return 0;
}