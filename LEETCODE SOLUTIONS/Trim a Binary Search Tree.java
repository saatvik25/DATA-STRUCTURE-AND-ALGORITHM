


class Solution {
    public TreeNode trimBST(TreeNode root, int low, int high) {
        return helper(root,low,high);
    }
    public TreeNode helper(TreeNode roott,int low,int high){
        if(roott==null){
            return roott;
        }
        else if(roott.val<low){
            return helper(roott.right,low ,high);
        }
        else if(roott.val>high){
            return helper(roott.left,low,high);
        }
        
        roott.right = helper(roott.right,low,high);
           roott.left = helper(roott.left,low,high);


         return roott;
    }
   
}
