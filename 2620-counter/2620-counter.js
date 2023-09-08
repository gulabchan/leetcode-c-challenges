var createCounter = function(n) {
    let count = n - 1
    return function() {
        count++
        return count
    };
};