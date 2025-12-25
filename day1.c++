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

// 只关心“有没有” “出现几次”  用underered_map
// 需要按key排序             用map
// 需求非常快(面试常见)       用unordered_map
// 区间/前驱/后继             用map/set

//unordered_map的三中访问方式
//自动创建
unordered_map <int,int> cnt;
cnt[5]++;
//count判断存在
if(cnt.count(5)){}
//find- 更底层
auto it=cnt.find(5);
if(it!=cnt.end()){
cout<<it->second;
}

unordered_map<int,int> cnt;
for(int x: a)
  cnt[x]++;

//新手最容易犯的错误❌
if(cnt[x]) { }

//正确
if(cnt.count(x)) { }
if(it!=cnt.end()) //说明找到了
// 第一空:说明还没找到这本书摆放的位置,意味着这个书架里没有这本书
// 第二空:说明,已经找到了摆放的位置,意味着有这本书

set<int>s;
s.insert(3);
s.insert(1);
s.insert(3);

s.insert(x);
s.erase(x);
s.count(x); //是否存在（0或者1）
auto it =s.find(x); //找位置（找不到也是end）
for(int x:s) cout<<x<<" ";

multiset<int>ms;
ms.insert(3);
ms.insert(3);
ms.insert(1);

unordered_map<int,int> // 计数（key--次数）
multiset<int> // 每次插入一个元素，保留重复（有序）


//删除一个“最大值”

auto it=prev(ms.end());//   end()就是最大的后面
ms.erase(it);
//删除一个指定值（只删一个）
auto it=ms.find(x);
if(it!=ms.end()) ms.erase(it);

ms.erase(x) //这个会直接删除所有等于x的元素
