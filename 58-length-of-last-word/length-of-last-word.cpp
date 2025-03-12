class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = s.size();
        while(s[last-1]==' ')
        {
            last--;
        }
        int count=0;
        for(int i=last-1; i>=0; i--)
        {
            if(s[i]==' ')
            {
               break; 
            }
            count++;
            
        }
        return count;
        
    }
};