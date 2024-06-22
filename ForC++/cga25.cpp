#include <iostream>
#include <vector>

int main()
{
    int num;
    while (std::cin >> num)
    {
        std::vector<std::vector<int>> graph(num, std::vector<int>(num));
        int count = 0;
        for (int i = 0; i < num; ++i)
        {
            int sum = 0;
            for (int j = 0; j < num; ++j)
            {
                std::cin >> graph[i][j];
                sum += graph[i][j];
                if (i == j && graph[i][j] == 1)
                {
                    sum++;
                }
            }
            if (sum % 2 != 0)
            {
                count++;
            }
        }
        std::cout << count << std::endl;
        if (count == 2 || count == 0)
        {
            std::cout << "Y" << std::endl;
        }
        else
        {
            std::cout << "N" << std::endl;
        }
    }
    return 0;
}