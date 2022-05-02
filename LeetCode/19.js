/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    // let temp = head;
    // let length = 0;
    // while(temp){
    //     length++;
    //     temp = temp.next;
    // }
    // if(length===1)return null;
    // temp = head;
    // let c = 1;
    // while(c < length-n && temp.next !== null){
    //     temp = temp.next;
    //     c++;
    // }
    // console.log(temp.val)
    // let temp2 = temp.next;
    // if(temp2){
    //     temp.next = temp2.next;    
    // }
    // else{
    //     temp.next = null;    
    // }
    // return head;
    
    let slow = head, fast = head;
    while(n--){
        fast = fast.next;
    }
    
    while(fast && fast.next){
        fast = fast.next;
        slow = slow.next;
    }
    
    if(!fast){
        head = head.next;
    }else{
        slow.next = slow.next ? slow.next.next : null;
    }
    
    return head;
    
    
    
    
};
