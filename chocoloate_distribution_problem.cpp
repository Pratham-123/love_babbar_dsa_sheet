 public:
    long long findMinDiff(vector<long long> arr, long long n, long long m){
    //code
    if (m == 0 || n == 0)
        return 0;
 
    // Sort the given packets
    sort(arr.begin(), arr.end());
 
    // Number of students cannot be more than
    // number of packets
    if (n < m)
        return -1;
 
    // Largest number of chocolates
    long long  min_diff = INT_MAX;
 
    // Find the subarray of size m such that
    // difference between last (maximum in case
    // of sorted) and first (minimum in case of
    // sorted) elements of subarray is minimum.
 
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
    }   