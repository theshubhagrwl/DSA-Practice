/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var swapNodes = function(head, k) {
    if(head.next===null) return head;
    let temp1 = null;
    let temp2 = null;
    let count = 0;
    let curr = head;
    let length = 0;
    
    while(curr.next){
        length++;
        curr=curr.next;
    }
    
    curr = head;
    while(curr){
        if(count+1 === k){
            temp1 = curr;
        }
        if(length-count===k-1){
            temp2 = curr;
        }
        count++;
        if(!temp1) temp1= curr;
        if(!temp2) temp2= curr;
        curr=curr.next;
    }
    let temp = temp1.val;
    temp1.val = temp2.val;
    temp2.val = temp;
    
    return head;
};
