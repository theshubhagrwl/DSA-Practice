let cache = []
// cache.fill(null);
cache[0] = 0;
cache[1] = 1;

var fib = function(n) {
    if(cache[n]!==undefined){
        return cache[n];
    }
    if(n <= 1) return 1;
    
    return cache[n] = fib(n-1) + fib(n-2);
        
};

