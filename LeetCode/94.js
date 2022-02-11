var inorderTraversal = function(root) {
    
    if(!root) return [];
    let res = [];
    let stack = [];
    
    while(root || stack.length != 0){
        while(root){
            stack.push(root);
            root = root.left;
        }
        root = stack.pop()
        res.push(root.val);
        root = root.right;
        
    }
    return res
    
};

