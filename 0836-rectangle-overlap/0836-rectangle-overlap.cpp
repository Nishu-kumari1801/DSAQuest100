class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x_start = max(rec1[0],rec2[0]);
        int x_end = min(rec1[2],rec2[2]);
        bool x_overlap = x_start<x_end;

        int y_start = max(rec1[1],rec2[1]);
        int y_end = min(rec1[3],rec2[3]);
        bool y_overlap = y_start<y_end;

        return x_overlap && y_overlap;
    }
};