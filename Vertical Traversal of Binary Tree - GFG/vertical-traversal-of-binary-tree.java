//{ Driver Code Starts
//Initial Template for Java

//Contributed by Sudarshan Sharma
import java.util.LinkedList; 
import java.util.Queue; 
import java.io.*;
import java.util.*;

class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}

class GfG {
    
    static Node buildTree(String str){
        
        if(str.length()==0 || str.charAt(0)=='N'){
            return null;
        }
        
        String ip[] = str.split(" ");
        // Create the root of the tree
        Node root = new Node(Integer.parseInt(ip[0]));
        // Push the root to the queue
        
        Queue<Node> queue = new LinkedList<>(); 
        
        queue.add(root);
        // Starting from the second element
        
        int i = 1;
        while(queue.size()>0 && i < ip.length) {
            
            // Get and remove the front of the queue
            Node currNode = queue.peek();
            queue.remove();
                
            // Get the current node's value from the string
            String currVal = ip[i];
                
            // If the left child is not null
            if(!currVal.equals("N")) {
                    
                // Create the left child for the current node
                currNode.left = new Node(Integer.parseInt(currVal));
                // Push it to the queue
                queue.add(currNode.left);
            }
                
            // For the right child
            i++;
            if(i >= ip.length)
                break;
                
            currVal = ip[i];
                
            // If the right child is not null
            if(!currVal.equals("N")) {
                    
                // Create the right child for the current node
                currNode.right = new Node(Integer.parseInt(currVal));
                    
                // Push it to the queue
                queue.add(currNode.right);
            }
            i++;
        }
        
        return root;
    }
    static void printInorder(Node root)
    {
        if(root == null)
            return;
            
        printInorder(root.left);
        System.out.print(root.data+" ");
        
        printInorder(root.right);
    }
    
	public static void main (String[] args) throws IOException{
	        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	        
	        int t=Integer.parseInt(br.readLine());
    
	        while(t-- > 0){
	            String s = br.readLine();
    	    	Node root = buildTree(s);
                Solution obj = new Solution();
                ArrayList <Integer> res = obj.verticalOrder(root);
                for (Integer num : res) System.out.print(num + " "); 
                System.out.println();
    	        
	        }
	}
}

// } Driver Code Ends


class Solution {
    static class Pair {
        int hd;
        Node node;

        Pair(Node node, int hd) {
            this.hd = hd;
            this.node = node;
        }
    }

    static ArrayList<Integer> verticalOrder(Node root) {
        Queue<Pair> q = new LinkedList<>();
        q.add(new Pair(root, 0));

        Map<Integer, ArrayList<Integer>> mp = new TreeMap<>(); 

        while (!q.isEmpty()) {
            Pair curr = q.poll();
            int hd = curr.hd;
            Node n = curr.node;

            if (mp.containsKey(hd)) {
                mp.get(hd).add(n.data);
            } else {
                ArrayList<Integer> arr = new ArrayList<>();
                arr.add(n.data);
                mp.put(hd, arr);
            }

            if (n.left != null) {
                q.add(new Pair(n.left, hd - 1));
            }
            if (n.right != null) {
                q.add(new Pair(n.right, hd + 1));
            }
        }

        ArrayList<Integer> ans = new ArrayList<>();

        for (Map.Entry<Integer, ArrayList<Integer>> e : mp.entrySet()) {
            ArrayList<Integer> res = e.getValue();
            for (int x : res) {
                ans.add(x);
            }
        }

        return ans;
    }
}