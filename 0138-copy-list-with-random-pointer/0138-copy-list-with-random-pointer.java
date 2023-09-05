// Step-1 -> Check if the given linked list is empty; if so, return an empty list.
// Step-2 -> Create a mapping (a dictionary or hashmap) to connect original nodes with their copies.
// Step-3 -> Traverse the original list, creating a new node for each one and record it in the mapping.
// Step-4 ->Go through the list again, connecting the new nodes' 'next' and 'random' pointers using the mapping.
// Step-5 ->Return the node from the mapping that corresponds to the original head to complete the duplication.

// Complexity
// Time complexity: O(n)
// Space complexity: O(n)
// Code
class Solution {
    public Node copyRandomList(Node head) {
        if(head == null) return null;
        Map<Node,Node> map = new HashMap();
        Node curr = head;
        // First Pass - Copy Nodes
        while(curr != null){
            map.put(curr,new Node(curr.val));
            curr = curr.next;
        }
        // Second Pass - Connect Nodes
        for(Node key : map.keySet()){
            Node newNode = map.get(key);
            newNode.next = map.get(key.next);
            newNode.random = map.get(key.random);
        }
        return map.get(head);
    }
}