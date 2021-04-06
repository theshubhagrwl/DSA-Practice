const gridTraveller = (n, m, memo = {}) => {
  const key = m + "," + n;
  if (key in memo) return memo[key];
  if (m == 1 && n == 1) return 1;
  if (m == 0 || n == 0) return 0;
  memo[key] = gridTraveller(n - 1, m, memo) + gridTraveller(n, m - 1, memo);
  return memo[key];
};

const gridTravellerWithoutDP = (n, m) => {
  if (m == 1 && n == 1) return 1;
  if (m == 0 || n == 0) return 0;
  return gridTravellerWithoutDP(n - 1, m) + gridTravellerWithoutDP(n, m - 1);
};

console.log(gridTravellerWithoutDP(2, 3));
console.log(gridTravellerWithoutDP(5, 5));
console.log(gridTravellerWithoutDP(18, 18));

console.log(gridTraveller(2, 3));
console.log(gridTraveller(5, 5));
console.log(gridTraveller(18, 18));
