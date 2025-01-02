class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>ans(words.size());
        for(int i=0;i<words.size();i++){
            int n=words[i].size();
            if((words[i][0]=='a'||words[i][0]=='e'||words[i][0]=='i'||words[i][0]=='o'||words[i][0]=='u')&&(words[i][n-1]=='a'||words[i][n-1]=='e'||words[i][n-1]=='i'||words[i][n-1]=='o'||words[i][n-1]=='u')){
                if(i==0){
                    ans[i]=1;
                }
                else
                ans[i]=ans[i-1]+1;
            }

            else{
                if(i==0)
                ans[i]=0;
                else
                ans[i]=ans[i-1];
            }
        }
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
        vector<int>v(queries.size());
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]-1>=0)
            {
                v[i]=ans[queries[i][1]]-ans[queries[i][0]-1];
            }
            else
             v[i]=ans[queries[i][1]];       
            }
            return v;
    }
};