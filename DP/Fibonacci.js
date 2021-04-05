const fibWithoutDP = (n) => {
  if (n <= 2) return 1;
  return fibWithoutDP(n - 1) + fibWithoutDP(n - 2);
};

const fib = (n, memo = {}) => {
  if (n in memo) return memo[n];
  if (n <= 2) return 1;
  memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
  return memo[n];
};

console.log(fib(6));
console.log(fib(50));
console.log(fibWithoutDP(6));
console.log(fibWithoutDP(50));
