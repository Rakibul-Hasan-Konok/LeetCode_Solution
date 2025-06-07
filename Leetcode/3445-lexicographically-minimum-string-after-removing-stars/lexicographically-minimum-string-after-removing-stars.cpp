class Solution {
public:
    typedef pair<char,int> pr;
    struct comp {
        bool operator()(pr&p1,pr&p2)
        {
            if(p1.first == p2.first)
            {
                return p1.second < p2.second;
            }
            return p1.first > p2.first;
        }
    };
    string clearStars(string s) {
        int size = s.length();
        priority_queue<pr,vector<pr>,comp> pq;
        vector<char>v;
        for(auto i:s)
        {
            v.push_back(i);
        }
        for(int i = 0;i<size;i++)
        {
            if(s[i] == '*')
            {
                pr temp = pq.top();
                pq.pop();
                v[temp.second] = '$';
            }
            else
            {
                pq.push({s[i],i});
            }
        }
        string str = "";
        for(auto ch:v)
        {
            if(ch >= 'a' && ch <= 'z')
            {
                str += ch;
            }
        }
        return str;
    }
};