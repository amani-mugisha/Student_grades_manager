#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
int main() {
    std::vector<int> vec;
    std::vector<int> failed;
    std::vector<int> success;
    std::vector<int> sorted;
    std::vector<int> find;
    std::vector<int> find_index;
    int n, num, index1;
    std::cout<<"number of students: ";
    std::cin>>n;
    int i = 0;
    do {
        std::cout<<"grade of student "<<i+1<<": ";
        std::cin>>num;
        vec.push_back(num);
        i++;
    }while (i < n);int small = vec[1], big = vec[1];
    for (int k = 0; k < (vec.size()-1); k++) {
        if (vec[k] < vec[k+1]) {
            big = vec[k+1];
        }
    }
    for (int k = 0; k < (vec.size()-1); k++) {
        if (vec[k] > vec[k+1]) {
            small = vec[k+1];
        }
    }
    float sum = 0;
    for (int j : vec) {
        sum += j;

    }
    sorted = vec;
    for (int j : vec) {
        if (j < 50) {
            failed.push_back(j);
        }else {success.push_back(j);}
    }
    std::sort(sorted.begin(), sorted.end());

    float vrg = sum / n;
    std::cout<<"The average: "<<vrg<<std::endl;
    std::cout<<"Big one: "<<big<<std::endl;
    std::cout<<"Small one: "<<small<<std::endl;
    std::cout<<"Number of students failed: "<<failed.size()<<std::endl;
    std::cout<<"Number of students success: "<<success.size()<<std::endl;
    std::cout<<"Sorted: ";
    for (int t: sorted) {
        std::cout<<t<<",";

    }
    std::string ans;
    for (auto &c : ans) {
        c = std::tolower(c);
    }

    std::cout<<"Do you wanna search a given index? y/n  ";
    std::cin>>ans;

    if (ans == "y") {
        std::cout<<"Please mention the grade: ";
        std::cin>>index1;
        for (int j = 0; j<vec.size(); j++) {
            if (vec.at(j) == index1) {
                find.push_back(vec.at(j));
                find_index.push_back(j);
            }
        }
        std::cout<<index1<<" is at the index of ";
        for (int j: find_index) {
            std::cout<<j<<",";
        }

    }
    else {
        std::cout<<"Thanks!";
        exit(0);
    }
}