class Solution {
public:
    void reverseString(vector<char>& s) {
        int x=s.size()-1;
        int p=x;
        for(int i=0;i<=x;i++){
          if(i<p){
            int temp=s[i];
            s[i]=s[p];
            s[p]=temp;
            p--;
          }
          else{
            break;
          }
        }
    }
};
