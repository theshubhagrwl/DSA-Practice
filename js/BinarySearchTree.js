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
}

var bst = new BinarySearchTree();
console.log(bst.insert(5));
bst.insert(10);
bst.insert(15);
bst.insert(2);
console.log("status of find", bst.find(10).value);
var root = bst.getRoot();
console.log("In order");
bst.inOrder(root);
console.log("Pre order");
bst.preOrder(root);
console.log("Post order");
bst.postOrder(root);
