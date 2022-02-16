var reverseList = function(head) {
    let curr = head;
    let temp = null;
    while(curr){
        let temp2 = curr.next;
        curr.next = temp;
        temp = curr;
        curr = temp2;
    }
    return temp;
};
