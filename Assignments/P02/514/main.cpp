#include <cstdio>
#include <iostream>
#include <stack>
#include <cstring>

//

using namespace std;

int main(){
    stack<int> stationA;

    int stationB[1000];
    int n;
    while(scanf("%d", &n), n){

        bool has_break = false;

        while(!has_break){
            
            // Create new instance of stationA
            stationA = stack<int>();

            //loop N times 
            for(int i = 0; i < n; i++){

                //Add numbers to stationB
                scanf("%d", &stationB[i]);

                //We brek if current station b value is equal to 0
                if(stationB[i] == 0){
                    has_break = true;
                    break;
                }
            }

            if(has_break){ 
                continue
                };

            int current_number = 1;

            bool is_correct = true;

            for(int i = 0; i < n; i++){

                while(current_number <= n && (stationA.empty() || stationA.top() != stationB[i])){
                    stationA.push(current_number);
                    current_number++;
                }
                if(stationA.top() == stationB[i]){
                    stationA.pop();
                    continue;
                }else{
                    is_correct = false;
                    break;
                }

            }
            cout<<(is_correct ? "Yes" : "No")<<endl;
        }
        cout<<endl;
    }
    return 0;
}