hold off;
clear;

function [a] = S(x, t, p)

  a = 0.;
  f1 = exp(((x-p).^2)* t * -1);
  f2 = exp(((x+p).^2)* t * -1);
  a = f1+f2;

endfunction

#disp("x0");

 u = -3:1:3;
 for k = 0.5:0.25:2
 y2 = S(u, k, 1);
  plot(u, y2);
 hold on;
 #y3 = S(x2, u, 1);
  #      disp(y2);
endfor;

 plot(x2, y3);