hold off;
clear;
#function [a] = zy(x1, y1)

 #a = x1 .* y1 .* log((x1.^2) .+ (y1.^2))

#endfunction
x = [0:0.1:2];
 y = [0:0.05:1];
#z = zy(x, y);
f1 = x.^2;
f2 = y.^2;
f3 = f1 .+ f2;
z = x .* y .* log(f3);
plot3(x, y, z);
