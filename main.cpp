//
// Created by Kylian Lee on 2021/06/22.
//

#include <iostream>
#include <map>

using namespace std;

int solution(map<int, int> m);

int main() {
  int caseNum;
  cin >> caseNum;
  for (int i = 0; i < caseNum; ++i) {
    map<int,int> m;
    int n;
    cin >> n;
    auto it = m.find(n);
    if(it != m.end())
      m[n] = 1;
    else
      m[n]++;
    cout << solution(m) << endl;
  }
  return 0;
}

int solution(map<int, int> m){

}
