class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {

        int sum1 = 0, sum2 = 0;

        if (start > destination)
            swap(start, destination);

        for (auto i = 0; i < distance.size(); ++i) {
            if (i >= start && i < destination)
                sum1 += distance[i];
            else
                sum2 += distance[i];
        }

        return min(sum1, sum2);
    }
};

// Another Way
/*
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {

        int sum1 =0, sum2=0;

        // start to destination
        for(int i =start; i != destination ; i = (i+1)%distance.size())
            sum1 += distance[i];

        // destination to start
        for(int i = destination; i!=start; i = (i+1)%distance.size())
            sum2 += distance[i];

        return min(sum1,sum2);

    }
};

*/
