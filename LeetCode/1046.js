/**
 * @param {number[]} stones
 * @return {number}
 */
var lastStoneWeight = function(stones) {
    if(stones.length ===1) return stones[0];
    
    while(stones.length > 1){
        stones.sort((a,b)=> b-a);
        // console.log(stones);
        let large = stones[0];
        let small = stones[1];
        if(small === large){
            if(stones.length===2) return 0;
            stones.splice(0,2);
            
        }else{
            stones[0]=stones[0]-stones[1];
            stones.splice(1,1);
        }
    }
    return stones[0];
};
