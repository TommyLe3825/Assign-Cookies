class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //Sort both vectors so both can start at the beginning for easier matching
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int i = 0, j = 0; //i is current child greed factor and j is available cookie size
        int contentChildren = 0;

        //Iterate through both vectors 
        while (i < g.size() && j < s.size()) {
            //Check if the current cookie size is sufficient for the current child
            if (s[j] >= g[i]) {
                contentChildren++;
                i++;
            }

            // Move to the next cookie, whether or not it satisfies the current child
            j++;
        }

        //Return the maximum number of content children
        return contentChildren;
    }
};
