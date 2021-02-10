hold off;
clear;

function [x] = S(m)
  x=0;
 while m >= 1
   e = 1 / (m*(m^(1/2)));
   x = x + e;
   m -= 1;
 endwhile
 disp(x);
endfunction
