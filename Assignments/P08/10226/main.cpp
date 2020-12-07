#include<cstdio>
#include<map>
#include<iostream>
#include<string>
using namespace std;
int testcases,total;
string current_input;
map<string,int> tree_map;
map<string,int>::iterator it;



int main()
{


    scanf("%d\n",&testcases);

    while(testcases--)
    {
        total=0;
        tree_map.clear();


        while(true)
        {
            getline(cin,current_input);

            if(current_input[0]=='\0'){
                break;
            }

            total++;

            tree_map[current_input]++;
        }


        for(it=tree_map.begin();it!=tree_map.end();it++)
        {
            double answer=(it->second)*100.0/total;
            printf("%s %.4lf\n",it->first.c_str(),answer);
        }


        if(testcases)
            puts("");

    }


    return 0;
}