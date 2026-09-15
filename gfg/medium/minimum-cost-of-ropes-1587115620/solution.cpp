class Solution {
	public:
	int minCost(vector<int>& arr) {
		// code here
		priority_queue<int, vector<int>, greater<int>> minHeap;
		for (int i = 0; i<arr.size(); i++) {
			minHeap.push(arr[i]);
		}
		int total_cost = 0;
		while (minHeap.size()>1) {
			int r1 = minHeap.top();
			minHeap.pop();
			int r2 = minHeap.top();
			minHeap.pop();
			int rl = r1 + r2;
			total_cost += rl;
			minHeap.push(rl);
		}
		return total_cost;
	}
};
