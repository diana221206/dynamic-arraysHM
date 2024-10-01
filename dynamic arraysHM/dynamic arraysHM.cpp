// dynamic arraysHM.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));

    int n;
    std::cout << 
    std::cout >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i] = std::rand() % 41 - 20;
    }
    std::vector<int> positives;
    std::vector<int> negatives;
    std::vector<int> zeros;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positives.push_back(arr[i]);
        }
        else if (arr[i] < 0) {
            negatives.push_back(arr[i]);
        }
        else {
            zeros.push_back(arr[i]);
        }
    }
    std::cout<<
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout <<
    for (int num : positives) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout <<
    for (int num : negatives) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout <<
    for (int num : zeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}