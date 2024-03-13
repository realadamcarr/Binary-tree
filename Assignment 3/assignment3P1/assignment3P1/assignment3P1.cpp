// assignment3P1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>




    void insertionSort(std::string arr[], int n) {
        for (int i = 1; i < n; ++i) {
            std::string key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    int binarySearch(const std::string arr[], int left, int right, const std::string & target) {
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target)
                return mid;

            if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1; 
    }

    int main() {
        
        std::string arr[] = { "Jon", "Dot", "Eva", "Roy", "Guy", "Jan", "Tom", "Jim", "Ann", "Kim", "Ron", "Tim", "Kay", "Amy" };
        int n = sizeof(arr) / sizeof(arr[0]);

    
        insertionSort(arr, n);

        std::cout << "Sorted array:" << std::endl;
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

       
        std::string target;
        std::cout << "Enter a string to search: ";
        std::cin >> target;

        int position = binarySearch(arr, 0, n - 1, target);
        if (position != -1)
            std::cout << "Position of '" << target << "' in the sorted array: " << position << std::endl;
        else
            std::cout << "String not found in the array." << std::endl;

        return 0;
    }




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
