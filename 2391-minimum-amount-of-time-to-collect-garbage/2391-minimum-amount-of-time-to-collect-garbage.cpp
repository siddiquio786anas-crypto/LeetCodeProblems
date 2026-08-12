class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickP=0;
        int lastHP=0;
        int pickM=0;
        int lastHM=0;
        int pickG=0;
        int lastHG=0;
        for(int i=0;i<garbage.size();i++){
            string Gb=garbage[i];
            for(int j=0;j<Gb.length();j++){
                char gtype=Gb[j];
                if(gtype=='G'){
                    pickG++;
                    lastHG=i;
                }
                else if(gtype=='P'){
                    pickP++;
                    lastHP=i;
                }
                else if(gtype=='M'){
                    pickM++;
                    lastHM=i;
                }
            }
        }
        
        int travelP=0;
        int travelG=0;
        int travelM=0;
        for(int i=0;i<lastHP;i++){
            travelP+=travel[i];
        }
        for(int i=0;i<lastHM;i++){
            travelM+=travel[i];
        }
        for(int i=0;i<lastHG;i++){
            travelG+=travel[i];
        }
        int total=(pickP+pickM+pickG)+(travelP+travelM+travelG);
        return total;

    }
};