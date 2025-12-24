dint a[100];
vector<int> v;


vector<int> v;
v.push_back(3);
v.push_back(5);
int x=v[0];
int n=v.size();


//遍历
for( int x:v){
  cout<<x<<"";
}
for(int i=0;i<v.size();i++)
{   cout<<v[i];
}


vector<int>a(n);
for(int i=0;i<n;i++)
  cin>>a[i];


vector<int>ans;
ans.push_back(x);


vector<int> v;
v[0]=5;//这个是错的
v.push_back(5);This is correct


v.clear();


vector<int> v = {1, 2, 3};
v.clear();
cout << v.size();
v.push_back(10);




char s[100];
scanf("%s", s);


string s;
cin >> s;


string s;
cin >> s;
int n = s.size();
char c = s[0];
s += 'a';
s += "abc";
for (char c : s)
{
}


for (int i = 0; i < s.size(); i++)
cout << s[i];




string t = substr(pos, len);


int p=s.find("abc");

if(s1==s2)
{}
if(s1<s2)
{}

bool ok=true;
int l=0,r=s.size()-1;
while(l<r){
if(s[l]!=s[r])
  ok=false;
  break;
}
l++,r--;
}


string s="abc"
printf("%s",s);//错
printf("%s",s.c_str());
string s="abc";



pair<int,int> p={3,5};
struct{
int first;
int second;
};

pair<int,int>p;
p.first=3;
p.second=5;

pair<int,int>p={3,5};

vector<pair<int,int>>v;
v.push_back({3,5});
v.push_back({1,7});
sort(v.begin(),v.end());


vector<pair<int,int>> a;
for(int i=0;i<n;i++)
{
a.push_back({value[i],i});
}
sort(a.begin(),a.end());

//按值排序下标
vector<pair<int,int>>a;
for(int i=0;i<n;i++){
a.push_back({value[i],i});
}
sort(a.begin(),a.end());

vector<pair<int,int>> v={{2,5},{1,3},{2,1}};
sort(v.begin,v.end());
v[0]=(1,3);


sort(v.begin(),v.end(),[](auto &a,auto &b){
  return a.second<b.second;
});
//自定义排序，用second排序
sort(v.begin(),v.end(),[](auto &a,auto &b){
return a.second<b.second;
});

//按first 排序
sort(v.begin(),v.end(),[](auto &a,auto &b){
return a.first<b.first;
});

//按first升序，second降序
sort(v.begin(),v.end(),[](auto &a,auto &b){
if(a.first!=b.first)
  return a.first<b.first;
return a.second >b.second;
});

//按字符长度升序排序
sort(v.begin(),v.end(),[](auto &a,auto &b){
return a.size()<b.size();
});

//一定要记住的原则
// 严格弱序
return a.first<=b.first ❌

// example
vector<int> v={3,1,4,2};
请用sort+lambda降序排序
sort(v.begin(),v.end(),[](auto &a,auto &b){      //这里用(const auto &a, const auto &b)更好
return a>b;
});

unordered_map<int,int> hxb;

unordered_map //是哈希表，查找/插入 都是O(1),元素顺序是乱的
map           //红黑树，查找/插入 都是Olog(n)元素按照key升序排列

unordered_map<int,int> um;
u[3]=30;
u[1]=10;
u[2]=20;
for(auto &p :um)
  cout<<p.first<<" ";
//可能输出  3 1 2
map<int,int> m;
m[3]=30;
m[1]=10;
m[2]=20;
for(auto &p:m)
  cout<<p.first<<" ";
//一定是输出的1 2 3
