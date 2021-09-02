#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
   int size = s.length();
    if(s[size-2]=='A'){
        string hour = s.substr(0,2);
        int h = stoi(hour);
        if(h==12){
            string newh = "00";
            string newtime = newh.append(s.substr(2,6));
            return newtime;
        }
        else{
            return s.substr(0,size-2);
        }
    }
    else{
        string hour = s.substr(0,2);
        int h = stoi(hour);
        if(h==12){
            return s.substr(0,size-2);
        }
        else{
            h = h+12;
            string newh = to_string(h);
            string newtime = newh.append(s.substr(2,6));
            return newtime;
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


/*
Sample Input 
07:05:45PM

Sample Output 
19:05:45
*/
