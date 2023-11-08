/*
https://www.hackerrank.com/challenges/attribute-parser/problem

12 10
<a value = "GoodVal">
<b value = "BadVal" size = "10">
<c height = "auto">
<d size = "3">
<e strength = "200%">
<f a1 = "1" a2 = "2" a3 = "3">
</f>
</e>
</d>
</c>
</b>
</a>
a.b.c.d.e.f~a1
a.b.f~a1
a.b~size
a.b.c.d.e.f~a2
a.b.c.d.e.f~a3
a.c~height
a.b.d.e~strength{-truncated-}
Expected Output
1
Not Found!
10
2
3
Not Found!
Not Found!
200%
Not Found!
3
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q;
    string curr="", attr_name;
    map<string , string> m;
    cin >> n>>q;
    cin.ignore(); 
    
    for(int i=0;i<n;i++)
    {
        string line, tag, extract;
        getline(cin, line);
        stringstream ss(line);
        
        while(getline (ss,extract,' '))
        {
            if(extract[0]=='<')
            {
                if(extract[1]!='/')
                {
                    tag=extract.substr(1);
                    if(tag[tag.length()-1]=='>')
                    {
                        tag.pop_back();
                    }
                    if(curr.size()>0)
                    {
                        curr+="."+tag;
                    }
                    else {
                    curr=tag;
                    }
                }
                else
                {
                    tag=extract.substr(2,(extract.find('>')-2));
                    size_t pos=curr.find("."+tag);
                    if(pos!=string::npos)
                    {
                        curr=curr.substr(0, pos);
                    }
                    else
                    {
                        curr="";
                    }
                }
            }
            else if(extract[0]=='"') 
            {
                size_t pos=extract.find_last_of('"');
                string attr_value = extract.substr(1, pos-1);
                
                m[attr_name]= attr_value;
            }
            else
            {
                if(extract!="=")
                {
                    attr_name=curr+"~"+extract;
                }    
            }
        }
    }
    
    string query;
    for(int i=0;i<q;i++)
    {
        getline(cin, query);
        map<string, string>::iterator itr=m.find(query);
        if(itr!=m.end())
        {
            cout << itr->second<<endl;
        }
        else 
        {
            cout<<"Not Found!"<<endl;
        }
    }
    return 0;
}
