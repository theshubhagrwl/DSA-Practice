var postorderTraversal = function(root) {
    if(!root) return [];
    let res = [];
    let stack = [root];
    
    while(stack.length){
        var curr = stack.pop();
        res.unshift(curr.val);
        if(curr.left) stack.push(curr.left)
        if(curr.right) stack.push(curr.right)
    }
    return res;
    
};
