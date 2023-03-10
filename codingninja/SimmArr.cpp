#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
    unordered_map<int,int> mp;
    
    
    for(int i = 0; i<n; i++){
        mp[arr1[i]]++;
    }
    for(int i = 0; i<m; i++){
        mp[arr2[i]]++;
    }
    
    int count = 0;
    for(auto i:mp){
        if(i.second > 1){
            count++;
        }
    }
    pair<int,int> p(count,mp.size());
    
    return p;
}
