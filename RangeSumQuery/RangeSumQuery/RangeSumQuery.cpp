#include <iostream>
#include <vector>
using namespace std;

class RangeSumQuery {
public:
	vector<int> array;
	vector<int> prefixSum;
	RangeSumQuery(vector<int>& array) {
		this->array = array;
		this->prefixSum = calculatePrefixSum(array);
	}
private:
	vector<int> calculatePrefixSum(vector<int>& array) {
		vector<int> result;
		if (array.size() == 0) {
			return result;
		}
		result.push_back(array.at(0));
		for (int i = 1; i < array.size(); ++i) {
			result.push_back(result.at(i - 1) + array.at(i));
		}
		return result;
	}
public:
	int sumRange(int start, int end) {
		if (start < 0 || end < start || end >= prefixSum.size()) {
			return 0;
		}
		return prefixSum.at(end) - prefixSum.at(start) + array.at(start);
	}
};

int main() {
	vector<int> array = {-2, 0, 3, -5, 2, -1};
	RangeSumQuery rangeSumQuery(array);
	cout << rangeSumQuery.sumRange(0, 2) << endl;
	cout << rangeSumQuery.sumRange(2, 5) << endl;
	cout << rangeSumQuery.sumRange(0, 5) << endl;
	return 0;
}