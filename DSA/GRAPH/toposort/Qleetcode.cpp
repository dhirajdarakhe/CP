// https://leetcode.com/problems/course-schedule-ii

const int N = 1e4+7;
vector<int> g[N];
int vis1[N];
int vis2[N];
int mark[N];
stack<int> st;
class Solution {
public:
     bool cylceDetection(int start){
         vis1[start] = 1;
         mark[start] = 1;
          for(auto child :  g[start]){
              if(vis1[child] == 0){
                   if(cylceDetection(child) == true){
                       return true;
                   }
              }
              else if(vis1[child] == 1 && mark[child] == 1){
                  return true;
              }
          }
        mark[start] = 0;
        return false;
    }
    void Toposort(int i){
         vis2[i] = 1; 
         for(auto child : g[i]) if(!vis2[child]) Toposort(child);
         st.push(i);
      }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> v1;
           for(int i = 0; i <= numCourses ; ++i){
            g[i].clear();
            vis1[i] = 0;
            mark[i] = 0;
            vis2[i] = 0;  
       }
         for(int i = 0; i < prerequisites.size() ; ++i){
             int v11 = prerequisites[i][1];
             int v12 = prerequisites[i][0];
             if(v11 == v12) return v1;
             g[v11].push_back(v12);
         }
      for(int i = 0; i <= numCourses ; ++i){
        if(!vis1[i]) if(cylceDetection(i)) return v1;
      }
    while(!st.empty()) st.pop();
      for(int i = 0; i < numCourses ; ++i){
          if(!vis2[i])  Toposort(i);
      }
    while(!st.empty()){
        v1.push_back(st.top());
        st.pop();
    }
        return v1;
        
    }
};
