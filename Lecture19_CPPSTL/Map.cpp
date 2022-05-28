 #include<iostream>
 #include<map>

using namespace std;

int main(){

map<int,string> m;

m[1]="Love";
m[2]="Babbar";
m[3]="Kumar";

m.insert({12,"Bheem"});

cout << "Before Erase " << endl;

for(auto i : m)
  cout << i.first << "  " << i.second << endl;

  cout << "After Eraseing Key 12 " << endl;
  m.erase(12);

for(auto i : m)
  cout << i.first << "  " << i.second << endl;

  cout << "Finding Key 3 " << m.count(3) << endl;

  auto it = m.find(2);
  for(auto i=it;i!=m.end();i++)
     cout << (*i).first << endl;




    return 0;
}