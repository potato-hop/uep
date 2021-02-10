hold off;
clear;

function [a] = S(m, n, x)
  a2 = 1.;
  a = 0.;
  
 for k =0.:1:m
   a2 = ((x/2).^((2 * k)+n));
   f1 = factorial(k);
   f2 = factorial(k+n);
   a2 = a2 * (((-1)^k)/(f1*f2));
   a = a2 + a;
   #a2 = 1.;
   #disp(k);
   #   disp("___");

   #   disp(n);

 endfor

endfunction

#disp("x0");

 x2 = 0:0.25:10;
 y2 = S(8, 6, x2);
  #      disp(y2);

 plot(x2, y2);