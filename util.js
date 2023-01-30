export let range = (start, stop = undefined, step = undefined) => {
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

export let math = {
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
  },
  abs: num => num < 0 ? -num : num,
  floor: num => parseInt(`${num}`.split(".")[0]),
  ceil: num => num > this.floor(num) ? this.floor(num) + 1 : num,
  round: num => num < this.floor(num) + 0.5 ? this.floor(num) : this.ceil(num),
  trunc: this.floor,
  rt: (x, rt) => x ** (1 / rt),
  sqrt: x => this.rt(x, 2),
  pow: (x, y) => x ** y
}

let doc = {};

Object.defineProperty(doc, "#window", {
  get: ((this) => this.window),
  writable: false
});
