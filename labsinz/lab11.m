hold off;
clear;
function [x] = lab(a, b, c, d)
  m = [a, b, c, d];
  x = max(m);
  disp(x);
endfunction
