#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'crosswordPuzzle' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY crossword
 *  2. STRING words
 */
 bool canPlaceH(vector<string>&grid,string word,int r,int c)
 {
     if (c + word.size() > 10) return false;

    if (c > 0 && grid[r][c-1] != '+') return false;
    if (c + word.size() < 10 && grid[r][c + word.size()] != '+') return false;

    for (int i = 0; i < word.size(); i++) {
        if (grid[r][c+i] == '-' || grid[r][c+i] == word[i])
            continue;
        else
            return false;
    }
    return true;
 }
 bool canPlaceV(vector<string>&grid,string word,int r,int c)
 {
      if (r + word.size() > 10) return false;

    if (r > 0 && grid[r-1][c] != '+') return false;
    if (r + word.size() < 10 && grid[r + word.size()][c] != '+') return false;

    for (int i = 0; i < word.size(); i++) {
        if (grid[r+i][c] == '-' || grid[r+i][c] == word[i])
            continue;
        else
            return false;
    }
    return true;
 }
 vector<bool> placeH(vector<string>&grid,string word,int r ,int c)
 {
     vector<bool> placed(word.size(), false);

    for (int i = 0; i < word.size(); i++) {
        if (grid[r][c+i] == '-') {
            grid[r][c+i] = word[i];
            placed[i] = true;
        }
    }
    return placed;
 }
 vector<bool> placeV(vector<string>&grid,string word,int r ,int c)
 {
     vector<bool> placed(word.size(), false);

    for (int i = 0; i < word.size(); i++) {
        if (grid[r+i][c] == '-') {
            grid[r+i][c] = word[i];
            placed[i] = true;
        }
    }
    return placed;
 } 
 void unplaceH(vector<string>&grid,int r,int c,vector<bool>&placed)
 {
     for (int i = 0; i < placed.size(); i++) {
        if (placed[i]) grid[r][c+i] = '-';
    }
 }
  void unplaceV(vector<string>&grid,int r,int c,vector<bool>&placed)
 {
       for (int i = 0; i < placed.size(); i++) {
        if (placed[i]) grid[r+i][c] = '-';
    }
 }
bool solve(vector<string>&grid,vector<string>&words,int idx)
{
    if(idx==words.size())return true ;
    string word=words[idx];
    for(int r=0;r<grid.size();r++)
    {
        for(int c=0;c<grid.size();c++)
        {
            if(canPlaceH(grid,word,r,c))
            {
                vector<bool>placed=placeH(grid,word,r,c);
                if(solve(grid,words,idx+1))return true;
                unplaceH(grid,r,c,placed);
            }
            if(canPlaceV(grid,word,r,c))
            {
                vector<bool>placed=placeV(grid,word,r,c);
                if(solve(grid,words,idx+1))return true;
                unplaceV(grid,r,c,placed);
            }
        }
    }
    return false;
}
vector<string> crosswordPuzzle(vector<string> crossword, string s) {
    vector<string>words;
    string temp="";
    for(char c:s)
    {
        
        if(c==';')
        {
            words.push_back(temp);
            temp="";
        }
        else temp+=c;
    }
    words.push_back(temp);
    
    solve(crossword,words,0);
    return crossword;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<string> crossword(10);

    for (int i = 0; i < 10; i++) {
        string crossword_item;
        getline(cin, crossword_item);

        crossword[i] = crossword_item;
    }

    string words;
    getline(cin, words);

    vector<string> result = crosswordPuzzle(crossword, words);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
 
