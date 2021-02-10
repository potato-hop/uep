hold off;
clear;

function [a] = S(n, x)
  a2 = 1.;
  a = 0.;
  
 for k =1.:1:n
   h1 = sin((k*x)/2);
   h2 = sin(((k* x) - 1) / 2);
   f1 = exp((x-1)/k);
   a2 = ((h1 + h2) / f1) - 0.8;
   a = a2 + a;
   #a2 = 1.;
  # disp(x);
      #disp("___");

      #disp(a2);

endfor
h = sqrt(n * pi * x)/50;
a = a * h;

endfunction

#disp("x0");

 x2 = 0:0.01:3;
 y2 = S(7, x2);
 y3 = S(15, x2);
  #      disp(y2);

 plot(x2, y2);
 hold on;
 plot(x2, y3);