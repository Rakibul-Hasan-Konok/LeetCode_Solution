class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;  
        for (int a : asteroids) {
            
            while (!result.empty() && result.back() > 0 && a < 0) {
                int top = result.back();

                if (top < -a) {
                    result.pop_back();  
                } else if (top == -a) {
                    result.pop_back(); 
                    a = 0;             
                    break;
                } else {
                    a = 0;  
                    break;
                }
            }

            if (a != 0) {
                result.push_back(a);
            }
        }

        return result;
    }
};
