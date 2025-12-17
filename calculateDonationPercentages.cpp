// calculate Donation Percentages
#include <iostream>
#include <vector>

std::vector<std::string> calculateDonationPercentages(std::vector<std::string> names,std::vector<float> donations) 
{
    std::vector<std::string> result;
    for(int i = 0; i < names.size(); i++)
    {
        result.push_back(names[i]+ ": " +  std::to_string((donations[i] / 100.0) * 100.0) + "%");
    }
    return result;
}

int main()
{
    std::vector<std::string> na {"فاطمة", "علي", "خالد"};
    std::vector<float> fl {50.0, 25.0, 25.0};
    for(auto c : calculateDonationPercentages(na,fl))
    {
        std::cout << c<< " ";
    }

}