// calculate Donation Percentages
#include <iostream>
#include <vector>

std::vector<std::string> calculateDonationPercentages(std::vector<std::string> names,std::vector<float> donations) 
{
    std::vector<std::string> result;
    float sumall = 0.0;
    for(float f :donations)
    {
        sumall += f;
    }
    for(int i = 0; i < names.size(); i++)
    {
        int temp =(donations[i] / 100) * 100;
        result.push_back(names[i]+ ": " +  std::to_string(temp)+ "%");
    }
    return result;
}

int main()
{
    // 'فاطمة: 50%, علي: 50%
    // std::vector<std::string> na {"فاطمة", "علي", "خالد"};
    // std::vector<float> fl {50.0, 25.0, 25.0};

        std::vector<std::string> na {"فاطمة", "علي"};
    std::vector<float> fl {100, 100};

    for(auto c : calculateDonationPercentages(na,fl))
    {
        std::cout << c<< " ";
    }

}