class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        unordered_map<int,int>seen;
        string result = "";
        if((numerator < 0) ^ (denominator < 0)){
            result += "-";
        }
        
        long long d = llabs((long long)denominator);
        long long n = llabs((long long)numerator);

        result += to_string(n / d);

        long long remainder = n % d;
        

        if(remainder != 0){
            result += ".";
            int pos = result.size();
            while(remainder != 0){
                
                if(seen.count(remainder)){
                    result.insert(seen[remainder],"(");
                    result += ")";
                    break;
                }

                seen[remainder] = pos;

                remainder *= 10;
                long long digit = abs(remainder / denominator);
                result += to_string(digit);

                remainder %= denominator;

                pos++;
            }

        }
        if(result == "-0") result = "0";
        return result;
    }
};