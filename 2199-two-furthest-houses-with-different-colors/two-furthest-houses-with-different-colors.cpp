class Solution {
public:
    int maxDistance(vector<int>& colors) {
     int maxDistance = INT_MIN;

     int n = colors.size();
     
     int st = 0 ;
     int end = n-1;
       for(int i =0 ; i < n ; i++){
        for(int j =0 ; j < n ; j++){
            if (colors[i] != colors[j]){
                int d = i - j ;
                maxDistance = max(d , maxDistance);
            }
        } 
       }
     return maxDistance;
    }
};