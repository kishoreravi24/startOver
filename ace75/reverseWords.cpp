#include<sstream>
class Solution {
public:
    string reverseWords(string s) {
        std::istringstream iss(s);
        std::vector<std::string> words;
        while(iss>>s){
            words.push_back(s);
        }
        std::reverse(words.begin(),words.end());
        std::stringstream reversed;
        for(const auto &word:words){
            reversed << word <<" ";
        }
        std::string result = reversed.str();
        result.pop_back();
        return result;
    }
};

/*
Things to note, we are using the stringstream i.e sstream
istringstream is for input and stringstream is for the output purpose
then why reversed.str() mean we need to convert the stringstream object to string part
*/
