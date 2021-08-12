//
//  main.cpp
//  13_Depth_First_Search
//
//  Created by 세광 on 2021/08/12.
//

#include <iostream>
#include <vector>

using namespace std;

int number = 7;
int c[8];
vector<int> v[8];

void DFS(int x) {
    if (c[x]) return;
    c[x] = true;
    cout << x << ' ';
    for (int i = 0; i < v[x].size(); i++) {
        int y = v[x][i];
        DFS(y);
    }
}

int main() {
    // 1과 2 연결
    v[1].push_back(2);
    v[2].push_back(1);
    // 1과 3 연결
    v[1].push_back(3);
    v[3].push_back(1);
    // 2와 3 연결
    v[2].push_back(3);
    v[3].push_back(2);
    // 2와 4 연결
    v[2].push_back(4);
    v[4].push_back(2);
    // 2와 5 연결
    v[2].push_back(5);
    v[5].push_back(2);
    // 3과 6 연결
    v[3].push_back(6);
    v[6].push_back(3);
    // 3과 7 연결
    v[3].push_back(7);
    v[7].push_back(3);
    // 6과 7 연결
    v[6].push_back(7);
    v[7].push_back(6);
    
    DFS(1);
    cout << endl;
    return 0;
}
