#include <bits/stdc++.h>
using namespace std;

map<string,int> node_positions;




vector<int> BFS(string root){
    
    //Vector that holds the current Tree.
    vector<int> current_tree;

    //Queue for bfs 
    queue <string> queue;

    //Start with the root 
    queue.push(root);

    //We will start with an empty node generally 
    //each time we process a node we tag on l and r to the node
    //get the correct directions 
    // "" , r ,l , ll , rr , ....
    string current_direction = root;

    int current_queue_size = 1;


    while(!queue.empty()){
        
        current_queue_size = queue.size();

        while (current_queue_size--){
            
            current_direction = queue.front();
            queue.pop();


            //if the current direction was found in the map, we process the next 
            //set of directions.
            if (node_positions.find(current_direction) != node_positions.end()){

                queue.push(current_direction+"L");
                queue.push(current_direction+"R");

                //add to the list of node values, we keep it in level order 
                //due to bfs 

                current_tree.push_back(node_positions[current_direction]);
            }
        }
    }
    return current_tree;
}



int main(){

  string current_char;


    while (cin >> current_char){


        if (current_char != "()"){


            int index;

            string direction,node_value = "";

            
            for (index = 1; current_char[index] != ','; index++){ 
              node_value += current_char[index];
              }

            direction = current_char.substr(index+1,current_char.length()-index-2);
              
            //if current position not in the map, add it to it with the current value.
            if (node_positions.find(direction) == node_positions.end()){

                //stoi converts a string number to it's integer value.
                node_positions[direction] = stoi(node_value);   
            }
            else{
                // we just add nothing.
                node_positions["DONOTHING"] = 0;
            }

        } 
        else {

            //When we hit the end of a test case 
            //We BFS and process all the nodes in level order fahsion
            vector<int> result = BFS("");

            //if the size of the result arr is equal to our map the tree is complete
            if (result.size() == node_positions.size()){
                cout << result[0];
                for (int current_char = 1; current_char < result.size(); current_char++) cout << " " << result[current_char];
            } 
            else {
                cout << "not complete";
            }

            cout << endl;
            node_positions.clear();
        }
    }
    return 0;
}