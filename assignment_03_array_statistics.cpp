
int getSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

double getAverage(int arr[], int n) {
    return (double)getSum(arr, n) / n;
}

int getMax(int arr{}, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: N must be a positive integer," <<endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << (i + 1) << "; ";
        cin >> arr[i];
    }

    cout << "Results:" << endl;
    cout << "Sum: " << getSum(arr, n) << endl;
    cout << "Average: " << getAverage(arr, n) << endl;
    cout << "Maximum: " << getMax(arr, n) << endl;
    cout << "Minimum: " << getSMin(arr, n) << endl;
    
    return 0;
}
    


