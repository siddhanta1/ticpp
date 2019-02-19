std::vector<int> a;//looks like this: 2,0,1,5,0
std::vector<int> b;//looks like this: 0,0,1,3,5

// std::plus adds together its two arguments:
std::transform (a.begin(), a.end(), b.begin(), a.begin(), std::plus<int>());