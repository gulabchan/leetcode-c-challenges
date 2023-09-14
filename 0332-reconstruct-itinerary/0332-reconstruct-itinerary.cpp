class Solution {
public:
	vector<string> order;
	unordered_map<string, priority_queue<string, vector<string>, greater<string>>> graph;
	void DFS(string source) {

		// traversing the neighboring edges
		while (!graph[source].empty()) {
			// use the source edge
			// each edge is used only once, remove it
			auto edge = graph[source].top();
			graph[source].pop();

			DFS(edge);
		}

		// add the curr node, as there is no other way from here
		order.emplace_back(source);
	}

	vector<string> findItinerary(vector<vector<string>>& tickets) {
		// create the graph, all the edges in sorted lexographically
		for (auto edge : tickets) {
			string from = edge[0], to = edge[1];
			graph[from].push(to);
		}

		DFS("JFK");
		
		// later can be found in front of order vector, so reverse it
		reverse(order.begin(), order.end());
		return order;
	}
};