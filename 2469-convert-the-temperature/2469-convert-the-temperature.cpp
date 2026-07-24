class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>convert;
        double kelvin=celsius+273.15;
        double fahrenheit=celsius*1.8+32;
        convert.push_back(kelvin);
        convert.push_back(fahrenheit);
        return convert;
    }
};