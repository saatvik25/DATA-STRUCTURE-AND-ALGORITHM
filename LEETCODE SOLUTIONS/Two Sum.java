


class Solution {
    
    
    public static void inorder(TreeNode root,List<Integer> arr){
        if(root == null)
            return;
      inorder( root.left, arr);
        arr.add(root.val);
        inorder(root.right,arr);
    }
    
    
    public boolean findTarget(TreeNode root, int target) {
        List<Integer> l1 = new ArrayList<>();
        inorder(root, l1);
        int i =0; 
        int j = l1.size()-1;
        while(i<j){
            int sum = l1.get(i)+l1.get(j);
            if(sum == target){
                return true;
            }
           else if(sum > target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
        
        
    }
    


    
}
