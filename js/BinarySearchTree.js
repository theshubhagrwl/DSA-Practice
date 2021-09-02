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
}

var bst = new BinarySearchTree();
console.log(bst.insert(5));
bst.insert(10);
bst.insert(15);
bst.insert(2);
console.log(bst.find(10));
