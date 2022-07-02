class Solution {
public:
    int maxArea(int h, int w, vector<int>& hori, vector<int>& vert) {
        sort(hori.begin(),hori.end());
        sort(vert.begin(),vert.end());
        int hmax=0,wmax=0;
        
        int i;
        for(i=1;i<hori.size();i++){
            hmax = max(hmax,hori[i] - hori[i-1]);
        }
        hmax = max(hmax,hori[0]);
        hmax = max(hmax,h - hori[hori.size()-1]);
        
        for(i=1;i<vert.size();i++){
            wmax = max(wmax,vert[i] - vert[i-1]);
        }
        wmax = max(wmax,vert[0]);
        wmax = max(wmax,w - vert[vert.size()-1]);
        int m = 1000000007;
        return ((long)hmax*wmax) % (int)m;
    }
};