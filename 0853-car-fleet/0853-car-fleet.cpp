class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        // Position descending order
        sort(cars.begin(), cars.end(), greater<pair<int, int>>());

        int fleet = 0;
        double lastTime = 0;

        for (auto car : cars) {
            double time = (double)(target - car.first) / car.second;

            // New fleet
            if (time > lastTime) {
                fleet++;
                lastTime = time;
            }
            // else:
            // Current car catches the fleet ahead,
            // so nothing changes.
        }

        return fleet;
    }
};