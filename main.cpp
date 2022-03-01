#include <array>
#include <cstdio>

int main()
{
        std::array<int, 2> x   = {1, 2};
        //  for (int i = 0; i < x.size(); i += 1)

        int                sum = 0;
        for (int i = 0; i < x.size(); i += 1) { sum = sum + x[i]; }
        std::printf("sum =%d", sum);
}