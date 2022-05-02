/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    var length=0;
    var temp = head;
    while(temp){
        length++;
        temp = temp.next;
    }
    temp = head;
    // console.log(length);
    var n = 0;
    while(n != Math.floor(length/2) && temp){
        temp = temp.next;
        n++;
    }
    return temp;
};
