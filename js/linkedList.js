class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.size = 0;
  }

  add(element) {
    var node = new Node(element);
    var current;

    if (this.head == null) {
      this.head = node;
    } else {
      current = this.head;
      while (current.next) {
        current = current.next;
      }
      current.next = node;
    }
    this.size++;
  }

  insertAt(element, index) {
    if (index < 0 || index > this.size) {
      return console.log("Invalid Index");
    }
    var node = new Node(element);
    var current, previous;

    current = this.head;
    if (index == 0) {
      node.next = this.head;
      this.head = node;
    } else {
      current = this.head;
      var i = 0;
      while (i < index) {
        i++;
        previous = current;
        current = current.next;
      }
      node.next = current;
      previous.next = node;
    }
    this.size++;
  }

  removeFrom(index) {
    if (index < 0 || index > this.size) {
      return console.log("Invalid Index");
    }
    var current,
      previous,
      i = 0;
    current = this.head;
    previous = current;

    if (index == 0) {
      this.head = current.next;
    } else {
      while (i < index) {
        i++;
        previous = current;
        current = current.next;
      }
      previous.next = current.next;
    }
    this.size--;
    return current.data;
  }

  remove(element) {
    var current = this.head;
    var previous = null;

    while (current != null) {
      if (current.data == element) {
        if (previous == null) {
          this.head = current.next;
        } else {
          previous.next = current.next;
        }
        this.size--;
        return current.data;
      }
      previous = current;
      current = current.next;
    }
    return -1;
  }

  search(element) {
    var current = this.head;
    var i = 0;
    while (current) {
      if (current.data === element) {
        return i;
      }
      current = current.next;
      i++;
    }
    return -1;
  }

  printList() {
    var current = this.head;
    var str = "";
    while (current) {
      str += current.data + " ";
      current = current.next;
    }
    console.log(str);
  }
}

var ll = new LinkedList();
ll.add(10);
ll.add(20);
ll.add(30);
ll.add(40);
ll.add(50);
console.log("Removed: ", ll.removeFrom(1));
console.log("Removed: ", ll.remove(30));
console.log("Found at: ", ll.search(20));
console.log("Found at: ", ll.search(10));
ll.printList();
