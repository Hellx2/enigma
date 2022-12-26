export let range = (start, stop = undefined, step = undefined) {
  if(!stop) {
    stop = start;
    start = 0;
  }
  if(!step) step = 1;
}
