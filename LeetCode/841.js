// var canVisitAllRooms = function (rooms) {
//   let keysQ = [];
//   for (let i = 0; i < rooms.length; i++) {
//     for (let j = 0; j < rooms[i].length; j++) {
//       keysQ.push(rooms[i][j]);
//     }
//   }

//   console.log(keysQ);

//   rooms[0] = "v";
//   let n = keysQ.length;
//   for (let i = 0; i < n; i++) {
//     let curRoom = keysQ.shift();
//     if (rooms[curRoom] !== "v") {
//       rooms[curRoom] = "v";
//     }
//     console.log("curRoom", curRoom);
//   }

//   console.log(rooms);

//   let leftOver;
//   for (let i = 0; i < rooms.length; i++) {
//     if (rooms[i] === "v") {
//       leftOver = false;
//     } else if (rooms[i].length === 0) {
//       leftOver = false;
//     } else {
//       return false;
//     }
//   }

//   return !leftOver;
// };

var canVisitAllRooms = function (rooms) {
  let visited = new Array(rooms.length);
  let stack = [0];
  visited[0] = 1;
  let count = 1;

  while (stack.length) {
    let keys = rooms[stack.pop()];
    for (let k of keys) {
      if (!visited[k]) {
        stack.push(k);
        visited[k] = 1;
        count++;
      }
    }
  }
  return rooms.length === count;
};
