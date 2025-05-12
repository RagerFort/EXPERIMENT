#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Segment Tree to store number of events per day
class SegmentTree {
private:
    int size;
    vector<int> tree;

    // Build tree helper
    void build(int node, int start, int end) {
        if (start == end) {
            tree[node] = 0; // No events initially
            return;
        }
        int mid = (start + end) / 2;
        build(node*2, start, mid);
        build(node*2 + 1, mid + 1, end);
        tree[node] = tree[node*2] + tree[node*2 + 1];
    }

    // Update tree helper
    void update(int node, int start, int end, int idx, int val) {
        if (start == end) {
            tree[node] += val;
            if (tree[node] < 0) tree[node] = 0; // No negative events
            return;
        }
        int mid = (start + end) / 2;
        if (idx <= mid) update(node*2, start, mid, idx, val);
        else update(node*2 + 1, mid + 1, end, idx, val);
        tree[node] = tree[node*2] + tree[node*2 + 1];
    }

    // Query range sum helper
    int query(int node, int start, int end, int l, int r) {
        if (r < start || end < l) return 0; // no overlap
        if (l <= start && end <= r) return tree[node]; // full overlap
        int mid = (start + end) / 2;
        int leftSum = query(node*2, start, mid, l, r);
        int rightSum = query(node*2 + 1, mid + 1, end, l, r);
        return leftSum + rightSum;
    }

public:
    SegmentTree(int n) {
        size = n;
        tree.assign(4*n, 0);
        build(1, 1, size);
    }

    // Add val events on day idx (val can be positive or negative)
    void addEvent(int idx, int val) {
        if (idx < 1 || idx > size) {
            cout << "Invalid day: " << idx << ". Day should be between 1 and " << size << ".\n";
            return;
        }
        update(1, 1, size, idx, val);
    }

    // Query number of events in days [l, r]
    int queryEvents(int l, int r) {
        if (l > r) swap(l, r);
        if (l < 1) l = 1;
        if (r > size) r = size;
        return query(1, 1, size, l, r);
    }
};

int main() {
    // Let's assume calendar days from 1 to 365 (one year)
    const int DAYS = 365;
    SegmentTree calendar(DAYS);

    cout << "School Event Calendar Using Segment Tree\n";
    cout << "Commands:\n";
    cout << "  add <day> <count>   - Add count events on day (1-365)\n";
    cout << "  remove <day> <count> - Remove count events on day\n";
    cout << "  query <start> <end> - Query total events in day range\n";
    cout << "  exit                - Exit program\n";

    string command;
    while (true) {
        cout << "\nEnter command: ";
        cin >> command;
        if (command == "add") {
            int day, count;
            cin >> day >> count;
            if (count <= 0) {
                cout << "Count should be positive.\n";
                continue;
            }
            calendar.addEvent(day, count);
            cout << "Added " << count << " event(s) on day " << day << ".\n";
        } else if (command == "remove") {
            int day, count;
            cin >> day >> count;
            if (count <= 0) {
                cout << "Count should be positive.\n";
                continue;
            }
            calendar.addEvent(day, -count);
            cout << "Removed " << count << " event(s) on day " << day << ".\n";
        } else if (command == "query") {
            int start, end;
            cin >> start >> end;
            int total = calendar.queryEvents(start, end);
            cout << "Total events from day " << start << " to " << end << ": " << total << "\n";
        } else if (command == "exit") {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Unknown command. Please try again.\n";
        }
    }
    return 0;
}