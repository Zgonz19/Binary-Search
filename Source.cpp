#include <iostream>
#include <math.h>
#include <chrono>
#include <thread>
#include <iostream>
using Clock = std::chrono::steady_clock;
using std::chrono::time_point;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using namespace std::literals::chrono_literals;
using std::this_thread::sleep_for;

int binarySearch(int arr[], int l, int r, int x) {
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main() {
	// 2 places you need to change size
	int arraySize = 128; 
	int ar[128]; 
	//
	for (int i = 0; i < arraySize; i++) {
		ar[i] = i;
	}
	time_point<Clock> start = Clock::now();
	//128     = 
	//512     = 
	//2048    = 
	//8192    =
	//32768   =
	//131072  =
	//524288  =
	//2097152 =
	int target = arraySize+1;
	for (double i = 0; i < 10000000; i++) {
		binarySearch(ar, 0, arraySize - 1, arraySize+1);
	}
	time_point<Clock> end = Clock::now();
	milliseconds diff = duration_cast<milliseconds>(end - start);
	std::cout << diff.count() << "ms" << std::endl;
	system("pause");
	return 0;
}
