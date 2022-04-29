/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    var m = matrix.length;
    var n = matrix[0].length;
    var track = [];
    
    for(let i=0;i<m;i++){
        for(let j=0;j<n;j++){
            if(matrix[i][j] === 0){
                track.push([i,j]);
            }
        }
    }
    
    for(let i=0;i<track.length;i++){
        var [x,y] = track[i];
        
          for(let j = 0; j < matrix[0].length; j++){
            matrix[x][j] = 0
          }


          for(let j = 0; j < matrix.length; j++){
            matrix[j][y] = 0
          }
    }
    
};