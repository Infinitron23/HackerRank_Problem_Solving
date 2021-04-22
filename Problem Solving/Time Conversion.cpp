#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
     int hour = stoi(s.substr(0,2));
    string zone = s.substr(8,10);
    string new_time;
    if(zone == "AM"){
        if(hour == 12)
            new_time = "00" + s.substr(2,6);
        else
            new_time = s.substr(0,8);
    }
    else{
        if(hour == 12)
            new_time = s.substr(0,8);
        else
            new_time = to_string(hour+12) + s.substr(2,6);
    }
    return new_time;

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
