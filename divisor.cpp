//the program asks the user for a number that is going to divide values

#include <algorithm>
#include <iostream>
#include <vector>
#include <ctime>

std::vector<int> rand_num_gen(int num_of_nums, int min, int max);

int main()
{
    std::vector<int> vec_vals;
    vec_vals = rand_num_gen(10, 1, 50);
    std::vector<int> divisible;
    int divisor = 0;
    for(auto val : vec_vals){
        std::cout << val << "\t";
    }
    std::cout << std::endl;

    //sorting the vector
    std::sort(vec_vals.begin(), vec_vals.end(),
              [](int x, int y) { return x < y; });

    std::cout << "Enter the divisor: ";
    std::cin >> divisor;
    std::copy_if(vec_vals.begin(), vec_vals.end(), std::back_inserter(divisible),
                 [divisor](int x) { return (x % divisor) == 0; });

    for (auto val : divisible)
    {
        std::cout << val << "\n";
    }
    return 0;
}

std::vector<int> rand_num_gen(int num_of_nums, int min, int max)
{
    std::vector<int> return_vec;
    srand(time(NULL));

    int index = 1;
    int random_val = 0;
    while (index < num_of_nums)
    {

        random_val = min + std::rand() % ((max + 1) - min);
        return_vec.push_back(random_val);

        index++;
    }
    return return_vec;
}