class MinHeap {
  constructor() {
    this.heap = [null];
  }
  getMin() {
    return this.heap[1];
  }
  insert(node) {
    this.heap.push(node);
    if (this.heap.length > 1) {
      let current = this.heap.length - 1;
      while (
        current > 1 &&
        this.heap[Math.floor(current / 2)] > this.heap[current]
      ) {
        [this.heap[Math.floor(current / 2)], this.heap[current]] = [
          this.heap[current],
          this.heap[Math.floor(current / 2)],
        ];
        current = Math.floor(current / 2);
      }
    }
  }
}

class MaxHeap {
  constructor() {
    this.heap = [null];
  }
  getMax() {
    return this.heap[1];
  }
  insert(node) {
    this.heap.push(node);
    if (this.heap.length > 1) {
      let current = this.heap.length - 1;
      while (
        current > 1 &&
        this.heap[Math.floor(current / 2)] < this.heap[current]
      ) {
        [this.heap[Math.floor(current / 2)], this.heap[current]] = [
          this.heap[current],
          this.heap[Math.floor(current / 2)],
        ];
        current = Math.floor(current / 2);
      }
    }
  }
}

const minheap = new MinHeap();
minheap.insert(20);
minheap.insert(4);
minheap.insert(5);
minheap.insert(2);
console.log(minheap.getMin());

const maxheap = new MaxHeap();
maxheap.insert(20);
maxheap.insert(30);
maxheap.insert(5);
maxheap.insert(2);
console.log(maxheap.getMax());
