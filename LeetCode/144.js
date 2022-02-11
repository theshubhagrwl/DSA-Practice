var preorderTraversal = function(root) {
    if(!root){return []}
    
    let res = [];
    let stack = [root];
    
    while(stack.length){
        let cur = stack.pop();
        res.push(cur.val);
        if(cur.right) stack.push(cur.right);
        if(cur.left) stack.push(cur.left);
    }
    
    return res;
};
