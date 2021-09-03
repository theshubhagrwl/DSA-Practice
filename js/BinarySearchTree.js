class Node {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null;
  }

  insert(value) {
    var newNode = new Node(value);
    if (this.root === null) {
      this.root = newNode;
      return this.root;
    }
    let current = this.root;
    while (current) {
      if (value === current.value) {
        return undefined;
      }
      if (value < current.value) {
        if (current.left === null) {
          current.left = newNode;
          return this.current;
        }
        current = current.left;
      } else {
        if (current.right === null) {
          current.right = newNode;
          return this.current;
        }
        current = current.right;
      }
    }
  }

  find(value) {
    if (this.root === null) {
      return false;
    }
    let current = this.root;
    let found = false;
    while (current && !found) {
      if (value < current.value) {
        current = current.left;
      } else if (value > current.value) {
        current = current.right;
      } else {
        found = current;
      }
    }
    if (!found) return undefined;
    return found;
  }

  remove(root, value) {
    if (!root) {
      return null;
    }
    if (value < root.value) {
      root.left = this.remove(root.left, value);
    } else if (value > root.value) {
      root.right = this.remove(root.right, value);
    } else {
      if (!root.left) {
        return root.right;
      } else if (!root.right) {
        return root.left;
      } else {
        root.value = getMin(root.right);
        root.right = this.remove(root.right, root.value);
      }
    }
    return root;
  }

  getMin(root) {
    while (root.left) {
      root = root.left;
    }
    return root.val;
  }

  getRoot() {
    return this.root;
  }

  inOrder(node) {
    if (node !== null) {
      this.inOrder(node.left);
      console.log(node.value);
      this.inOrder(node.right);
    }
  }

  preOrder(node) {
    if (node !== null) {
      console.log(node.value);
      this.preOrder(node.left);
      this.preOrder(node.right);
    }
  }

  postOrder(node) {
    if (node !== null) {
      this.postOrder(node.left);
      this.postOrder(node.right);
      console.log(node.value);
    }
  }

  bfs() {
    var q = [];
    q.push(this.root);
    while (!q.length < 1) {
      var current = q[0];
      q.shift();
      console.log(current.value);
      if (current.left) {
        q.push(current.left);
      }
      if (current.right) {
        q.push(current.right);
      }
    }
  }
}

var bst = new BinarySearchTree();
console.log(bst.insert(5));
bst.insert(10);
bst.insert(15);
bst.insert(2);
// console.log("status of find", bst.find(10).value);
var root = bst.getRoot();
// console.log("In order");
// bst.inOrder(root);
// bst.remove(root, 2);
// console.log("In order");
// bst.inOrder(root);
// bst.remove(root, 10);
// console.log("In order");
// bst.inOrder(root);
console.log("BFS");
bst.bfs();
console.log("Pre order");
bst.preOrder(root);
// console.log("Post order");
// bst.postOrder(root);
