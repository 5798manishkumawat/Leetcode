class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        sort(A.begin(),A.end());
        string ans="";
      string st="";
        do{
            if((A[0]<2 ||(A[0]==2 && A[1]<4))&& A[2]<6) 
            {
                st=to_string(A[0])+to_string(A[1])+":"+to_string(A[2])+to_string(A[3]);
                if(ans<st)
                    ans=st;
            }
        }while(next_permutation(A.begin(),A.end()));
        return ans;
    }
};