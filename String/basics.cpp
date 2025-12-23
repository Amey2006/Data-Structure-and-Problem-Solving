#include<iostream>
using namespace std;
int main()
{
    string s="Hello World";
    string d="World !";
    // cout<<s+" "+d;

    // cin>>s;
    // cin.ignore();
    // getline(cin,d);
    // cout<<s<<endl;
    // cout<<d<<endl;

    // cout<<"length = "<<s.length()<<endl;
    // cout<<"empty = "<<s.empty()<<endl;
    // s.push_back('D');
    // cout<<"push back "<<s<<endl;
    // s.pop_back();
    // cout<<"pop back "<<s<<endl;
    // cout<<"substr "<<s.substr(1,3)<<endl;
    // cout<<"find lo "<<s.find("lo");
    // cout<<s.erase(1,3)<<endl;
    // cout<<s.append("xyz")<<endl;
    // cout<<s.insert(2,"abc")<<endl;
    // for(char &c:s)
    // {
    //     c=toupper(c);
    // }
    // cout<<s;
    // cout<<"Counting uppercase and lowercase letters in Hello World"<<endl;
    // int uppercase=0;
    // int lowercase=0;
    // int special=0;
    // for(char c:s)
    // {
    //     if(int(c)>=65 && int(c)<=90 ) uppercase++;
    //     else
    //     if(int(c)>=97 && int(c)<=122) lowercase++;
    //     else
    //     special++;
    // }
    // cout<<"Uppercase letters = "<<uppercase<<endl;
    // cout<<"Lowercase letters = "<<lowercase<<endl;
    // cout<<"Special characters = "<<special<<endl;
    s="hehlleoho";
    int index=0;
    bool visit[256]={false};
    cout<<"Before operation = "<<s<<endl;
    for(char &c:s)
    {
        if(!visit[c])
        {
            visit[c]=true;
            s[index]=c;
            index++;
        }

    }
    s.erase(index);
    cout<<"After operation = "<<s;
    return 0;
}