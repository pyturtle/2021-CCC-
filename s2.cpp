#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, vector<string>> together;
    unordered_map<string, vector<string>> NotTogether;
    int x = 0, y = 0, z = 0, problems =0;
    cin >> x;
    string name,friendy,notFriendly;
    for(int i = 0; i < x; i++){
        cin >> name;
        cin >> friendy;
        together[name].push_back(friendy);
    }
    cin >> y;
    for(int i = 0; i < y; i++){
        cin >> name;
        cin >> notFriendly;
        NotTogether[name].push_back(notFriendly);
    }
    cin >> z;
    for(int i = 0; i < z; i++){
        string member1,member2,member3;
        cin >> member1 >> member2 >> member3;
        for(int j = 0; j < NotTogether[member1].size(); j++){
            if(NotTogether[member1][j] == member2){
                problems += 1;
            }
            if(NotTogether[member1][j] == member3){
                problems += 1;
            }
        }
        for(int j = 0; j < NotTogether[member2].size(); j++){
            if(NotTogether[member2][j] == member3){
                problems += 1;
            }
            if(NotTogether[member2][j] == member1){
                problems += 1;
            }
        }
        for(int j = 0; j < NotTogether[member3].size(); j++){
            if(NotTogether[member3][j] == member1){
                problems += 1;
            }
            if(NotTogether[member3][j] == member2){
                problems += 1;
            }
        }

        for (string member : together[member1]){
            if(member != member2 and member != member3){
                problems += 1;
            }
        }
        for (string member : together[member2]){
            if(member != member1 and member != member3){
                problems += 1;
            }
        }
        for (string member : together[member3]){
            if(member != member2 and member != member1){
                problems += 1;
            }
        }
        

    }
    cout << problems;

    



}