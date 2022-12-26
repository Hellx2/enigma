export let range = (start, stop = undefined, step = undefined) {
  if(!stop) {
    stop = start;
    start = 0;
  }
  if(!step) step = 1;
  if(start > stop || step <= 0 || (start - stop) % step != 0) throw new RangeError();
  let r = [];
  for(let i = start; i < stop; i += step) r.push(i);
  return r;
}

let math = {
  max: (...nums) => {
    let max = -Infinity;
    for(let num of nums)
      if(Number(num) > max) 
        max = Number(num);
    return max;
  },
  min: (...nums) => {
    let min = Infinity;
    for(let num of nums)
      if(Number(num) < min) 
        min = Number(num);
    return min;
  }
}
