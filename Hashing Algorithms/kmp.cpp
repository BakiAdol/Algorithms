/*
*
* Algo ID : HAS-1-1
* Hashing Algorithm
* Implemented by Abdullahil Baki Adol on 29 Sept. 2019
* Title KMP(Knuth Morris Pratt) Algorithm
*
*/

void computeLpsArray(string pattern, int len, int *lps)
{
    int index=0;
    lps[0]=0;
    for(int i=1;i<len;)
    {
        if(pattern[index]==pattern[i])
        {
            lps[i]=index+1;
            index++;
            i++;
        }
        else
        {
            if(index) index=lps[index-1];
            else
            {
                lps[i]=index;
                i++;
            }
        }
    }
}
void kmp(string text, string pattern)
{
    int textLen = text.length();
    int patternLen = pattern.length();
    int lps[patternLen];
    computeLpsArray(pattern,patternLen,lps);
    int i=0,j=0;
    bool flag=true;
    while(i<textLen)
    {
        if(text[i]==pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j) j=lps[j-1];
            else i++;
        }
        if(j==patternLen)
        {
            cout << "Substring found in index " << i-patternLen << endl;
            flag=false;
        }
    }
    if(flag) cout << "Substring not found!" << endl;
}

