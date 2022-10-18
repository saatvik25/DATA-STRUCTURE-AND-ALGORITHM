class Node{
    int data;
    Node next;
    Node(int x){
        data = x;
        next = null;
    }
}
public class Main
{
	public static void main(String[] args) {
		Node head = new Node(10);
		Node temp1 = new Node(122);
		Node temp2 = new Node(20);
		head.next = temp1;
		temp1.next = temp2;
		
		Node curr = head;
		while(curr != null){
		 
		    System.out.print(curr.data+"->");
		    curr = curr.next;
		  
		    if(curr == null){
		        System.out.print("null");
		    }
		}
	}
}
// }
