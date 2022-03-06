var searchBST = function(root, val) {
    let curr = root;
    // let flag = 1;
    while(curr){
        if(val === curr.val){
            // flag = 0;
            return curr;
        } 
        else if(val > curr.val){
            curr = curr.right;
        }
        else if(val < curr.val){
            curr = curr.left;
        }
        
    }
    return null;
};
