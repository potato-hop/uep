clear;
hold off;
function [x] = F32(a, b, tk)
if (a <= tk < b)
  x = 1 + (-1*2*(tk.^2));
  return
endif
if (tk < a)
  x = -1;
  return
endif

if (tk >= b)
  x = -7;
  return
endif
endfunction

a1 = - 1;
b1 = 2;
 t1 = -5:0.1:5;
F = F32(a1, b1, t1);
plot(t1, F);
#if(-0.5<F < 0)
# plot(t1, F);
#endif
