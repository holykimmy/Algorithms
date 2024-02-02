#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

void print_out(const std::string& my_string) {
    std::cout << my_string << std::endl;
}

std::string myfunction(const std::string& result_string) {
    std::vector<char> values;
    int cur_freq = 1;
    int max_n = -1;

    for (size_t i = 0; i < result_string.size() - 1; ++i) {
        if (result_string[i] == result_string[i + 1]) {
            cur_freq += 1;
        } else {
            if (cur_freq == max_n) {
                max_n = cur_freq;
                values.push_back(result_string[i]);
                cur_freq = 1;
            } else if (cur_freq > max_n) {
                if (!values.empty()) {
                    values.pop_back();
                }
                max_n = cur_freq;
                values.push_back(result_string[i]);
                cur_freq = 1;
            }
        }
    }

    // Last digit check
    if (cur_freq == max_n) {
        max_n = cur_freq;
        values.push_back(result_string.back());
    } else if (cur_freq > max_n) {
        if (!values.empty()) {
            values.pop_back();
        }
        max_n = cur_freq;
        values.push_back(result_string.back());
        cur_freq = 1;
    }

    // Print values if needed
    // for (char value : values) {
    //     std::cout << value << " ";
    // }
    // std::cout << std::endl;

    if (max_n == 1) {
        return "";
    } else {
        std::sort(values.begin(), values.end());
        return std::string(values.begin(), values.end());
    }
}

std::string remove_adjacent_duplicates(const std::string& input_str) {
    std::string result;
    result.push_back(input_str[0]);
    for (size_t i = 1; i < input_str.size(); ++i) {
        if (input_str[i] != result.back()) {
            result.push_back(input_str[i]);
        }
    }
    return result;
}

std::string distinct_string(const std::string& input_str) {
    std::set<char> char_set(input_str.begin(), input_str.end());
    std::string result(char_set.begin(), char_set.end());
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    // int n = 5;
    int arr[5] ;
    std::vector<int> arr = {23, 22, 18, 11, 13};
    // 1113182223 -> 131823

    // int n = 10;
    // std::vector<int> arr = {33, 11, 11, 22, 22, 22, 22, 22, 33, 33};

    // int n = 10;
    // std::vector<int> arr = {2, 1, 3, 4, 6, 5, 7, 10, 9, 8};

    // int n = 10;
    // std::vector<int> arr = {11, 11, 11, 22, 22, 22, 22, 22, 22, 22};

    std::sort(arr.(), arr.end());
    std::string result_string;
    for (int num : arr) {
        result_string += std::to_string(num);
    }

    std::string out_condition = myfunction(result_string);
    if (!out_condition.empty()) {
        std::cout << result_string << std::endl;
        print_out(out_condition);
        std::cout << remove_adjacent_duplicates(result_string) << std::endl;
    } else {
        std::cout << result_string << std::endl;
        std::cout << distinct_string(result_string) << std::endl;
        std::cout << result_string << std::endl;
    }

    return 0;
}
