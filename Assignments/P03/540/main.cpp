#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>


//ref https://www.itread01.com/content/1549209094.html
using namespace std;

int main()
{
    int t,scenarioNumber=1;

    while(cin>>t&&t)
    {
        map<int,int> Teams;//hash map that maps team and the value that they are associated with 

        cout<<"Scenario #"<<scenarioNumber++<<endl;

        for(int i=1;i<=t;i++)
        {
            int n,p;
            cin>>n;
            while(n--)
            {
                cin>>p;
                Teams[p]=i;
            }
        }

        queue<int> teamA,teamB[1000];
    


        while(true)
        {
            string command;
            cin>>command;
            if(command[0]=='S')
                break;
            else if(command[0]=='E')
            {
                int x;
                cin>>x;
                int id = Teams[x];
                if(teamB[id].empty())
                    teamA.push(id);
                teamB[id].push(x);
            }
            else if(command[0]=='D')
            {
                int value = teamA.front();
                cout<<teamB[value].front()<<endl;
                teamB[value].pop();

                if(teamB[value].empty())
                    teamA.pop();
            }
        }

        cout<<endl;
    }
    return 0;
}