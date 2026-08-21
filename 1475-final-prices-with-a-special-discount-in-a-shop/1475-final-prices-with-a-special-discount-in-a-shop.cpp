class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       vector <int> output;
       for(int i=0; i<prices.size(); i++){
            int j=i+1;
            while(j<prices.size() && prices[i]<prices[j]){
                j++;
                
            }
            if(j<prices.size()){
                output.push_back(prices[i]-prices[j]);
            }
            else{
                output.push_back(prices[i]);
            }   
        }
       return output; 
    }
};