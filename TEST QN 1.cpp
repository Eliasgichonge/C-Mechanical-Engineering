#include <iostream>
#include <vector>

using namespace std;

class ArrayProcessor {
public:
    static int findLargest(const std::vector<int>& arr) {
        int largest = arr[0];
        for (int num : arr) {
            if (num > largest) {
                largest = num;
            }
        }
        return largest;
    }
};

int main() {
	
    std::vector<int> arr = {23, 12, 34, 9, 40, 56, 35, 71, 69, 50};
    std::cout << "Largest element: " << ArrayProcessor::findLargest(arr) << std::endl;
    return 0;
}