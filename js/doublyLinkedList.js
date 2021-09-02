class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
    this.prev = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.size = 0;
  }

  add(element) {
    var newNode = new Node(element);
    if (this.head == null) {
      this.head = newNode;
    } else {
      var current = this.head;
      while (current) {
        current = current.next;
      }
      current.next = newNode;
      newNode.prev = current;
      newNode.next = null;
    }
    this.size++;
  }

  delete(element) {
    var current,
      previous,
      i = 0;
    if (this.head.data == element) {
      this.head = this.head.next;
      this.head.prev = null;
    } else {
      while (current) {
        if (current.data == element) {
          previous.next = current.next;
          current.prev = previous;
          this.size--;
          return i;
        }
        i++;
        previous = current;
        current = current.next;
      }
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
console.log("Removed: ", ll.remove(30));
ll.printList();
