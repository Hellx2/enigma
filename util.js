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
