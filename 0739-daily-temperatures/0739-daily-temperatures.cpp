class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size(), 0);
        vector<int> index;

        for (int i = 0; i < temperatures.size(); i++) {

            while (!index.empty() &&
                temperatures[i] > temperatures[index.back()]) {

                int previousIndex = index.back();
                index.pop_back();

                answer[previousIndex] = i - previousIndex;
            }

            index.push_back(i);
        }
        return answer; 
    }
};